package com.pubgm;

import android.annotation.SuppressLint;
import android.app.AlertDialog;
import android.app.Service;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.SharedPreferences;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.PixelFormat;
import android.graphics.Point;
import android.graphics.Typeface;
import android.graphics.drawable.GradientDrawable;
import android.os.Build;
import android.os.Handler;
import android.os.IBinder;
import android.os.Message;
import android.util.Base64;
import android.util.DisplayMetrics;
import android.util.Log;
import android.util.TypedValue;
import android.view.Display;
import android.view.Gravity;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.WindowManager;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.HorizontalScrollView;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.RelativeLayout;
import android.widget.ScrollView;
import android.widget.SeekBar;
import android.widget.Spinner;
import android.widget.Switch;
import android.widget.TextView;
import android.widget.Switch;
import org.json.JSONArray;
import org.json.JSONObject;

import java.io.IOException;
import java.io.InputStream;
import java.nio.charset.StandardCharsets;

public class Floating extends Service {
    WindowManager windowManager;

    int screenWidth, screenHeight, type, screenDpi;
    float density;

    WindowManager.LayoutParams iconLayoutParams, mainLayoutParams, canvasLayoutParams;
    RelativeLayout iconLayout;
    LinearLayout mainLayout;
    CanvasView canvasLayout;

    RelativeLayout closeLayout, maximizeLayout, minimizeLayout;
    RelativeLayout.LayoutParams closeLayoutParams, maximizeLayoutParams, minimizeLayoutParams;

    ImageView iconImg;

    String[] listTab = {"ESP Player", "ESP World", "Memory Hacks", "Aim Menu", "Other"};
    LinearLayout[] pageLayouts = new LinearLayout[listTab.length];
    int lastSelectedPage = 0;

    SharedPreferences configPrefs;
    long sleepTime = 1000 / 60;

    boolean isMaximized = false;
    int lastMaximizedX = 0, lastMaximizedY = 0;
    int lastMaximizedW = 0, lastMaximizedH = 0;

    int layoutWidth;
    int layoutHeight;
    int iconSize;
    int menuButtonSize;
    int tabWidth;
    int tabHeight;

    float mediumSize = 5.0f;

    private native void onSendConfig(String s, String v);
    static native  void Switch(int i,boolean jboolean1);
    private native void onCanvasDraw(Canvas canvas, int w, int h, float d);

    void CreateCanvas() {
        final int FLAGS = WindowManager.LayoutParams.FLAG_NOT_TOUCH_MODAL |
                WindowManager.LayoutParams.FLAG_LAYOUT_IN_SCREEN |
                WindowManager.LayoutParams.FLAG_FULLSCREEN |
                WindowManager.LayoutParams.FLAG_LAYOUT_INSET_DECOR |
                WindowManager.LayoutParams.FLAG_NOT_FOCUSABLE |
                WindowManager.LayoutParams.FLAG_LAYOUT_NO_LIMITS |
                WindowManager.LayoutParams.FLAG_TRANSLUCENT_STATUS |
                WindowManager.LayoutParams.FLAG_NOT_TOUCHABLE;

        canvasLayoutParams = new WindowManager.LayoutParams(screenWidth, screenHeight, type, FLAGS, PixelFormat.RGBA_8888);

        canvasLayoutParams.x = 0;
        canvasLayoutParams.y = 0;
        canvasLayoutParams.gravity = Gravity.START | Gravity.TOP;

        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.P) {
            canvasLayoutParams.layoutInDisplayCutoutMode = WindowManager.LayoutParams.LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES;
        }

