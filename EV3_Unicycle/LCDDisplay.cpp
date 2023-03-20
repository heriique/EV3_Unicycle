#include "LCDDisplay.h"

LCDDisplay::LCDDisplay()
{
}

bool LCDDisplay::ClearDisplay()
{
	return ev3_c_api::Clear_Display();
}

bool LCDDisplay::Draw_Point(unsigned int inX, unsigned int inY)
{
	return ev3_c_api::Draw_Point(inX, inY);
}

bool LCDDisplay::Clear_Point(unsigned int inX, unsigned int inY)
{
	return ev3_c_api::Clear_Point(inX, inY);
}

bool LCDDisplay::Draw_Line(unsigned int inX1, unsigned int inY1, unsigned int inX2, unsigned int inY2)
{
	return ev3_c_api::Draw_Line(inX1, inY1, inX2, inY2);
}

bool LCDDisplay::Clear_Line(unsigned int inX1, unsigned int inY1, unsigned int inX2, unsigned int inY2)
{
	return ev3_c_api::Clear_Line(inX1, inY1, inX2, inY2);
}

bool LCDDisplay::Draw_Character(unsigned int inX, unsigned int inY, ev3_c_api::E_EV3_LCD_FontType inFont, char inCharacter, bool inInvert)
{
	return ev3_c_api::Draw_Character(inX, inY, inFont, inCharacter, inInvert);
}

}

bool LCDDisplay::Clear_Text(unsigned int inLine, ev3_c_api::E_EV3_LCD_FontType inFont)
{
	return ev3_c_api::Clear_Text(inLine, inFont);
}

bool LCDDisplay::Draw_Rect(unsigned int inX, unsigned int inY, int inWidth, int inHeight, bool inFill)
{
	return ev3_c_api::Draw_Rect(inX, inY, inWidth, inHeight, inFill);
}

bool LCDDisplay::Clear_Rect(unsigned int inX, unsigned int inY, int inWidth, int inHeight)
{
	return ev3_c_api::Clear_Rect(inX, inY, inWidth, inHeight);
}

bool LCDDisplay::Draw_Ellipse(unsigned int inX, unsigned int inY, unsigned int inRadiusX, unsigned int inRadiusY, bool inFill)
{
	return ev3_c_api::Draw_Ellipse(inX, inY, inRadiusX, inRadiusY, inFill);
}

bool LCDDisplay::Clear_Ellipse(unsigned int inX, unsigned int inY, unsigned int inRadiusX, unsigned int inRadiusY)
{
	return ev3_c_api::Clear_Ellipse(inX, inY, inRadiusX, inRadiusY);
}

bool LCDDisplay::Draw_Circle(unsigned int inX, unsigned int inY, unsigned int inRadius, bool inFill)
{
	return ev3_c_api::Draw_Circle(inX, inY, inRadius, inFill);
}

bool LCDDisplay::Clear_Circle(unsigned int inX, unsigned int inY, unsigned int inRadius)
{
	return ev3_c_api::Clear_Circle(inX, inY, inRadius);
}

bool LCDDisplay::Draw_Picture(const char * inPictureName, int inX, int inY, bool inInvert)
{
	return ev3_c_api::Draw_Picture(inPictureName, inX, inY, inInvert);
}

bool LCDDisplay::Draw_Icon(unsigned int inX, unsigned int inY, ev3_c_api::E_EV3_LCD_IconType inType, int inNumber, bool inInvert)
{
	return ev3_c_api::Draw_Icon(inX, inY, inType, inNumber, inInvert);
}


