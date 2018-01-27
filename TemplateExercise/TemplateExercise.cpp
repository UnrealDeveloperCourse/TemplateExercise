// TemplateExercise.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>


/*Create a specialization template function*/
std::string PrettyString(int objectToPrettify)
{
	return "int: " + std::to_string(objectToPrettify);
}

/*Get Maximum of 2 Items*/
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
	std::cout << GetMax("hello", "world1234") << std::endl;

	/*
		Result without template:
			int: 3
			int: 3
	*/
	std::cout << PrettyString(3) << std::endl;
	std::cout << PrettyString(3.5) << std::endl;
}