        canvasLayout = new CanvasView(this);
        windowManager.addView(canvasLayout, canvasLayoutParams);
    }

    private class CanvasView extends View {
        public CanvasView(Context context) {
            super(context);
        }

        @Override
        protected void onDraw(Canvas canvas) {
            try {
                onCanvasDraw(canvas, screenWidth, screenHeight, density);
            } catch (Exception ex) {
                ex.printStackTrace();
            }
        }
    }

    private void UpdateConfiguration(String s, Object v) {
        try {
            onSendConfig(s, v.toString());

            SharedPreferences.Editor configEditor = configPrefs.edit();
            configEditor.putString(s, v.toString());
            configEditor.apply();
        } catch (Exception ex) {
            ex.printStackTrace();
        }
    }

    @Override
    public void onDestroy() {
        super.onDestroy();

        if (mUpdateCanvas.isAlive()) {
            mUpdateCanvas.interrupt();
        }
        if (mUpdateThread.isAlive()) {
            mUpdateThread.interrupt();
        }

        if (iconLayout != null) {
            windowManager.removeView(iconLayout);
        }
        if (mainLayout != null) {
            windowManager.removeView(mainLayout);
        }
        if (canvasLayout != null) {
            windowManager.removeView(canvasLayout);
        }
    }

    @Override
    public int onStartCommand(Intent intent, int flags, int startId) {
        super.onStartCommand(intent, flags, startId);
        return START_NOT_STICKY;
    }

    @Override
    public IBinder onBind(Intent intent) {
        return null;
    }

    @Override
    public void onCreate() {
        super.onCreate();
        configPrefs = getSharedPreferences("config", MODE_PRIVATE);
        windowManager = (WindowManager) getSystemService(WINDOW_SERVICE);

        Point screenSize = new Point();
        Display display = windowManager.getDefaultDisplay();
        display.getRealSize(screenSize);

        screenWidth = screenSize.x;
        screenHeight = screenSize.y;
        screenDpi = getResources().getDisplayMetrics().densityDpi;

        density = getResources().getDisplayMetrics().density;

        layoutWidth = convertSizeToDp(450);
        layoutHeight = convertSizeToDp(300);
        iconSize = convertSizeToDp(150);
        menuButtonSize = convertSizeToDp(25);
        tabWidth = convertSizeToDp(150);
        tabHeight = convertSizeToDp(50);

        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
            type = 2038;
        } else {
            type = 2002;
        }

        CreateIcon();
        CreateLayout();
        CreateCanvas();

        mUpdateThread.start();
        mUpdateCanvas.start();
    }

    void AddFeatures() {
        AddSwitch(0, "Bypass Logo [MUST ACTIVATE AT KARFTON LOGO]", false, new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton buttonView, boolean isChecked) {

                Switch(1, isChecked);
            }
        });
        AddSwitch(0, "Line", false, new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton buttonView, boolean isChecked) {
                UpdateConfiguration("ESP::LINE", isChecked ? 1 : 0);
            }
        });
        AddSwitch(0, "Box", false, new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton buttonView, boolean isChecked) {
                UpdateConfiguration("ESP::BOX", isChecked ? 1 : 0);
            }
        });
        AddSwitch(0, "Skeleton [Beta, may causes crash]", false, new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton buttonView, boolean isChecked) {
                UpdateConfiguration("ESP::SKELETON", isChecked ? 1 : 0);
            }
        });
        AddSwitch(0, "Health", false, new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton buttonView, boolean isChecked) {
                UpdateConfiguration("ESP::HEALTH", isChecked ? 1 : 0);
            }
        });
        AddSwitch(0, "Name", false, new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton buttonView, boolean isChecked) {
                UpdateConfiguration("ESP::NAME", isChecked ? 1 : 0);
            }
        });
        AddSwitch(0, "Distance", false, new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton buttonView, boolean isChecked) {
                UpdateConfiguration("ESP::DISTANCE", isChecked ? 1 : 0);
            }
        });
        AddSwitch(1, "Vehicle", false, new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton buttonView, boolean isChecked) {
                UpdateConfiguration("ESP::VEHICLE", isChecked ? 1 : 0);
            }
        });
        AddSwitch(1, "Grenade Warning", false, new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton buttonView, boolean isChecked) {
                UpdateConfiguration("ESP::GRENADE", isChecked ? 1 : 0);
            }
        });
        AddSwitch(2, "Less Recoil", false, new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton buttonView, boolean isChecked) {

                Switch(2, isChecked);
            }
        });
        AddSwitch(2, "High View", false, new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton buttonView, boolean isChecked) {

                Switch(3, isChecked);
            }
        });
        AddSwitch(2, "Flash ", false, new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton buttonView, boolean isChecked) {

                Switch(4, isChecked);
            }
        });
        /*AddSwitch(2, "Flash V2", false, new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton buttonView, boolean isChecked) {

                Switch(5, isChecked);
            }
        });
        AddSwitch(2, "Flash V1", false, new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton buttonView, boolean isChecked) {

                Switch(6, isChecked);
            }
        });*/
        AddSwitch(2, "Car Jump", false, new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton buttonView, boolean isChecked) {

                Switch(7, isChecked);
            }
        });
        AddSwitch(3, "Aim Bot", false, new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton buttonView, boolean isChecked) {
                UpdateConfiguration("AIM::AIMBOT", isChecked ? 1 : 0);
            }
        });
        AddSwitch(3, "Bullet Tracking", false, new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton buttonView, boolean isChecked) {
                UpdateConfiguration("AIM::AIMBULLET", isChecked ? 1 : 0);
            }
        });
        AddText(3, "Location: ", 5.0f, Color.BLACK);
        AddRadioButton(3, new String[]{"Head", "Body"}, 0, new RadioGroup.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(RadioGroup group, int checkedId) {
                UpdateConfiguration("AIM::LOCATION", checkedId);
            }
        });
        AddText(3, "Target: ", 5.0f, Color.BLACK);
        AddRadioButton(3, new String[]{"Closest To Distance", "Inside Circle"}, 0, new RadioGroup.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(RadioGroup group, int checkedId) {
                UpdateConfiguration("AIM::TARGET", checkedId);
            }
        });
        AddSeekbar(3, "Circle Size (0 for No Limit)", 0, 500, 0, "", "", new SeekBar.OnSeekBarChangeListener() {
            @Override
            public void onProgressChanged(SeekBar seekBar, int progress, boolean fromUser) {
                UpdateConfiguration("AIM::SIZE", progress);
            }

            @Override
            public void onStartTrackingTouch(SeekBar seekBar) {

            }

            @Override
            public void onStopTrackingTouch(SeekBar seekBar) {

            }
        });
        AddText(3, "Trigger: ", 5.0f, Color.BLACK);
        AddRadioButton(3, new String[]{"None", "Shooting", "Scoping", "Both", "Any"}, 0, new RadioGroup.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(RadioGroup group, int checkedId) {
                UpdateConfiguration("AIM::TRIGGER", checkedId);
            }
        });
        AddSwitch(3, "Prediction", false, new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton buttonView, boolean isChecked) {
                UpdateConfiguration("AIM::PREDICTION", isChecked ? 1 : 0);
            }
        });
        AddSwitch(3, "Ignore Knocked", false, new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton buttonView, boolean isChecked) {
                UpdateConfiguration("AIM::KNOCKED", isChecked ? 1 : 0);
            }
        });
        AddSwitch(3, "Visibility Check", false, new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton buttonView, boolean isChecked) {
                UpdateConfiguration("AIM::VISCHECK", isChecked ? 1 : 0);
            }
        });


        AddSeekbar(4, "Menu Size", 50, 200, 100, "", "%", new SeekBar.OnSeekBarChangeListener() {
            @Override
            public void onProgressChanged(SeekBar seekBar, int progress, boolean fromUser) {
                mainLayoutParams.width = (int) ((float) layoutWidth * ((float) progress / 100.f));
                mainLayoutParams.height = (int) ((float) layoutHeight * ((float) progress / 100.f));
            }

            @Override
            public void onStartTrackingTouch(SeekBar seekBar) {

            }

            @Override
            public void onStopTrackingTouch(SeekBar seekBar) {
                windowManager.updateViewLayout(mainLayout, mainLayoutParams);

                closeLayout.setX(mainLayoutParams.width - closeLayoutParams.width - (closeLayoutParams.width * 0.075f));
                maximizeLayout.setX(closeLayout.getX() - maximizeLayoutParams.width - (maximizeLayoutParams.width * 0.075f));
                minimizeLayout.setX(maximizeLayout.getX() - minimizeLayoutParams.width - (minimizeLayoutParams.width * 0.075f));
            }
        });
        AddSeekbar(4, "Menu Opacity", 1, 100, 100, "", "%", new SeekBar.OnSeekBarChangeListener() {
            @Override
            public void onProgressChanged(SeekBar seekBar, int progress, boolean fromUser) {
                mainLayout.setAlpha((float) progress / 100.f);
            }

            @Override
            public void onStartTrackingTouch(SeekBar seekBar) {

            }

            @Override
            public void onStopTrackingTouch(SeekBar seekBar) {
            }
        });

        AddSeekbar(4, "Icon Size", 50, 200, 100, "", "%", new SeekBar.OnSeekBarChangeListener() {
            @Override
            public void onProgressChanged(SeekBar seekBar, int progress, boolean fromUser) {
                ViewGroup.LayoutParams iconParams = iconImg.getLayoutParams();
                iconParams.width = (int) ((float) 75 * ((float) progress / 100.f));
                iconParams.height = (int) ((float) 75 * ((float) progress / 100.f));
                iconImg.setLayoutParams(iconParams);
            }

            @Override
            public void onStartTrackingTouch(SeekBar seekBar) {
                iconLayout.setVisibility(View.VISIBLE);
            }

            @Override
            public void onStopTrackingTouch(SeekBar seekBar) {
                iconLayout.setVisibility(View.GONE);
            }
        });
        AddSeekbar(4, "Icon Opacity", 0, 100, 100, "", "%", new SeekBar.OnSeekBarChangeListener() {
            @Override
            public void onProgressChanged(SeekBar seekBar, int progress, boolean fromUser) {
                iconLayout.setAlpha((float) progress / 100.f);
            }

            @Override
            public void onStartTrackingTouch(SeekBar seekBar) {
                iconLayout.setVisibility(View.VISIBLE);
            }

            @Override
            public void onStopTrackingTouch(SeekBar seekBar) {
                iconLayout.setVisibility(View.GONE);
            }
        });
    }

    @SuppressLint("ClickableViewAccessibility")
    void CreateLayout() {
        mainLayoutParams = new WindowManager.LayoutParams(layoutWidth, layoutHeight, type, WindowManager.LayoutParams.FLAG_NOT_FOCUSABLE | WindowManager.LayoutParams.FLAG_LAYOUT_NO_LIMITS | WindowManager.LayoutParams.FLAG_TRANSLUCENT_STATUS, PixelFormat.RGBA_8888);

        mainLayoutParams.x = 0;
        mainLayoutParams.y = 0;
        mainLayoutParams.gravity = Gravity.START | Gravity.TOP;

        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.P) {
            mainLayoutParams.layoutInDisplayCutoutMode = WindowManager.LayoutParams.LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES;
        }

        mainLayout = new LinearLayout(this);
        mainLayout.setOrientation(LinearLayout.VERTICAL);
        mainLayout.setLayoutParams(new LinearLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.MATCH_PARENT));

        GradientDrawable mainLayoutBg = new GradientDrawable();
        mainLayoutBg.setColor(0xFFFFFFFF);
        mainLayout.setBackground(mainLayoutBg);

        RelativeLayout headerLayout = new RelativeLayout(this);
        headerLayout.setLayoutParams(new RelativeLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, menuButtonSize + convertSizeToDp(4)));
        headerLayout.setClickable(true);
        headerLayout.setFocusable(true);
        headerLayout.setFocusableInTouchMode(true);
        headerLayout.setBackgroundColor(Color.argb(255, 245, 245, 245));
        mainLayout.addView(headerLayout);

        TextView textTitle = new TextView(this);
        textTitle.setLayoutParams(new ViewGroup.LayoutParams(ViewGroup.LayoutParams.WRAP_CONTENT, ViewGroup.LayoutParams.MATCH_PARENT));
        textTitle.setGravity(Gravity.CENTER);
        textTitle.setClickable(true);
        textTitle.setFocusable(true);
        textTitle.setFocusableInTouchMode(true);
        textTitle.setText(" AutoChickens");
        textTitle.setTextSize(convertSizeToDp(5.5f));
        textTitle.setTextColor(Color.BLACK);
        headerLayout.addView(textTitle);

        View.OnTouchListener onTitleListener = new View.OnTouchListener() {
            float pressedX;
            float pressedY;
            float deltaX;
            float deltaY;
            float newX;
            float newY;
            float maxX;
            float maxY;

            @Override
            public boolean onTouch(View v, MotionEvent event) {
                switch (event.getActionMasked()) {
                    case MotionEvent.ACTION_DOWN:

                        deltaX = mainLayoutParams.x - event.getRawX();
                        deltaY = mainLayoutParams.y - event.getRawY();

                        pressedX = event.getRawX();
                        pressedY = event.getRawY();

                        break;
                    case MotionEvent.ACTION_MOVE:
                        newX = event.getRawX() + deltaX;
                        newY = event.getRawY() + deltaY;

                        maxX = screenWidth - mainLayout.getWidth();
                        maxY = screenHeight - mainLayout.getHeight();

                        if (newX < 0)
                            newX = 0;
                        if (newX > maxX)
                            newX = (int) maxX;
                        if (newY < 0)
                            newY = 0;
                        if (newY > maxY)
                            newY = (int) maxY;

                        mainLayoutParams.x = (int) newX;
                        mainLayoutParams.y = (int) newY;
                        windowManager.updateViewLayout(mainLayout, mainLayoutParams);

                        break;

                    default:
                        break;
                }

                return false;
            }
        };

        headerLayout.setOnTouchListener(onTitleListener);
        textTitle.setOnTouchListener(onTitleListener);

        closeLayout = new RelativeLayout(this);
        closeLayoutParams = new RelativeLayout.LayoutParams(menuButtonSize, menuButtonSize);
        closeLayout.setLayoutParams(closeLayoutParams);
        closeLayout.setX(mainLayoutParams.width - closeLayoutParams.width - convertSizeToDp(2));
        closeLayout.setY(convertSizeToDp(2));
        closeLayout.setBackgroundColor(Color.argb(255, 211, 211, 211));
        headerLayout.addView(closeLayout);

        maximizeLayout = new RelativeLayout(this);
        maximizeLayoutParams = new RelativeLayout.LayoutParams(menuButtonSize, menuButtonSize);
        maximizeLayout.setLayoutParams(maximizeLayoutParams);
        maximizeLayout.setX(closeLayout.getX() - maximizeLayoutParams.width - convertSizeToDp(2));
        maximizeLayout.setY(convertSizeToDp(2));
        maximizeLayout.setBackgroundColor(Color.argb(255, 211, 211, 211));
        headerLayout.addView(maximizeLayout);

        minimizeLayout = new RelativeLayout(this);
        minimizeLayoutParams = new RelativeLayout.LayoutParams(menuButtonSize, menuButtonSize);
        minimizeLayout.setLayoutParams(minimizeLayoutParams);
        minimizeLayout.setX(maximizeLayout.getX() - minimizeLayoutParams.width - convertSizeToDp(2));
        minimizeLayout.setY(convertSizeToDp(2));
        minimizeLayout.setBackgroundColor(Color.argb(255, 211, 211, 211));
        headerLayout.addView(minimizeLayout);

        closeLayout.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                AlertDialog.Builder builder = new AlertDialog.Builder(Floating.this, 5);
                builder.setTitle("AutoChickens");
                builder.setMessage("Are you sure you want to stop the Hack?\nYou won't be to able access the Hack again until you re-open the Game!");
                builder.setPositiveButton("Yes", new DialogInterface.OnClickListener() {
                    @Override
                    public void onClick(DialogInterface dialog, int which) {
                        stopSelf();
                    }
                });
                builder.setNegativeButton("No", new DialogInterface.OnClickListener() {
                    @Override
                    public void onClick(DialogInterface dialog, int which) {
                        dialog.dismiss();
                    }
                });

                AlertDialog dialog = builder.create();
                dialog.getWindow().setType(type);
                dialog.show();
            }
        });

        maximizeLayout.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                isMaximized = !isMaximized;

                if (isMaximized) {
                    lastMaximizedX = mainLayoutParams.x;
                    lastMaximizedY = mainLayoutParams.y;

                    lastMaximizedW = mainLayoutParams.width;
                    lastMaximizedH = mainLayoutParams.height;

                    mainLayoutParams.x = 0;
                    mainLayoutParams.y = 0;

                    mainLayoutParams.width = screenWidth;
                    mainLayoutParams.height = screenHeight;
                    windowManager.updateViewLayout(mainLayout, mainLayoutParams);

                    closeLayout.setX(mainLayoutParams.width - closeLayoutParams.width - (closeLayoutParams.width * 0.075f));
                    maximizeLayout.setX(closeLayout.getX() - maximizeLayoutParams.width - (maximizeLayoutParams.width * 0.075f));
                    minimizeLayout.setX(maximizeLayout.getX() - minimizeLayoutParams.width - (minimizeLayoutParams.width * 0.075f));
                } else {
                    mainLayoutParams.x = lastMaximizedX;
                    mainLayoutParams.y = lastMaximizedY;

                    mainLayoutParams.width = lastMaximizedW;
                    mainLayoutParams.height = lastMaximizedH;
                    windowManager.updateViewLayout(mainLayout, mainLayoutParams);

                    closeLayout.setX(mainLayoutParams.width - closeLayoutParams.width - (closeLayoutParams.width * 0.075f));
                    maximizeLayout.setX(closeLayout.getX() - maximizeLayoutParams.width - (maximizeLayoutParams.width * 0.075f));
                    minimizeLayout.setX(maximizeLayout.getX() - minimizeLayoutParams.width - (minimizeLayoutParams.width * 0.075f));
                }
            }
        });

        minimizeLayout.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                mainLayout.setVisibility(View.GONE);
                iconLayout.setVisibility(View.VISIBLE);
            }
        });

        TextView closeText = new TextView(this);
        closeText.setLayoutParams(new ViewGroup.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.MATCH_PARENT));
        closeText.setGravity(Gravity.CENTER);
        closeText.setText("✕");
        closeText.setTextSize(convertSizeToDp(mediumSize));
        closeText.setTextColor(Color.BLACK);
        closeLayout.addView(closeText);

        TextView maximizeText = new TextView(this);
        maximizeText.setLayoutParams(new ViewGroup.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.MATCH_PARENT));
        maximizeText.setGravity(Gravity.CENTER);
        maximizeText.setText("□");
        maximizeText.setTextSize(convertSizeToDp(mediumSize));
        maximizeText.setTextColor(Color.BLACK);
        maximizeLayout.addView(maximizeText);

        TextView minimizeText = new TextView(this);
        minimizeText.setLayoutParams(new ViewGroup.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.MATCH_PARENT));
        minimizeText.setGravity(Gravity.CENTER);
        minimizeText.setText("—");
        minimizeText.setTextSize(convertSizeToDp(mediumSize));
        minimizeText.setTextColor(Color.BLACK);
        minimizeLayout.addView(minimizeText);

        LinearLayout tabLayout = new LinearLayout(this);
        tabLayout.setLayoutParams(new LinearLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT));
        tabLayout.setOrientation(LinearLayout.HORIZONTAL);

        HorizontalScrollView tabScrollView = new HorizontalScrollView(this);
        tabScrollView.setLayoutParams(new LinearLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT));
        tabScrollView.setBackgroundColor(Color.argb(255, 230, 230, 230));

        tabScrollView.addView(tabLayout);

        mainLayout.addView(tabScrollView);

        RelativeLayout[] Button = new RelativeLayout[listTab.length];
        for (int i = 0; i < Button.length; i++) {
            pageLayouts[i] = new LinearLayout(this);
            pageLayouts[i].setLayoutParams(new LinearLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT));
            pageLayouts[i].setOrientation(LinearLayout.VERTICAL);

            ScrollView scrollView = new ScrollView(this);
            scrollView.setLayoutParams(new ViewGroup.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT));
            scrollView.addView(pageLayouts[i]);

            Button[i] = new RelativeLayout(this);
            Button[i].setLayoutParams(new RelativeLayout.LayoutParams(tabWidth, tabHeight));
            if (i != 0) {
                Button[i].setBackgroundColor(Color.argb(255, 230, 230, 230));
                pageLayouts[i].setVisibility(View.GONE);
            } else {
                Button[i].setBackgroundColor(Color.WHITE);
                pageLayouts[i].setVisibility(View.VISIBLE);
            }

            TextView tabText = new TextView(this);
            tabText.setLayoutParams(new ViewGroup.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.MATCH_PARENT));
            tabText.setGravity(Gravity.CENTER);
            tabText.setText(listTab[i]);
            tabText.setTextSize(convertSizeToDp(5.0f));
            tabText.setTextColor(Color.BLACK);
            Button[i].addView(tabText);

            final int curTab = i;
            Button[i].setOnClickListener(new View.OnClickListener() {
                @Override
                public void onClick(View v) {
                    if (curTab != lastSelectedPage) {
                        Button[curTab].setBackgroundColor(Color.WHITE);
                        pageLayouts[curTab].setVisibility(View.VISIBLE);

                        pageLayouts[lastSelectedPage].setVisibility(View.GONE);
                        lastSelectedPage = curTab;

                        for (int j = 0; j < Button.length; j++) {
                            if (j != curTab) {
                                Button[j].setBackgroundColor(Color.argb(255, 230, 230, 230));
                            }
                        }
                    }
                }
            });

            tabLayout.addView(Button[i]);
            mainLayout.addView(scrollView);
        }

        windowManager.addView(mainLayout, mainLayoutParams);

        AddFeatures();
    }


    @SuppressLint("ClickableViewAccessibility")
    void CreateIcon() {
        iconLayout = new RelativeLayout(this);
        RelativeLayout.LayoutParams iconParams = new RelativeLayout.LayoutParams(ViewGroup.LayoutParams.WRAP_CONTENT, ViewGroup.LayoutParams.WRAP_CONTENT);
        iconLayout.setLayoutParams(iconParams);

        iconImg = new ImageView(this);
        ViewGroup.LayoutParams iconImgParams = new ViewGroup.LayoutParams(150, 150);
        iconImg.setLayoutParams(iconImgParams);

        iconLayout.addView(iconImg);

        try {
            String iconBase64 = "/9j/4AAQSkZJRgABAQAAAQABAAD/4gIoSUNDX1BST0ZJTEUAAQEAAAIYAAAAAAIQAABtbnRyUkdCIFhZWiAAAAAAAAAAAAAAAABhY3NwAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAQAA9tYAAQAAAADTLQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAlkZXNjAAAA8AAAAHRyWFlaAAABZAAAABRnWFlaAAABeAAAABRiWFlaAAABjAAAABRyVFJDAAABoAAAAChnVFJDAAABoAAAAChiVFJDAAABoAAAACh3dHB0AAAByAAAABRjcHJ0AAAB3AAAADxtbHVjAAAAAAAAAAEAAAAMZW5VUwAAAFgAAAAcAHMAUgBHAEIAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAFhZWiAAAAAAAABvogAAOPUAAAOQWFlaIAAAAAAAAGKZAAC3hQAAGNpYWVogAAAAAAAAJKAAAA+EAAC2z3BhcmEAAAAAAAQAAAACZmYAAPKnAAANWQAAE9AAAApbAAAAAAAAAABYWVogAAAAAAAA9tYAAQAAAADTLW1sdWMAAAAAAAAAAQAAAAxlblVTAAAAIAAAABwARwBvAG8AZwBsAGUAIABJAG4AYwAuACAAMgAwADEANv/bAEMA/7fI6cin/+nZ6f/////////////////////////////////////////////////////////////////////////bAEMB///////////////////////////////////////////////////////////////////////////////////////AABEIBQAFAAMBIgACEQEDEQH/xAAYAAEBAQEBAAAAAAAAAAAAAAAAAQIDBP/EACUQAQEAAgICAwADAQEBAQAAAAABAhESMSFRAzJBEyJhcUKBkf/EABYBAQEBAAAAAAAAAAAAAAAAAAABAv/EAB0RAQEBAQEBAAMBAAAAAAAAAAABETEhQVFhcbH/2gAMAwEAAhEDEQA/AOYAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA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AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAH//Z";
            byte[] iconData = Base64.decode(iconBase64, Base64.DEFAULT);

            Bitmap bmp = BitmapFactory.decodeByteArray(iconData, 0, iconData.length);
            iconImg.setImageBitmap(bmp);
        } catch (Exception ex) {
            ex.printStackTrace();
        }

        iconLayoutParams = new WindowManager.LayoutParams(ViewGroup.LayoutParams.WRAP_CONTENT, ViewGroup.LayoutParams.WRAP_CONTENT, type, WindowManager.LayoutParams.FLAG_NOT_FOCUSABLE | WindowManager.LayoutParams.FLAG_TRANSLUCENT_STATUS, PixelFormat.TRANSLUCENT);
        iconLayoutParams.gravity = Gravity.START | Gravity.TOP;

        iconLayoutParams.x = 0;
        iconLayoutParams.y = 0;

        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.P) {
            iconLayoutParams.layoutInDisplayCutoutMode = WindowManager.LayoutParams.LAYOUT_IN_DISPLAY_CUTOUT_MODE_SHORT_EDGES;
        }

        iconLayout.setVisibility(View.GONE);

        iconLayout.setOnTouchListener(new View.OnTouchListener() {
            float pressedX;
            float pressedY;
            float deltaX;
            float deltaY;
            float newX;
            float newY;

            @Override
            public boolean onTouch(View v, MotionEvent event) {

                switch (event.getActionMasked()) {
                    case MotionEvent.ACTION_DOWN:

                        deltaX = iconLayoutParams.x - event.getRawX();
                        deltaY = iconLayoutParams.y - event.getRawY();

                        pressedX = event.getRawX();
                        pressedY = event.getRawY();

                        break;
                    case MotionEvent.ACTION_UP:
                        int Xdiff = (int) (event.getRawX() - pressedX);
                        int Ydiff = (int) (event.getRawY() - pressedY);

                        if (Xdiff == 0 && Ydiff == 0) {
                            mainLayout.setVisibility(View.VISIBLE);
                            iconLayout.setVisibility(View.GONE);
                        }
                        return true;
                    case MotionEvent.ACTION_MOVE:
                        newX = event.getRawX() + deltaX;
                        newY = event.getRawY() + deltaY;

                        float maxX = screenWidth - v.getWidth();
                        float maxY = screenHeight - v.getHeight();

                        if (newX < 0)
                            newX = 0;
                        if (newX > maxX)
                            newX = (int) maxX;
                        if (newY < 0)
                            newY = 0;
                        if (newY > maxY)
                            newY = (int) maxY;

                        iconLayoutParams.x = (int) newX;
                        iconLayoutParams.y = (int) newY;

                        windowManager.updateViewLayout(iconLayout, iconLayoutParams);
                        break;

                    default:
                        break;
                }

                return false;
            }
        });

        windowManager.addView(iconLayout, iconLayoutParams);
    }

    LinearLayout CreateHolder(Object data) {
        RelativeLayout parentHolder = new RelativeLayout(this);
        parentHolder.setLayoutParams(new RelativeLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT));
        LinearLayout childHolder = new LinearLayout(this);
        childHolder.setLayoutParams(new LinearLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT));
        childHolder.setOrientation(LinearLayout.HORIZONTAL);
        parentHolder.addView(childHolder);

        if (data instanceof Integer)
            pageLayouts[(Integer) data].addView(parentHolder);
        else if (data instanceof ViewGroup)
            ((ViewGroup) data).addView(parentHolder);

        return childHolder;
    }

    void AddText(Object data, String text, float size, int color) {
        TextView textView = new TextView(this);
        textView.setText(text);
        textView.setTextColor(color);
        textView.setPadding(15, 15, 15, 15);
        textView.setTextSize(convertSizeToDp(size));
        textView.setLayoutParams(new LinearLayout.LayoutParams(ViewGroup.LayoutParams.WRAP_CONTENT, ViewGroup.LayoutParams.WRAP_CONTENT));

        if (data instanceof Integer)
            pageLayouts[(Integer) data].addView(textView);
        else if (data instanceof ViewGroup)
            ((ViewGroup) data).addView(textView);
    }

    void AddCenteredText(Object data, String text, int size, int typeface, String color) {
        TextView textView = new TextView(this);
        textView.setText(text);
        textView.setTextColor(Color.parseColor(color));
        textView.setTypeface(null, typeface);
        textView.setPadding(15, 15, 15, 15);
        textView.setTextSize(convertSizeToDp(size));
        textView.setLayoutParams(new LinearLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT));
        textView.setGravity(Gravity.CENTER);

        if (data instanceof Integer)
            pageLayouts[(Integer) data].addView(textView);
        else if (data instanceof ViewGroup)
            ((ViewGroup) data).addView(textView);
    }

    void AddHeader(Object data, String text) {
        LinearLayout headerLayout = new LinearLayout(this);
        headerLayout.setLayoutParams(new WindowManager.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT));
        headerLayout.setOrientation(LinearLayout.VERTICAL);
        headerLayout.setBackgroundColor(Color.argb(255, 233, 233, 233));

        TextView textView = new TextView(this);
        textView.setText(text);
        textView.setTextColor(Color.BLACK);
        textView.setTypeface(null, Typeface.BOLD);
        textView.setPadding(15, 15, 15, 15);
        textView.setTextSize(convertSizeToDp(12.5f));
        textView.setLayoutParams(new LinearLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT));
        headerLayout.addView(textView);

        if (data instanceof Integer)
            pageLayouts[(Integer) data].addView(headerLayout);
        else if (data instanceof ViewGroup)
            ((ViewGroup) data).addView(headerLayout);
    }

    void AddCheckbox(Object data, String text, boolean checked, CompoundButton.OnCheckedChangeListener listener) {
        CheckBox checkBox = new CheckBox(this);
        checkBox.setText(text);
        checkBox.setTextSize(convertSizeToDp(10.f));
        checkBox.setTextColor(Color.BLACK);
        checkBox.setChecked(checked);
        checkBox.setOnCheckedChangeListener(listener);
        checkBox.setLayoutParams(new LinearLayout.LayoutParams(ViewGroup.LayoutParams.WRAP_CONTENT, ViewGroup.LayoutParams.WRAP_CONTENT));

        if (Build.VERSION.SDK_INT >= 21) {
            ColorStateList colorStateList = new ColorStateList(
                    new int[][]{
                            new int[]{-android.R.attr.state_checked}, // unchecked
                            new int[]{android.R.attr.state_checked}  // checked
                    },
                    new int[]{
                            Color.BLACK,
                            Color.BLACK
                    }
            );
            checkBox.setButtonTintList(colorStateList);
        }

        if (data instanceof Integer)
            pageLayouts[(Integer) data].addView(checkBox);
        else if (data instanceof ViewGroup)
            ((ViewGroup) data).addView(checkBox);
    }

    void AddSwitch(Object data, String text, boolean checked, CompoundButton.OnCheckedChangeListener listener) {
        Switch toggle = new Switch(this);
        toggle.setText(text);
        toggle.setTextSize(convertSizeToDp(mediumSize));
        toggle.setTextColor(Color.BLACK);
        toggle.setChecked(checked);
        toggle.setPadding(15, 15, 15, 15);
        toggle.setOnCheckedChangeListener(listener);
        toggle.setLayoutParams(new LinearLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT));

        if (Build.VERSION.SDK_INT >= 21) {
            ColorStateList colorStateList = new ColorStateList(
                    new int[][]{
                            new int[]{-android.R.attr.state_checked}, // unchecked
                            new int[]{android.R.attr.state_checked}  // checked
                    },
                    new int[]{
                            Color.BLACK,
                            Color.BLACK
                    }
            );
            toggle.setButtonTintList(colorStateList);
        }

        if (data instanceof Integer)
            pageLayouts[(Integer) data].addView(toggle);
        else if (data instanceof ViewGroup)
            ((ViewGroup) data).addView(toggle);
    }

    void AddSeekbar(Object data, String text, int min, int max, int value, final String prefix, final String suffix, final SeekBar.OnSeekBarChangeListener listener) {
        LinearLayout linearLayout = new LinearLayout(this);
        linearLayout.setLayoutParams(new LinearLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT));
        linearLayout.setOrientation(LinearLayout.HORIZONTAL);

        TextView textV = new TextView(this);
        textV.setText(text + ":");
        textV.setTextSize(convertSizeToDp(mediumSize));
        textV.setPadding(15, 15, 15, 15);
        textV.setTextColor(Color.BLACK);
        textV.setLayoutParams(new RelativeLayout.LayoutParams(ViewGroup.LayoutParams.WRAP_CONTENT, ViewGroup.LayoutParams.WRAP_CONTENT));
        textV.setGravity(Gravity.LEFT);

        SeekBar seekBar = new SeekBar(this);
        seekBar.setMax(max);
        if (Build.VERSION.SDK_INT >= 26) {
            seekBar.setMin(min);
            seekBar.setProgress(min);
        }
        if (Build.VERSION.SDK_INT >= 21) {
            seekBar.setThumbTintList(ColorStateList.valueOf(Color.BLACK));
            seekBar.setProgressTintList(ColorStateList.valueOf(Color.BLACK));
        }
        seekBar.setPadding(20, 15, 20, 15);

        final TextView textValue = new TextView(this);
        textValue.setText(prefix + min + suffix);
        textValue.setGravity(Gravity.RIGHT);
        textValue.setTextSize(convertSizeToDp(mediumSize));
        textValue.setLayoutParams(new RelativeLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT));
        textValue.setPadding(20, 15, 20, 15);
        textValue.setTextColor(Color.BLACK);

        final int minimValue = min;
        seekBar.setOnSeekBarChangeListener(new SeekBar.OnSeekBarChangeListener() {
            @Override
            public void onProgressChanged(SeekBar seekBar, int progress, boolean fromUser) {
                if (progress < minimValue) {
                    progress = minimValue;
                    seekBar.setProgress(progress);
                }

                if (listener != null) listener.onProgressChanged(seekBar, progress, fromUser);
                textValue.setText(prefix + progress + suffix);
            }

            @Override
            public void onStartTrackingTouch(SeekBar seekBar) {
                if (listener != null) listener.onStartTrackingTouch(seekBar);
            }

            @Override
            public void onStopTrackingTouch(SeekBar seekBar) {
                if (listener != null) listener.onStopTrackingTouch(seekBar);
            }
        });

        if (value != 0) {
            if (value < min)
                value = min;
            if (value > max)
                value = max;

            textValue.setText(prefix + value + suffix);
            seekBar.setProgress(value);
        }

        linearLayout.addView(textV);
        linearLayout.addView(textValue);

        if (data instanceof Integer) {
            pageLayouts[(Integer) data].addView(linearLayout);
            pageLayouts[(Integer) data].addView(seekBar);
        } else if (data instanceof ViewGroup) {
            ((ViewGroup) data).addView(linearLayout);
            ((ViewGroup) data).addView(seekBar);
        }
    }

    void AddRadioButton(Object data, String[] list, int defaultCheckedId, RadioGroup.OnCheckedChangeListener listener) {
        RadioGroup rg = new RadioGroup(this);
        RadioButton[] rb = new RadioButton[list.length];
        rg.setOrientation(RadioGroup.VERTICAL);
        for (int i = 0; i < list.length; i++) {
            rb[i] = new RadioButton(this);
            if (i == defaultCheckedId) rb[i].setChecked(true);
            rb[i].setPadding(15, 15, 15, 15);
            rb[i].setText(list[i]);
            rb[i].setTextSize(convertSizeToDp(mediumSize));
            rb[i].setId(i);
            rb[i].setGravity(Gravity.RIGHT);
            rb[i].setTextColor(Color.BLACK);

            rg.addView(rb[i]);
        }
        rg.setOnCheckedChangeListener(listener);
        RelativeLayout.LayoutParams toggleP = new RelativeLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT);
        rg.setLayoutParams(toggleP);

        if (data instanceof Integer)
            pageLayouts[(Integer) data].addView(rg);
        else if (data instanceof ViewGroup)
            ((ViewGroup) data).addView(rg);
    }

    void AddDropdown(Object data, String[] list, AdapterView.OnItemSelectedListener listener) {
        LinearLayout holderLayout = new LinearLayout(this);
        holderLayout.setOrientation(LinearLayout.VERTICAL);
        holderLayout.setLayoutParams(new LinearLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT));
        holderLayout.setPadding(15, 15, 15, 15);
        holderLayout.setGravity(Gravity.CENTER);

        Spinner sp = new Spinner(this, Spinner.MODE_DROPDOWN);

        GradientDrawable drawable = new GradientDrawable();
        drawable.setColor(Color.argb(255, 233, 233, 233));
        drawable.setStroke(1, Color.BLACK);
        sp.setPopupBackgroundDrawable(drawable);
        sp.setBackground(drawable);

        sp.setLayoutParams(new RelativeLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT));
        ArrayAdapter<String> dataAdapter = new ArrayAdapter<String>(this, android.R.layout.simple_spinner_item, list) {
            @Override
            public View getView(int position, View convertView, ViewGroup parent) {
                View v = super.getView(position, convertView, parent);

                ((TextView) v).setTextColor(Color.BLACK);
                ((TextView) v).setTypeface(null, Typeface.BOLD);
                ((TextView) v).setGravity(Gravity.CENTER);

                return v;
            }

            @Override
            public View getDropDownView(int position, View convertView, ViewGroup parent) {
                View v = super.getDropDownView(position, convertView, parent);

                ((TextView) v).setTextColor(Color.BLACK);
                ((TextView) v).setTypeface(null, Typeface.BOLD);
                ((TextView) v).setGravity(Gravity.CENTER);

                return v;
            }
        };
        dataAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        sp.setAdapter(dataAdapter);
        sp.setOnItemSelectedListener(listener);
        sp.setPadding(0, 5, 0, 5);

        holderLayout.addView(sp);

        if (data instanceof Integer)
            pageLayouts[(Integer) data].addView(holderLayout);
        else if (data instanceof ViewGroup)
            ((ViewGroup) data).addView(holderLayout);
    }

    void AddButton(Object data, String text, int width, int height, int padding, View.OnClickListener listener) {
        LinearLayout holderLayout = new LinearLayout(this);
        holderLayout.setOrientation(LinearLayout.VERTICAL);
        holderLayout.setLayoutParams(new LinearLayout.LayoutParams(width, height));
        holderLayout.setPadding(padding, padding, padding, padding);
        holderLayout.setGravity(Gravity.CENTER);

        Button btn = new Button(this);
        btn.setText(text);
        btn.setTextColor(Color.BLACK);
        btn.setOnClickListener(listener);
        btn.setLayoutParams(new LinearLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.MATCH_PARENT));

        GradientDrawable drawable = new GradientDrawable();
        drawable.setColor(Color.argb(255, 244, 244, 244));
        drawable.setStroke(2, Color.argb(255, 0, 0, 0));

        btn.setBackground(drawable);

        holderLayout.addView(btn);

        if (data instanceof Integer)
            pageLayouts[(Integer) data].addView(holderLayout);
        else if (data instanceof ViewGroup)
            ((ViewGroup) data).addView(holderLayout);
    }

    float convertSizeToDp(float size) {
        return size * density;
    }

    int convertSizeToDp(int size) {
        return (int) (size * density);
    }

    @SuppressLint("HandlerLeak")
    Handler handler = new Handler() {
        @Override
        public void handleMessage(Message msg) {
            super.handleMessage(msg);
            if (msg.what == 0) {
                try {
                    Point screenSize = new Point();
                    Display display = windowManager.getDefaultDisplay();
                    display.getRealSize(screenSize);

                    screenWidth = screenSize.x;
                    screenHeight = screenSize.y;

                    mainLayoutParams.width = layoutWidth;
                    mainLayoutParams.height = layoutHeight;
                    windowManager.updateViewLayout(mainLayout, mainLayoutParams);

                    canvasLayoutParams.width = screenWidth;
                    canvasLayoutParams.height = screenHeight;
                    windowManager.updateViewLayout(canvasLayout, canvasLayoutParams);
                } catch (Exception ex) {
                    ex.printStackTrace();
                }
            }
        }
    };

    Thread mUpdateCanvas = new Thread() {
        @Override
        public void run() {
            android.os.Process.setThreadPriority(android.os.Process.THREAD_PRIORITY_DISPLAY);
            while (isAlive() && !isInterrupted()) {
                try {
                    long t1 = System.currentTimeMillis();
                    canvasLayout.postInvalidate();
                    long td = System.currentTimeMillis() - t1;
                    Thread.sleep(Math.max(Math.min(0, sleepTime - td), sleepTime));
                } catch (Exception ex) {
                    ex.printStackTrace();
                }
            }
        }
    };

    Thread mUpdateThread = new Thread() {
        @Override
        public void run() {
            android.os.Process.setThreadPriority(android.os.Process.THREAD_PRIORITY_DISPLAY);
            while (isAlive() && !isInterrupted()) {
                try {
                    long t1 = System.currentTimeMillis();
                    Point screenSize = new Point();
                    Display display = windowManager.getDefaultDisplay();
                    display.getRealSize(screenSize);

                    if (screenWidth != screenSize.x || screenHeight != screenSize.y) {
                        handler.sendEmptyMessage(0);
                    }

                    long td = System.currentTimeMillis() - t1;
                    Thread.sleep(Math.max(Math.min(0, sleepTime - td), sleepTime));
                } catch (Exception ex) {
                    ex.printStackTrace();
                }
            }
        }
    };
}
