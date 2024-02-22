#include <iostream>
#include "Framework.h"

#include "Circle.h"

//this is a constructor which is called everytime the program creates a circle.
Circles::Circles()
{
	Radius = rand() % 7 + 3;
	x = rand() % (gScreenWidth - Radius * 2);
	y = rand() % (gScreenHeight - Radius * 2);
	SpeedX = rand() % 11 - 5;
	SpeedY = rand() % 11 - 5;

	/*std::cout << "Circle has been Created" << Radius << std::endl;*/

}

//Circles::~Circles()
//{
//	std::cout << "Circle has been Destoryed" << Radius << std::endl;
//}


void Circles::Draw()
{
	//Randomise the colour of the Circles.
	ChangeColour(red, blue, green, alpha);

	//Draws the circle, which allows it to appear in the console.
	DrawCircle(x, y, Radius);
}

void Circles::Move()
{
	//This moves the circle depending on the speed. 
	x += SpeedX;
	y += SpeedY;

	//this randomises the direction of the circles after 50 times through the loop.
	if (rand() % 50 == 0)
	{
		SpeedX = rand() % 11 - 5;
		SpeedY = rand() % 11 - 5;
	}


	//Both of these if loops check to see if the circle hits a wall, if it does it should bounce away.
	if (x<0 || x>gScreenWidth - Radius * 2)
	{
		SpeedX = -SpeedX;
	}

	if (y<0 || y>gScreenHeight - Radius * 2)
	{
		SpeedY = -SpeedY;
	}
}

void Circles::Expand()
{
	Radius++;
	if (Radius > 50)
	{
		Radius = 2;
	}

}
