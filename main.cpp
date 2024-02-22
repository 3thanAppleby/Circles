/*
    Start shape drawing file
*/

#include <iostream>
#include "Framework.h"
#include <vector>
#include <time.h>
#include <stdio.h>
#include "Circle.h"


// Variables with global scope - do not rename them, feel free to change values though

// Screen dimensions
int gScreenWidth{800};
int gScreenHeight{600};

// Delay to slow things down
int gTimeDelayMS{10};

using namespace std;

int main()
{
	//seed the Random number generator.
	srand((int)time(0));

	//Structure using a vector.
	std::vector<Circles>CircleVector; //creates a vector called C in the colleciton of Circles.
	

	//creates a new circle and adds it to the vector of circles.
	for (int i = 0; i < 20; i++)
	{
		CircleVector.push_back(Circles());
	}

	while (UpdateFramework())
	{
		for (Circles &C : CircleVector)
		{
			C.Draw();
			C.Move();
			if (rand() % 20 == 0)
			{
				C.Expand();
			}

		}
		
	}


	cout << "Bye bye" << endl;

	return 0;
}
