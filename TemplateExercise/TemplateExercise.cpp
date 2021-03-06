// TemplateExercise.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>


/*Create a specialization template function*/
template<class T>
std::string PrettyString(T objectToPrettify)
{
	return "int: " + std::to_string(objectToPrettify);
}

/*Double specialization. Cpp will select this template
if it is a better match for type of arg being passed*/
template<>
std::string PrettyString(double objectToPrettify)
{
	return "double: " + std::to_string(objectToPrettify);
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

/*std::string specialization. > operator will actually work
without specializing the template further. Regardless, for illustration
purposes, this template function still does the job.*/
template<>
std::string GetMax(std::string a, std::string b)
{
	if (a.length() > b.length())
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

	/*
		Result without template (and not casting to std::string):
			hello

		Result with template specialization:
			world1234
	*/
	std::cout << GetMax("hello", "world1234") << std::endl;

	std::cout << GetMax(std::string("hello"), std::string("world1234")) << std::endl;

	/*
		Result without template:
			int: 3
			int: 3

		Result with template specialization:
			int: 3
			double: 3.500000
	*/
	std::cout << PrettyString(3) << std::endl;
	std::cout << PrettyString(3.5) << std::endl;
}

