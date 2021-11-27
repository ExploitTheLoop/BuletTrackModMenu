#ifndef STRUCT_H
#define STRUCT_H
#include <math.h>
#include <string>

class Color {
public:
    float r;
    float g;
    float b;
    float a;

    Color() {
        this->r = 0;
        this->g = 0;
        this->b = 0;
        this->a = 0;
    }

    Color(float r, float g, float b, float a) {
        this->r = r;
        this->g = g;
        this->b = b;
        this->a = a;
    }

    Color(float r, float g, float b) {
        this->r = r;
        this->g = g;
        this->b = b;
        this->a = 255;
    }

    static Color White()
	{
		return Color(255, 255, 255);
	}

	static Color Oren()
	{
		return Color(255, 100, 0, 255);
	}
	static Color Ungu2()
	{
		return Color(105, 0, 255, 255);
	}
	static Color Ungu()
	{
		return Color(129, 0, 255);
	}

	static Color Red()
	{
		return Color(255, 0, 0);
	}
	static Color Red2()
	{
		return Color(255, 26, 26);
	}
	static Color Red3()
	{
		return Color(255, 77, 77);
	}

	static Color Orange()
	{
		return Color(255, 102, 0);
	}

	static Color Orange2()
	{
		return Color(255, 133, 51);
	}

	static Color Orange3()
	{
		return Color(255, 133, 51);
	}


	static Color Y()
	{
		return Color(255, 255, 255);
	}

	static Color Yellow()
	{
		return Color(255, 255, 0);
	}

	static Color Yellow2()
	{
		return Color(255, 204, 0);
	}

	static Color Yellow3()
	{
		return Color(255, 255, 51);
	}

	static Color Green()
	{
		return Color(0, 255, 0);
	}
	static Color Green2()
	{
		return Color(26, 255, 26);
	}
	static Color Green3()
	{
		return Color(21, 255, 21);
	}
	static Color Blue()
	{
		return Color(0, 0, 255);
	}

	static Color BlueSky1()
	{
		return Color(0, 102, 255);
	}

	static Color BlueSky2()
	{
		return Color(51, 133, 255);
	}
	static Color Pink()
	{
		return Color(255, 0, 102);
	}
	static Color Pink2()
	{
		return Color(255, 51, 153);
	}
	static Color BlueDongker()
	{
		return Color(0, 0, 102);
	}
	static Color Grey()
	{
		return Color(102, 102, 153);
	}
	static Color Silver()
	{
		return Color(230, 230, 230);
	}
	static Color Silver2()
	{
		return Color(204, 204, 204);
	}
	static Color SilverDark()
	{
		return Color(64, 64, 64);
	}
	static Color Black()
	{
		return Color(0, 0, 0);
	}
	static Color Dark2()
	{
		return Color(0, 3, 12);
	}
};

int randomer;
Color RGBBoy()
{
	randomer += 1;
	if (randomer == 0)
	{
		return Color::Red();
	}
	else if (randomer == 1)
	{
		return Color::Red();
	}
	else if (randomer == 2)
	{
		return Color::Red();
	}
	else if (randomer == 3)
	{
		return Color::Red();
	}
	else if (randomer == 4)
	{
		return Color::Red();
	}
	else if (randomer == 5)
	{
		return Color::Red();
	}
	else if (randomer == 6)
	{
		return Color::Ungu();
	}
	else if (randomer == 7)
	{
		return Color::Ungu();
	}
	else if (randomer == 8)
	{
		return Color::Ungu();
	}
	else if (randomer == 9)
	{
		return Color::Ungu();
	}
	else if (randomer == 10)
	{
		return Color::Ungu();
	}
	else if (randomer == 11)
	{
		return Color::Ungu();
	}
	else if (randomer == 12)
	{
		return Color::Ungu();
	}
	else if (randomer == 13)
	{
		return Color::Ungu();
	}
	else if (randomer == 14)
	{
		return Color::Ungu();
	}
	else if (randomer == 15)
	{
		return Color::Ungu();
	}
	else if (randomer == 16)
	{
		return Color::Ungu();
	}
	else
	{
		randomer = 0;
		return Color::Ungu();
	}
}



#endif //STRUCT_H
