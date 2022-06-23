#ifndef CENTIPEDE_CPP_
#define CENTIPEDE_CPP_
//#include "Board.h"
#include "util.h"
#include <iostream>
#include <string>
#include <cmath> // for basic math functions such as cos, sin, sqrt
#include <ctime>
#include <fstream>
using namespace std;
float temp1 = 0, temp2 = 0, temp3 = 0, temp4 = 0;
float redopenx = 355, redopeny = 115, yellowopenx = 455, yellowopeny = 715;
float xr1 = 140.0, yr1 = 145.0, xr2 = 140.0, yr2 = 225, xr3 = 230, yr3 = 145, xr4 = 230, yr4 = 225;
float xy1 = 593.0, yy1 = 595.0, xy2 = 593.0, yy2 = 675.0, xy3 = 683.0, yy3 = 595.0, xy4 = 683.0, yy4 = 675.0;
float xred1 = 140.0, yred1 = 145.0, xred2 = 140.0, yred2 = 225.0, xred3 = 230, yred3 = 145, xred4 = 230, yred4 = 225;
float xyellow1 = 593, yyellow1 = 595, xyellow2 = 593, yyellow2 = 675, xyellow3 = 683, yyellow3 = 595, xyellow4 = 683, yyellow4 = 675;
float blueopenx = 105, blueopeny = 465, greenopenx = 705, greenopeny = 365;
float xb1 = 140, yb1 = 595, xb2 = 140, yb2 = 675, xb3 = 230, yb3 = 595, xb4 = 230, yb4 = 675;
float xblue1 = 140, yblue1 = 595, xblue2 = 140, yblue2 = 675, xblue3 = 230.0, yblue3 = 595.0, xblue4 = 230.0, yblue4 = 675.0;
float xg1 = 593, yg1 = 145, xg2 = 593, yg2 = 225, xg3 = 683, yg3 = 145, xg4 = 683, yg4 = 225;
float xgreen1 = 593, ygreen1 = 145, xgreen2 = 593, ygreen2 = 225, xgreen3 = 683, ygreen3 = 145, xgreen4 = 683, ygreen4 = 225;
int dice = 0;
int turn = 0;
int p1 = 0, p2 = 0, p3 = 0, p4 = 0;
string p1name, p2name, p3name, p4name;
int menu = 0, gamemode = 0;
bool start = false;
void SetCanvasSize(int width, int height)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}
void MovementRed(float x, float y)
{

	if (x == 355)
	{
		if (y == 315)
		{
			y += 50;
			x -= 50;
		}
		else if (y == 765)
		{
			x += 50;
		}
		else if (y == 65)
		{
			y += 50;
		}
		else
		{
			y += 50;
		}
	}
	else if (y == 365)
	{
		if (x == 55)
		{
			y += 50;
		}
		else if (x == 505)
		{
			x -= 50;
			y -= 50;
		}
		else if (x == 405)
		{
			cout << "Token Passed\n";
		}

		else
		{
			x -= 50;
		}
	}
	else if (y == 415)
	{
		if (x == 55)
		{
			y += 50;
		}
		if (x == 755)
		{
			y -= 50;
		}
	}
	else if (y == 465)
	{
		if (x == 305)
		{
			x += 50;
			y += 50;
		}
		else if (x == 755)
		{
			y -= 50;
		}
		else
		{
			x += 50;
		}
	}
	else if (x == 405)
	{
		if (y == 765)
		{
			x += 50;
		}
		else if (y == 65)
		{
			y += 50;
		}
		else if (y == 365)
		{
			cout << "Token Passed\n";
		}
		else
		{
			y += 50;
		}
	}
	else if (x == 455)
	{
		if (y == 515)
		{
			y -= 50;
			x += 50;
		}
		else if (y == 65)
		{
			x -= 50;
		}
		else
		{
			y -= 50;
		}
	}

	temp1 = x;
	temp2 = y;

	glutPostRedisplay();
}
void MovementYellow(float x, float y)
{

	if (x == 355)
	{
		if (y == 315)
		{
			y += 50;
			x -= 50;
		}
		else if (y == 765)
		{
			x += 50;
		}
		else if (y == 65)
		{
			y += 50;
		}
		else
		{
			y += 50;
		}
	}
	else if (y == 365)
	{
		if (x == 55)
		{
			y += 50;
		}
		else if (x == 505)
		{
			x -= 50;
			y -= 50;
		}
		else
		{
			x -= 50;
		}
	}
	else if (y == 415)
	{
		if (x == 55)
		{
			y += 50;
		}
		if (x == 755)
		{
			y -= 50;
		}
	}
	else if (y == 465)
	{
		if (x == 305)
		{
			x += 50;
			y += 50;
		}
		else if (x == 755)
		{
			y -= 50;
		}
		else if (x == 405)
		{
			cout << "Token Passed\n";
		}

		else
		{
			x += 50;
		}
	}
	else if (x == 405)
	{
		if (y == 765)
		{
			y -= 50;
		}
		else if (y == 65)
		{
			x -= 50;
		}
		else if (y == 465)
		{
			cout << "Token Passed\n";
		}

		else
		{
			y -= 50;
		}
	}
	else if (x == 455)
	{
		if (y == 515)
		{
			y -= 50;
			x += 50;
		}
		else if (y == 55)
		{
			x -= 50;
		}
		else if (y == 65)
		{
			x -= 50;
		}
		else
		{
			y -= 50;
		}
	}

	temp1 = x;
	temp2 = y;

	glutPostRedisplay();
}
void MovementBlue(float x, float y)
{

	if (x == 355)
	{
		if (y == 315)
		{
			y += 50;
			x -= 50;
		}
		else if (y == 765)
		{
			x += 50;
		}
		else if (y == 65)
		{
			y += 50;
		}
		else if (y == 415)
		{
			cout << "Token Passed\n";
		}

		else
		{
			y += 50;
		}
	}
	else if (y == 365)
	{
		if (x == 55)
		{
			y += 50;
		}
		else if (x == 505)
		{
			x -= 50;
			y -= 50;
		}
		else
		{
			x -= 50;
		}
	}
	else if (y == 415)
	{
		if (x == 55)
		{
			x += 50;
		}
		if (x == 755)
		{
			y -= 50;
		}
		else
		{
			x += 50;
		}
	}

	else if (y == 465)
	{
		if (x == 305)
		{
			x += 50;
			y += 50;
		}
		else if (x == 755)
		{
			y -= 50;
		}
		else
		{
			x += 50;
		}
	}
	else if (x == 405)
	{
		if (y == 765)
		{
			x += 50;
		}
		else if (y == 65)
		{
			x -= 50;
		}
	}
	else if (x == 455)
	{
		if (y == 515)
		{
			y -= 50;
			x += 50;
		}
		else if (y == 55)
		{
			x -= 50;
		}
		else if (y == 65)
		{
			x -= 50;
		}
		else
		{
			y -= 50;
		}
	}

	temp1 = x;
	temp2 = y;

	glutPostRedisplay();
}
void MovementGreen(float x, float y)
{

	if (x == 355)
	{
		if (y == 315)
		{
			y += 50;
			x -= 50;
		}
		else if (y == 765)
		{
			x += 50;
		}
		else if (y == 65)
		{
			y += 50;
		}
		else
		{
			y += 50;
		}
	}
	else if (y == 365)
	{
		if (x == 55)
		{
			y += 50;
		}
		else if (x == 505)
		{
			x -= 50;
			y -= 50;
		}
		else
		{
			x -= 50;
		}
	}
	else if (y == 415)
	{
		if (x == 55)
		{
			y += 50;
		}
		else if (x == 755)
		{
			x -= 50;
		}
		else if (x == 455)
		{
			cout << "Token Passed\n";
		}

		else
		{
			x -= 50;
		}
	}
	else if (y == 465)
	{
		if (x == 305)
		{
			x += 50;
			y += 50;
		}
		else if (x == 755)
		{
			y -= 50;
		}
		else
		{
			x += 50;
		}
	}
	else if (x == 405)
	{
		if (y == 765)
		{
			x += 50;
		}
		else if (y == 65)
		{
			x -= 50;
		}
	}
	else if (x == 455)
	{
		if (y == 515)
		{
			y -= 50;
			x += 50;
		}
		else if (y == 55)
		{
			x -= 50;
		}
		else if (y == 65)
		{
			x -= 50;
		}
		else if (y == 415)
		{
			cout << "Token Passed\n";
		}

		else
		{
			y -= 50;
		}
	}

	temp1 = x;
	temp2 = y;

	glutPostRedisplay();
}

