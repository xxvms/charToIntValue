// charToIntValue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>



int main()
{
	for (int i = 65; i < 91; i++)
	{
		
		std::cout << (char)i << ", " << i << std::endl;

	}

	system("pause");

    return 0;
}

