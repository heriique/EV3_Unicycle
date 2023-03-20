#pragma once

#include <EV3_LCDDisplay.h>

class LCDDisplay
{
public:
	LCDDisplay();
	/* The Clear_Display function clears the display.
	@return If the function succeeds, the return value is true.
            If the function fails, the return value is false.*/
	bool ClearDisplay();
	/* The Draw_Point function draws a point at specified coordinates.
	@param inX The x-coordinate of the point to be set.
	@param inY The y-coordinate of the point to be set.
	@return If the function succeeds, the return value is true.
            If the function fails, the return value is false.*/
	bool Draw_Point(unsigned int inX, unsigned int inY);
	/* The Clear_Point function clears a point at specified coordinates.
	@param inX The x-coordinate of the point to be cleared.
	@param inY The y-coordinate of the point to be cleared.
	@return If the function succeeds, the return value is true.
            If the function fails, the return value is false.*/
	bool Clear_Point(unsigned int inX, unsigned int inY);
	/* The Draw_Line function draws a line that connects two points.
	@param inX1 The x-coordinate of the first point to be set.
	@param inY1 The y-coordinate of the first point to be set.
	@param inX2 The x-coordinate of the second point to be set.
	@param inY2 The y-coordinate of the second point to be set.
	@return If the function succeeds, the return value is true.
            If the function fails, the return value is false.*/
	bool Draw_Line(unsigned int inX1, unsigned int inY1, unsigned int inX2, unsigned int inY2);
	/* The Clear_Line function clears a line that connects two points.*/
	bool Clear_Line(unsigned int inX1, unsigned int inY1, unsigned int inX2, unsigned int inY2);
	/* The Draw_Character function writes a character at a specified location using a specified font.*/
	bool Draw_Character(unsigned int inX, unsigned int inY, ev3_c_api::E_EV3_LCD_FontType inFont, char inCharacter, bool inInvert = false);
	/* The Draw_Text function writes formatted data at a specified location using a specified font.*/

	/* These functions are similar to Draw_Text, but these functions clear a specified string.*/
	bool Clear_Text(unsigned int inLine, ev3_c_api::E_EV3_LCD_FontType inFont);   // Deletes the entire line
	/* 2 functions not implemented here because of variadic arguments.*/
	/* The Draw_Rect function draws a rectangle.*/
	bool Draw_Rect(unsigned int inX, unsigned int inY, int inWidth, int inHeight, bool inFill = false);
	/* The Clear_Rect function clears a rectangle.*/
	bool Clear_Rect(unsigned int inX, unsigned int inY, int inWidth, int inHeight);
	/* The Draw_Ellipse function draws an ellipse.*/
	bool Draw_Ellipse(unsigned int inX, unsigned int inY, unsigned int inRadiusX, unsigned int inRadiusY, bool inFill = false);
	/* The Clear_Ellipse function clears an ellipse.*/
	bool Clear_Ellipse(unsigned int inX, unsigned int inY, unsigned int inRadiusX, unsigned int inRadiusY);
	/* The Draw_Circle function draws a circle.*/
	bool Draw_Circle(unsigned int inX, unsigned int inY, unsigned int inRadius, bool inFill = false);
	/* The Clear_Circle function clears a circle.*/
	bool Clear_Circle(unsigned int inX, unsigned int inY, unsigned int inRadius);
	/* The Draw_Picture function draws the picture with a specific rgf file.*/
	bool Draw_Picture(const char* inPictureName, int inX = 0, int inY = 0, bool inInvert = false);
	/* The Draw_Icon function draws a specified icon at a specified location.*/
	bool Draw_Icon(unsigned int inX, unsigned int inY, ev3_c_api::E_EV3_LCD_IconType inType, int inNumber, bool inInvert = false);

};