/*
 * Main Canvas drawing function.
 * */
//Board *b;

void GameDisplay() /**/
{

	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim rid and 1 means pure red and so on.

	glClearColor(0.79, 0.64, 0.44, 0);
	//glClearColor(0.7764705,0.635294,0.509803,0); // Red==Green==Blue==1 --> White Colour
	glClear(GL_COLOR_BUFFER_BIT); //Update the colors
	//Fire Gun
	//DrawSquare(400, 20, 40, colors[GREEN]);
	//Mushroom

	if (start == 0)
	{
		DrawString(420, 500, "1. Play Game", colors[MISTY_ROSE]);
		DrawString(420, 460, "2. Leader Board", colors[MISTY_ROSE]);
		DrawString(420, 420, "3. Instructions", colors[MISTY_ROSE]);
		DrawString(420, 380, "4. Exit", colors[MISTY_ROSE]);
	}

	if (start == 1)
	{
		DrawSquare(33, 40, 750, colors[SILVER]);
		//Display Score
		if (gamemode == 2)
		{

			DrawString(50, 10, p1name, colors[MISTY_ROSE]);
			DrawString(50, 800, p2name, colors[MISTY_ROSE]);
			DrawString(500, 800, p3name, colors[MISTY_ROSE]);
			DrawString(500, 10, p4name, colors[MISTY_ROSE]);

			DrawString(840, 700, "Score = " + Num2Str(p1), colors[MISTY_ROSE]);
			DrawString(840, 670, "Score = " + Num2Str(p2), colors[MISTY_ROSE]);
			DrawString(840, 640, "Score = " + Num2Str(p3), colors[MISTY_ROSE]);
			DrawString(840, 610, "Score = " + Num2Str(p4), colors[MISTY_ROSE]);
			DrawCircle(820, 708, 8, colors[RED]);
			DrawCircle(820, 678, 8, colors[BLUE]);
			DrawCircle(820, 648, 8, colors[ORANGE]);
			DrawCircle(820, 618, 8, colors[LIME]);
			DrawString(825, 570, "Player " + Num2Str(turn + 1), colors[MISTY_ROSE]);
			DrawString(910, 570, " turn", colors[MISTY_ROSE]);
		}
		if (gamemode == 1)
		{

			DrawString(50, 10, p1name, colors[MISTY_ROSE]);

			DrawString(500, 800, p3name, colors[MISTY_ROSE]);

			DrawString(840, 700, "Score = " + Num2Str(p1), colors[MISTY_ROSE]);

			DrawString(840, 640, "Score = " + Num2Str(p3), colors[MISTY_ROSE]);

			DrawCircle(820, 708, 8, colors[RED]);

			DrawCircle(820, 648, 8, colors[ORANGE]);
			DrawString(825, 570, "Player " + Num2Str(turn + 1), colors[MISTY_ROSE]);
			DrawString(910, 570, " turn", colors[MISTY_ROSE]);
		}
		//DrawString(50, 20, "Score=0", colors[MISTY_ROSE]);
		//Spider
		//DrawTriangle(300, 450, 340, 450, 320, 490, colors[MISTY_ROSE]);
		// Trianlge Vertices v1(300,50) , v2(500,50) , v3(400,250)

		//DrawLine(int x1, int y1, int x2, int y2, int lwidth, float *color)
		//Drawing Home Squares
		DrawSquare(33, 40, 300, colors[RED]);
		DrawSquare(483, 40, 300, colors[LIME]);
		DrawSquare(33, 490, 300, colors[BLUE]);
		DrawSquare(483, 490, 300, colors[ORANGE]);
		//Inside Squares Border
		DrawRoundRect(82, 89, 202, 202, colors[BLACK]);
		DrawRoundRect(532, 89, 202, 202, colors[BLACK]);
		DrawRoundRect(82, 539, 202, 202, colors[BLACK]);
		DrawRoundRect(532, 539, 202, 202, colors[BLACK]);

		//INDSIDE SQUARES
		DrawRoundRect(83, 90, 200, 200, colors[WHITE]);
		DrawRoundRect(533, 90, 200, 200, colors[WHITE]);
		DrawRoundRect(83, 540, 200, 200, colors[WHITE]);
		DrawRoundRect(533, 540, 200, 200, colors[WHITE]);
		//DrawSquare(533, 90, 200, colors[WHITE]);
		//DrawSquare(83, 540, 200, colors[WHITE]);
		//DrawSquare(533, 540, 200, colors[WHITE]);
		//CIRCLES inside white squares

		//Home Row Squares
		//RED
		DrawSquare(333, 90, 50, colors[RED]);
		DrawSquare(383, 90, 50, colors[RED]);
		DrawSquare(383, 140, 50, colors[RED]);
		DrawSquare(433, 140, 50, colors[RED]);
		DrawSquare(383, 190, 50, colors[RED]);
		DrawSquare(383, 240, 50, colors[RED]);
		DrawSquare(383, 290, 50, colors[RED]);
		//BLUE
		DrawSquare(83, 440, 50, colors[BLUE]);
		DrawSquare(83, 390, 50, colors[BLUE]);
		DrawSquare(133, 390, 50, colors[BLUE]);
		DrawSquare(133, 340, 50, colors[BLUE]);
		DrawSquare(183, 390, 50, colors[BLUE]);
		DrawSquare(233, 390, 50, colors[BLUE]);
		DrawSquare(283, 390, 50, colors[BLUE]);
		//YELLOW
		DrawSquare(383, 490, 50, colors[ORANGE]);
		DrawSquare(383, 540, 50, colors[ORANGE]);
		DrawSquare(383, 590, 50, colors[ORANGE]);
		DrawSquare(383, 640, 50, colors[ORANGE]);
		DrawSquare(333, 640, 50, colors[ORANGE]);
		DrawSquare(383, 690, 50, colors[ORANGE]);
		DrawSquare(433, 690, 50, colors[ORANGE]);
		//LIME
		DrawSquare(483, 390, 50, colors[LIME]);
		DrawSquare(533, 390, 50, colors[LIME]);
		DrawSquare(583, 390, 50, colors[LIME]);
		DrawSquare(633, 390, 50, colors[LIME]);
		DrawSquare(633, 440, 50, colors[LIME]);
		DrawSquare(683, 390, 50, colors[LIME]);
		DrawSquare(683, 340, 50, colors[LIME]);

		// Drawing Border Lines
		DrawLine(783, 0, 783, 840, 3, colors[BLACK]);  //RIGHT Vertical Line
		DrawLine(34, 40, 34, 790, 1, colors[BLACK]);   //LEFT Vertical Line
		DrawLine(34, 40, 783, 40, 1, colors[BLACK]);   // Lower horizontal black line
		DrawLine(34, 790, 783, 790, 2, colors[BLACK]); // Upper horizontal black line

		//Drawing 8 Centeral straight lines in ludo parralell to eachother
		DrawLine(33, 339, 783, 340, 1, colors[BLACK]);
		DrawLine(33, 490, 783, 490, 1, colors[BLACK]); //Horizontal
		DrawLine(333, 40, 333, 790, 1, colors[BLACK]);
		DrawLine(483, 40, 483, 790, 1, colors[BLACK]); //Vertical
		//
		DrawLine(33, 390, 783, 390, 1, colors[BLACK]);
		DrawLine(33, 440, 783, 440, 1, colors[BLACK]); //Horizontal
		DrawLine(383, 40, 383, 790, 1, colors[BLACK]);
		DrawLine(433, 40, 433, 790, 1, colors[BLACK]); //Vertical

		//Drawing steps from left
		DrawLine(83, 340, 83, 490, 1, colors[BLACK]);
		DrawLine(133, 340, 133, 490, 1, colors[BLACK]);
		DrawLine(183, 340, 183, 490, 1, colors[BLACK]);
		DrawLine(233, 340, 233, 490, 1, colors[BLACK]);
		DrawLine(283, 340, 283, 490, 1, colors[BLACK]);
		//DrawLine(333, 340, 333, 490, 1, colors[BLACK]);
		//DrawLine(383, 340, 383, 490, 1, colors[BLACK]);
		//DrawLine(433, 340, 433, 490, 1, colors[BLACK]);
		//DrawLine(483, 340, 483, 490, 1, colors[BLACK]);
		DrawLine(533, 340, 533, 490, 1, colors[BLACK]);
		DrawLine(583, 340, 583, 490, 1, colors[BLACK]);
		DrawLine(633, 340, 633, 490, 1, colors[BLACK]);
		DrawLine(683, 340, 683, 490, 1, colors[BLACK]);
		DrawLine(733, 340, 733, 490, 1, colors[BLACK]);
		//DrawLine(783, 340, 783, 490, 1, colors[BLACK]);

		//Drawing Step From Bottom To Top
		DrawLine(333, 90, 483, 90, 1, colors[BLACK]);
		DrawLine(333, 140, 483, 140, 1, colors[BLACK]);
		DrawLine(333, 190, 483, 190, 1, colors[BLACK]);
		DrawLine(333, 240, 483, 240, 1, colors[BLACK]);
		DrawLine(333, 290, 483, 290, 1, colors[BLACK]);
		//DrawLine(333, 340, 483, 340, 1, colors[BLACK]);
		//DrawLine(333, 390, 483, 390, 1, colors[BLACK]);
		//DrawLine(333, 440, 483, 440, 1, colors[BLACK]);
		//DrawLine(333, 490, 483, 490, 1, colors[BLACK]);
		DrawLine(333, 540, 483, 540, 1, colors[BLACK]);
		DrawLine(333, 590, 483, 590, 1, colors[BLACK]);
		DrawLine(333, 640, 483, 640, 1, colors[BLACK]);
		DrawLine(333, 690, 483, 690, 1, colors[BLACK]);
		DrawLine(333, 740, 483, 740, 1, colors[BLACK]);
		//DrawLine(333, 790, 483, 790, 1, colors[BLACK]);
		//DrawLine(333, 840, 483, 840, 1, colors[BLACK]);

		//Triangles at center
		DrawTriangle(333, 340, 483, 340, 408, 415, colors[RED]);
		DrawTriangle(333, 340, 408, 415, 333, 490, colors[BLUE]);
		DrawTriangle(333, 490, 483, 490, 408, 415, colors[YELLOW]);
		DrawTriangle(483, 340, 408, 415, 483, 490, colors[LIME]);
		//Dailgnol Lines At ceter of trianlles
		DrawLine(333, 340, 483, 490, 4, colors[WHITE]); //Right Diagnol
		DrawLine(333, 490, 483, 340, 4, colors[WHITE]); //Left daignol

		//Token Home Squre
		DrawRoundRect(110, 120, 60, 60, colors[RED]);
		DrawRoundRect(110, 200, 60, 60, colors[RED]);
		DrawRoundRect(200, 120, 60, 60, colors[RED]);
		DrawRoundRect(200, 200, 60, 60, colors[RED]);

		DrawRoundRect(110, 570, 60, 60, colors[BLUE]);
		DrawRoundRect(110, 650, 60, 60, colors[BLUE]);
		DrawRoundRect(200, 570, 60, 60, colors[BLUE]);
		DrawRoundRect(200, 650, 60, 60, colors[BLUE]);

		DrawRoundRect(563, 570, 60, 60, colors[ORANGE]);
		DrawRoundRect(563, 650, 60, 60, colors[ORANGE]);
		DrawRoundRect(653, 570, 60, 60, colors[ORANGE]);
		DrawRoundRect(653, 650, 60, 60, colors[ORANGE]);

		DrawRoundRect(563, 120, 60, 60, colors[LIME]);
		DrawRoundRect(563, 200, 60, 60, colors[LIME]);
		DrawRoundRect(653, 120, 60, 60, colors[LIME]);
		DrawRoundRect(653, 200, 60, 60, colors[LIME]);

		//TOKENS
		//Red Token 1
		DrawCircle(xred1, yred1, 12, colors[DARK_RED]);
		DrawRoundRect(xred1 - 5, yred1 + 10, 10, 10, colors[DARK_RED]);
		DrawRoundRect(xred1 - 12, yred1 - 12, 24, 10, colors[DARK_RED]);

		//Red Token 2
		DrawCircle(xred2, yred2, 12, colors[DARK_RED]);
		DrawRoundRect(xred2 - 5, yred2 + 10, 10, 10, colors[DARK_RED]);
		DrawRoundRect(xred2 - 12, yred2 - 12, 24, 10, colors[DARK_RED]);

		//Red Token 3
		DrawCircle(xred3, yred3, 12, colors[DARK_RED]);
		DrawRoundRect(xred3 - 5, yred3 + 10, 10, 10, colors[DARK_RED]);
		DrawRoundRect(xred3 - 12, yred3 - 12, 24, 10, colors[DARK_RED]);

		//Red Token 4
		DrawCircle(xred4, yred4, 12, colors[DARK_RED]);
		DrawRoundRect(xred4 - 5, yred4 + 10, 10, 10, colors[DARK_RED]);
		DrawRoundRect(xred4 - 12, yred4 - 12, 24, 10, colors[DARK_RED]);

		//Yellow Token 1
		DrawCircle(xyellow1, yyellow1, 12, colors[DARK_ORANGE]);
		DrawRoundRect(xyellow1 - 5, yyellow1 + 10, 10, 10, colors[DARK_ORANGE]);
		DrawRoundRect(xyellow1 - 12, yyellow1 - 12, 24, 10, colors[DARK_ORANGE]);

		//Yellow Token 2
		DrawCircle(xyellow2, yyellow2, 12, colors[DARK_ORANGE]);
		DrawRoundRect(xyellow2 - 5, yyellow2 + 10, 10, 10, colors[DARK_ORANGE]);
		DrawRoundRect(xyellow2 - 12, yyellow2 - 12, 24, 10, colors[DARK_ORANGE]);

		//Yellow Token 3
		DrawCircle(xyellow3, yyellow3, 12, colors[DARK_ORANGE]);
		DrawRoundRect(xyellow3 - 5, yyellow3 + 10, 10, 10, colors[DARK_ORANGE]);
		DrawRoundRect(xyellow3 - 12, yyellow3 - 12, 24, 10, colors[DARK_ORANGE]);

		//Yellow Token 4
		DrawCircle(xyellow4, yyellow4, 12, colors[DARK_ORANGE]);
		DrawRoundRect(xyellow4 - 5, yyellow4 + 10, 10, 10, colors[DARK_ORANGE]);
		DrawRoundRect(xyellow4 - 12, yyellow4 - 12, 24, 10, colors[DARK_ORANGE]);

		if (gamemode == 2)
		{
			//Blue Token 1
			DrawCircle(xblue1, yblue1, 12, colors[DARK_BLUE]);
			DrawRoundRect(xblue1 - 5, yblue1 + 10, 10, 10, colors[DARK_BLUE]);
			DrawRoundRect(xblue1 - 12, yblue1 - 12, 24, 10, colors[DARK_BLUE]);

			//Blue Token 2
			DrawCircle(xblue2, yblue2, 12, colors[DARK_BLUE]);
			DrawRoundRect(xblue2 - 5, yblue2 + 10, 10, 10, colors[DARK_BLUE]);
			DrawRoundRect(xblue2 - 12, yblue2 - 12, 24, 10, colors[DARK_BLUE]);

			//Blue Token 3
			DrawCircle(xblue3, yblue3, 12, colors[DARK_BLUE]);
			DrawRoundRect(xblue3 - 5, yblue3 + 10, 10, 10, colors[DARK_BLUE]);
			DrawRoundRect(xblue3 - 12, yblue3 - 12, 24, 10, colors[DARK_BLUE]);

			//Blue Token 4
			DrawCircle(xblue4, yblue4, 12, colors[DARK_BLUE]);
			DrawRoundRect(xblue4 - 5, yblue4 + 10, 10, 10, colors[DARK_BLUE]);
			DrawRoundRect(xblue4 - 12, yblue4 - 12, 24, 10, colors[DARK_BLUE]);

			//Green Token 1
			DrawCircle(xgreen1, ygreen1, 12, colors[GREEN]);
			DrawRoundRect(xgreen1 - 5, ygreen1 + 10, 10, 10, colors[GREEN]);
			DrawRoundRect(xgreen1 - 12, ygreen1 - 12, 24, 10, colors[GREEN]);

			//Green Token 2
			DrawCircle(xgreen2, ygreen2, 12, colors[GREEN]);
			DrawRoundRect(xgreen2 - 5, ygreen2 + 10, 10, 10, colors[GREEN]);
			DrawRoundRect(xgreen2 - 12, ygreen2 - 12, 24, 10, colors[GREEN]);

			//Green Token 3
			DrawCircle(xgreen3, ygreen3, 12, colors[GREEN]);
			DrawRoundRect(xgreen3 - 5, ygreen3 + 10, 10, 10, colors[GREEN]);
			DrawRoundRect(xgreen3 - 12, ygreen3 - 12, 24, 10, colors[GREEN]);

			//Green Token 4
			DrawCircle(xgreen4, ygreen4, 12, colors[GREEN]);
			DrawRoundRect(xgreen4 - 5, ygreen4 + 10, 10, 10, colors[GREEN]);
			DrawRoundRect(xgreen4 - 12, ygreen4 - 12, 24, 10, colors[GREEN]);
		}

		//Dice
		DrawRoundRect(820, 80, 150, 150, colors[BROWN]);

		switch (dice)
		{
		case 1:
			DrawCircle(895, 155, 8, colors[SILVER]);
			break;
		case 2:
			DrawCircle(945, 205, 8, colors[SILVER]);
			DrawCircle(845, 105, 8, colors[SILVER]);
			break;
		case 3:
			DrawCircle(945, 205, 8, colors[SILVER]);
			DrawCircle(895, 155, 8, colors[SILVER]);
			DrawCircle(845, 105, 8, colors[SILVER]);
			break;
		case 4:
			DrawCircle(845, 105, 8, colors[SILVER]);
			DrawCircle(845, 205, 8, colors[SILVER]);
			DrawCircle(945, 105, 8, colors[SILVER]);
			DrawCircle(945, 205, 8, colors[SILVER]);
			break;
		case 5:
			DrawCircle(895, 155, 8, colors[SILVER]);
			DrawCircle(845, 105, 8, colors[SILVER]);
			DrawCircle(845, 205, 8, colors[SILVER]);
			DrawCircle(945, 105, 8, colors[SILVER]);
			DrawCircle(945, 205, 8, colors[SILVER]);
			break;
		case 6:
			DrawCircle(845, 105, 8, colors[SILVER]);
			DrawCircle(845, 205, 8, colors[SILVER]);
			DrawCircle(945, 105, 8, colors[SILVER]);
			DrawCircle(945, 205, 8, colors[SILVER]);
			DrawCircle(845, 155, 8, colors[SILVER]);
			DrawCircle(945, 155, 8, colors[SILVER]);
			break;
		default:
			DrawString(835, 180, "Press Space", colors[SILVER]);
			DrawString(860, 145, "to Roll", colors[SILVER]);
			DrawString(855, 110, "the Dice", colors[SILVER]);
			break;
		}
	}

	//Token
	/*	DrawCircle(xr1, yr1, 12, colors[BLACK]);
	DrawRoundRect(xr1 - 5, yr1 + 10, 10, 10, colors[BLACK]);
	DrawRoundRect(xr1 - 12, yr1 - 12, 24, 10, colors[BLACK]);
	DrawCircle(xy1, yy1, 12, colors[BLACK]);
	DrawRoundRect(xy1 - 5, yy1 + 10, 10, 10, colors[BLACK]);
	DrawRoundRect(xy1 - 12, yy1 - 12, 24, 10, colors[BLACK]);*/

	glutSwapBuffers(); // do not modify this line..
}

