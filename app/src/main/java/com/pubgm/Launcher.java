package com.pubgm;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.ProgressDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.SharedPreferences;
import android.net.Uri;
import android.os.Build;
import android.os.Handler;
import android.os.Message;
import android.provider.Settings;
import android.text.InputType;
import android.view.ViewGroup;
import android.widget.EditText;
import android.widget.LinearLayout;

@SuppressWarnings("all")
public class Launcher {
    static {
        System.loadLibrary("codexlayer");
    }

    private static SharedPreferences m_Prefs;
    public static void Init(Object object) {
        Context m_Context = (Context) object;
        Activity m_Activity = (Activity) object;

        Init(m_Context);

        Intent i = new Intent(m_Context.getApplicationContext(), Floating.class);
        m_Context.startService(i);
    }

    private static native void Init(Context mContext);
}
