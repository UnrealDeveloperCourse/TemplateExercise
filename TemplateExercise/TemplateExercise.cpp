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

template<class TypeToAdd>
TypeToAdd AddThree(TypeToAdd a, TypeToAdd b, TypeToAdd c)
{
	return a + b + c;
}


int main()
{
	std::cout << GetMax(1, 2) << std::endl;
	std::cout << GetMax(1.3, 2.5) << std::endl;
	std::cout << GetMax((float) 1.3, (float) 2.5) << std::endl;

	std::cout << AddThree(1, 2, 3) << std::endl;
	std::cout << AddThree((float) 1.3, (float) 2.5, (float) 2.5) << std::endl;
}