/*This function is called (automatically) whenever any non-printable key (such as up-arrow, down-arraw)
 * is pressed from the keyboard
 *
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 *
 * */

void NonPrintableKeys(int key, int x, int y)
{

	if (key == GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/)
	{
		// what to do when left key is pressed...
	}
	else if (key == GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/)
	{
	}
	else if (key == GLUT_KEY_UP /*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/)
	{
	}

	else if (key == GLUT_KEY_DOWN /*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/)
	{
	}

	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	 * this function*/

	glutPostRedisplay();
}

/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
void PrintableKeys(unsigned char key, int x, int y)
{
	if (key == 27 /* Escape key ASCII*/)
	{
		exit(1); // exit the program when escape key is pressed.
	}

	if (key == 'b' || key == 'B') //Key for placing the bomb
	{
		//do something if b is pressed
		cout << "b pressed" << endl;
		MovementGreen(xgreen1, ygreen1);
		xgreen1 = temp1;
		ygreen1 = temp2;
		cout << xgreen1 << " " << ygreen1 << endl;
	}
	if (key == 49)
	{
		start = 1;
	}
	if (key == 50)
	{
		string text;
		fstream my_file;
		my_file.open("LeaderBoard.txt", ios::in);
		if (my_file.is_open())
		{
			for (int i = 0; i < 10; i++)
			{
				getline(my_file, text);
				cout << text << "\n";
			}
			my_file.close();
		}
	}
	if (key == 51)
	{
		cout << p1name << " " << p3name;
	}
	if (key == 52)
	{
		exit(1);
	}
	if (key == 32)
	{
		if (gamemode == 1)
		{
			dice = rand() % 6 + 1;
			if (dice == 6)
			{
				turn %= 4;
			}
			else
			{

				turn += 2;
				turn %= 4;
			}
			cout << "Player = " << turn + 1 << endl;
			cout << "Dice = " << dice << endl;
		}
		if (gamemode == 2)
		{
			dice = rand() % 6 + 1;
			if (dice == 6)
			{
				turn %= 4;
			}
			else
			{
				turn += 1;
				turn %= 4;
			}

			cout << "Player = " << turn + 1 << endl;
			cout << "Dice = " << dice << endl;
		}
	}
	glutPostRedisplay();
}

/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */
void Timer(int m)
{

	// implement your functionality here

	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(1000.0, Timer, 0);
}

/*This function is called (automatically) whenever your mouse moves witin inside the game window
 *
 * You will have to add the necessary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */
void MousePressedAndMoved(int x, int y)
{
	cout << x << " " << y << endl;

	glutPostRedisplay();
}
void MouseMoved(int x, int y)
{

	glutPostRedisplay();
}

/*This function is called (automatically) whenever your mouse button is clicked witin inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */
void MouseClicked(int button, int state, int x, int y)
{

	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
	{
		cout << GLUT_DOWN << " " << GLUT_UP << endl;
		cout << x << " " << y << endl;
		y = 830 - y;
		float dis1, dis2, dis3, dis4;

		if (turn == 0)
		{
			dis1 = sqrt(pow((x - xred1), 2) + pow((y - yred1), 2));
			dis2 = sqrt(pow((x - xred2), 2) + pow((y - yred2), 2));
			dis3 = sqrt(pow((x - xred3), 2) + pow((y - yred3), 2));
			dis4 = sqrt(pow((x - xred4), 2) + pow((y - yred4), 2));

			if (dis1 <= 15)
			{

				if (xred1 != xr1 && yred1 != yr1)
				{

					cout << " Red Token 1\n";
					for (int i = 0; i < dice; i++)
					{
						MovementRed(xred1, yred1);
						xred1 = temp1;
						yred1 = temp2;
						p1 += 1;
					}
					dice = 0;
				}
				else if (xred1 == xr1 && yred1 == yr1 && dice == 6)
				{

					xred1 = redopenx;
					yred1 = redopeny;
					dice = 0;
				}

				else
				{
					cout << "Token is in Home Square\n";
				}
			}
			else if (dis2 <= 15)
			{

				if (xred2 != xr2 && yred2 != yr2)
				{

					cout << "Red Token 2\n";
					for (int i = 0; i < dice; i++)
					{
						MovementRed(xred2, yred2);
						xred2 = temp1;
						yred2 = temp2;
						p1 += 1;
					}
					dice = 0;
				}
				else if (xred2 == xr2 && yred2 == yr2 && dice == 6)
				{

					xred2 = redopenx;
					yred2 = redopeny;
					dice = 0;
				}

				else
				{
					cout << "Token is in Home Square\n";
				}
			}
			else if (dis3 <= 15)
			{
				if (xred3 != xr3 && yred3 != yr3)
				{

					cout << "Red Token 3\n";
					for (int i = 0; i < dice; i++)
					{
						MovementRed(xred3, yred3);
						xred3 = temp1;
						yred3 = temp2;
						p1 += 1;
					}
					dice = 0;
				}
				else if (xred3 == xr3 && yred3 == yr3 && dice == 6)
				{
					xred3 = redopenx;
					yred3 = redopeny;
					dice = 0;
				}

				else
				{
					cout << "Token is in Home Square\n";
				}
			}
			else if (dis4 <= 15)
			{
				if (xred4 != xr4 && yred4 != yr4)
				{

					cout << "Red Token 4\n";
					for (int i = 0; i < dice; i++)
					{
						MovementRed(xred4, yred4);
						xred4 = temp1;
						yred4 = temp2;
						p1 += 1;
					}
					dice = 0;
				}
				else if (xred4 == xr4 && yred4 == yr4 && dice == 6)
				{
					xred4 = redopenx;
					yred4 = redopeny;
					dice = 0;
				}

				else
				{
					cout << "Token is in Home Square\n";
				}
			}

			else
			{
				cout << "Click on The Token\n";
			}
		}
		//Yellow
		else if (turn == 2)
		{
			dis1 = sqrt(pow((x - xyellow1), 2) + pow((y - yyellow1), 2));
			dis2 = sqrt(pow((x - xyellow2), 2) + pow((y - yyellow2), 2));
			dis3 = sqrt(pow((x - xyellow3), 2) + pow((y - yyellow3), 2));
			dis4 = sqrt(pow((x - xyellow4), 2) + pow((y - yyellow4), 2));
			if (dis1 <= 15)
			{

				if (xyellow1 != xy1 && yyellow1 != yy1)
				{

					cout << " Yellow Token 1\n";
					for (int i = 0; i < dice; i++)
					{
						MovementYellow(xyellow1, yyellow1);
						xyellow1 = temp1;
						yyellow1 = temp2;
						p3 += 1;
					}
					dice = 0;
				}
				else if (xyellow1 == xy1 && yyellow1 == yy1 && dice == 6)
				{

					xyellow1 = yellowopenx;
					yyellow1 = yellowopeny;
					dice = 0;
				}

				else
				{
					cout << "Token is in Home Square\n";
				}
			}
			else if (dis2 <= 15)
			{

				if (xyellow2 != xy2 && yyellow2 != yy2)
				{

					cout << "Yellow Token 2\n";
					for (int i = 0; i < dice; i++)
					{
						MovementYellow(xyellow2, yyellow2);
						xyellow2 = temp1;
						yyellow2 = temp2;
						p3 += 1;
					}
					dice = 0;
				}
				else if (xyellow2 == xy2 && yyellow2 == yy2 && dice == 6)
				{

					xyellow2 = yellowopenx;
					yyellow2 = yellowopeny;
					dice = 0;
				}

				else
				{
					cout << "Token is in Home Square\n";
				}
			}
			else if (dis3 <= 15)
			{
				if (xyellow2 != xy2 && yyellow2 != yy2)
				{
					cout << "Yellow Token 3\n";
					for (int i = 0; i < dice; i++)
					{
						MovementYellow(xred3, yred3);
						xyellow3 = temp1;
						yyellow3 = temp2;
						p3 += 1;
					}
					dice = 0;
				}
				else if (xyellow3 == xy3 && yyellow3 == yy3 && dice == 6)
				{
					xyellow3 = yellowopenx;
					yyellow3 = yellowopeny;
					dice = 0;
				}

				else
				{
					cout << "Token is in Home Square\n";
				}
			}
			else if (dis4 <= 15)
			{
				if (xyellow2 != xy2 && yyellow2 != yy2)
				{

					cout << "Yellow Token 4\n";
					for (int i = 0; i < dice; i++)
					{
						MovementYellow(xyellow4, yyellow4);
						xyellow4 = temp1;
						yyellow4 = temp2;
						p3 += 1;
					}
					dice = 0;
				}
				else if (xred4 == xr4 && yred4 == yr4 && dice == 6)
				{
					xyellow4 = yellowopenx;
					yyellow4 = yellowopeny;
					dice = 0;
				}

				else
				{
					cout << "Token is in Home Square\n";
				}
			}

			else
			{
				cout << "Click on The Token\n";
			}
			//turn = 0;
		}
		//Blue
		else if (turn == 1)
		{
			dis1 = sqrt(pow((x - xblue1), 2) + pow((y - yblue1), 2));
			dis2 = sqrt(pow((x - xblue2), 2) + pow((y - xblue2), 2));
			dis3 = sqrt(pow((x - xblue3), 2) + pow((y - xblue3), 2));
			dis4 = sqrt(pow((x - xblue4), 2) + pow((y - xblue4), 2));

			if (dis1 <= 15)
			{

				if (xblue1 != xb1 && yblue1 != yb1)
				{

					cout << " Blue Token 1\n";
					for (int i = 0; i < dice; i++)
					{
						MovementBlue(xblue1, yblue1);
						xblue1 = temp1;
						yblue1 = temp2;
						p2 += 1;
					}
					dice = 0;
				}
				else if (xblue1 == xb1 && yblue1 == yb1 && dice == 6)
				{

					xblue1 = blueopenx;
					yblue1 = blueopeny;
					dice = 0;
				}

				else
				{
					cout << "Token is in Home Square\n";
				}
			}
			else if (dis2 <= 15)
			{

				if (xblue2 != xb2 && xblue2 != yb2)
				{

					cout << "Blue Token 2\n";
					for (int i = 0; i < dice; i++)
					{
						MovementBlue(xblue2, xblue2);
						xblue2 = temp1;
						xblue2 = temp2;
						p2 += 1;
					}
					dice = 0;
				}
				else if (xblue2 == xb2 && xblue2 == yb2 && dice == 6)
				{

					xblue2 = blueopenx;
					xblue2 = blueopeny;
					dice = 0;
				}

				else
				{
					cout << "Token is in Home Square\n";
				}
			}
			else if (dis3 <= 15)
			{
				if (xblue3 != xb3 && xblue3 != yb3)
				{

					cout << "Blue Token 3\n";
					for (int i = 0; i < dice; i++)
					{
						MovementBlue(xblue3, xblue3);
						xblue3 = temp1;
						xblue3 = temp2;
						p2 += 1;
					}
					dice = 0;
				}
				else if (xblue3 == xb3 && xblue3 == yb3 && dice == 6)
				{
					xblue3 = blueopenx;
					xblue3 = blueopeny;
					dice = 0;
				}

				else
				{
					cout << "Token is in Home Square\n";
				}
			}
			else if (dis4 <= 15)
			{
				if (xblue4 != xb4 && xblue4 != yb4)
				{

					cout << "Blue Token 4\n";
					for (int i = 0; i < dice; i++)
					{
						MovementBlue(xblue4, xblue4);
						xblue4 = temp1;
						xblue4 = temp2;
						p2 += 1;
					}
					dice = 0;
				}
				else if (xblue4 == xb4 && xblue4 == yb4 && dice == 6)
				{
					xblue4 = blueopenx;
					xblue4 = blueopeny;
					dice = 0;
				}

				else
				{
					cout << "Token is in Home Square\n";
				}
			}

			else
			{
				cout << "Click on The Token\n";
			}
		}
		//Green
		else if (turn == 3)
		{
			dis1 = sqrt(pow((x - xgreen1), 2) + pow((y - ygreen1), 2));
			dis2 = sqrt(pow((x - xgreen2), 2) + pow((y - ygreen2), 2));
			dis3 = sqrt(pow((x - xgreen3), 2) + pow((y - ygreen3), 2));
			dis4 = sqrt(pow((x - xgreen4), 2) + pow((y - ygreen4), 2));

			if (dis1 <= 15)
			{

				if (xgreen1 != xg1 && ygreen1 != yg1)
				{

					cout << " Green Token 1\n";
					for (int i = 0; i < dice; i++)
					{
						MovementGreen(xgreen1, ygreen1);
						xgreen1 = temp1;
						ygreen1 = temp2;
						p4 += 1;
					}
					dice = 0;
				}
				else if (xgreen1 == xg1 && ygreen1 == yg1 && dice == 6)
				{

					xgreen1 = greenopenx;
					ygreen1 = greenopeny;
					dice = 0;
				}

				else
				{
					cout << "Token is in Home Square\n";
				}
			}
			else if (dis2 <= 15)
			{

				if (xgreen2 != xg2 && ygreen2 != yg2)
				{

					cout << "Green Token 2\n";
					for (int i = 0; i < dice; i++)
					{
						MovementGreen(xgreen2, ygreen2);
						xgreen2 = temp1;
						ygreen2 = temp2;
						p4 += 1;
					}
					dice = 0;
				}
				else if (xgreen2 == xg2 && ygreen2 == yg2 && dice == 6)
				{

					xgreen2 = greenopenx;
					ygreen2 = greenopeny;
					dice = 0;
				}

				else
				{
					cout << "Token is in Home Square\n";
				}
			}
			else if (dis3 <= 15)
			{
				if (xgreen3 != xg3 && ygreen3 != yg3)
				{

					cout << "Green Token 3\n";
					for (int i = 0; i < dice; i++)
					{
						MovementGreen(xgreen3, ygreen3);
						xgreen3 = temp1;
						ygreen3 = temp2;
						p4 += 1;
					}
					dice = 0;
				}
				else if (xgreen3 == xg3 && ygreen3 == yg3 && dice == 6)
				{
					xgreen3 = greenopenx;
					ygreen3 = greenopeny;
					dice = 0;
				}

				else
				{
					cout << "Token is in Home Square\n";
				}
			}
			else if (dis4 <= 15)
			{
				if (xgreen4 != xr4 && ygreen4 != yr4)
				{

					cout << "Green Token 4\n";
					for (int i = 0; i < dice; i++)
					{
						MovementGreen(xgreen4, ygreen4);
						xgreen4 = temp1;
						ygreen4 = temp2;
						p4 += 1;
					}
					dice = 0;
				}
				else if (xgreen4 == xr4 && ygreen4 == yr4 && dice == 6)
				{
					xgreen4 = greenopenx;
					ygreen4 = greenopeny;
					dice = 0;
				}

				else
				{
					cout << "Token is in Home Square\n";
				}
			}

			else
			{
				cout << "Click on The Token\n";
			}
		}
	}

	else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
	{
	}
	glutPostRedisplay();
}
/*
 * our gateway main function
 * */
int main(int argc, char *argv[])
{
	cout << "\n\tLudo Game\n\n"
		 << "\tSelect Game Mode\n"
		 << "\t1. 2-Player\n"
		 << "\t2. 4-Player\n"
		 << "\nEnter Choice: ";
	cin >> gamemode;

	while (gamemode < 1 || gamemode > 2)
	{
		cout << "\n\tInvalide Choice!\n";
		cout << "\nSelect Again\n"
			 << "\t1. 2-Player\n"
			 << "\t2. 4-Player\n"
			 << "\nEnter Choice: ";
		cin >> gamemode;
	}

	if (gamemode == 1)
	{
		cout << "\n\tEnter Name of Players\n"
			 << "Enter Player 1 Name: ";
		cin >> p1name;
		cout << "Enter Player 2 Name: ";
		cin >> p3name;
	}
	if (gamemode == 2)
	{
		cout << "\n\tEnter Name of Players\n"
			 << "Enter Player 1 Name: ";
		cin >> p1name;
		cout << "Enter Player 2 Name: ";
		cin >> p2name;
		cout << "Enter Player 3 Name: ";
		cin >> p3name;
		cout << "Enter Player 4 Name: ";
		cin >> p4name;
		cout << endl;
	}

	//b = new Board(60, 60); // create a new board object to use in the Display Function ...

	int width = 1020, height = 830; // i have set my window size to be 800 x 600
	//b->InitalizeBoard(width, height);
	InitRandomizer();							  // seed the random number generator...
	glutInit(&argc, argv);						  // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50);				  // set the initial position of our window
	glutInitWindowSize(width, height);			  // set the size of our window
	glutCreateWindow("Ludo Game");				  // set the title of our game window
	SetCanvasSize(width, height);				  // set the number of pixels...

	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.

	glutDisplayFunc(GameDisplay);	   // tell library which function to call for drawing Canvas.
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys);   // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 0);

	glutMouseFunc(MouseClicked);
	glutPassiveMotionFunc(MouseMoved);	  // Mouse
	glutMotionFunc(MousePressedAndMoved); // Mouse

	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	glutMainLoop();
	return 1;
}
#endif /* AsteroidS_CPP_ */
