// TemplateExercise.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


/*Get Maximum of 2 Numbers*/

int GetMax(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

double GetMax(double a, double b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main()
{
	std::cout << GetMax(1, 2) << std::endl;
	std::cout << GetMax(1.3, 2.5) << std::endl;
}

