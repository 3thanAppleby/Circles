#pragma once


class Circles
{
private:
	int x; //Circles Position on X axis.
	int y; //Circles Position on Y axis.
	int SpeedX; //Circles Speed on X axis.
	int SpeedY; //Circles Speed on Y axis.
	int Radius; //Circles size.

	//Colour of the Circle.
	unsigned char red{ 255 };
	unsigned char blue{ 255 };
	unsigned char green{ 10 };
	unsigned char alpha{ 255 };

public:
	
	//this is a constructor.
	Circles();

	//this is a destructor.
	/*~Circles();*/


	void Draw();
	void Move();
	void Expand();


};