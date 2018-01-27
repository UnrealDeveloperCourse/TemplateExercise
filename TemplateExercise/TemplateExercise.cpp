// TemplateExercise.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


/*Get Maximum of 2 Numbers*/
template<class T>
T GetMax(T a, T b)
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
	std::cout << GetMax((float) 1.3, (float) 2.5) << std::endl;
}

