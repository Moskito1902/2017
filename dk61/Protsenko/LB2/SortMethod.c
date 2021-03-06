#include "SortMethod.h"

#include <stdio.h>
#include <time.h>
#include <string.h>

void bubbleSort(char *str, int string_lenght)
	{
		for (int theOut = string_lenght-1; theOut > 0; theOut --)
		{		
			int theIn;
				for (int theIn = 0; theIn < theOut; theIn ++)
				{			
					if (str[theIn] > str[theIn + 1])
					{	
					char theTmp = str[theIn];
					str[theIn] = str[theIn + 1];
					str[theIn + 1] = theTmp;
					}
				}
		}
	}
	
void selectionSort(char *str, int string_lenght)
{
	int theOut;	
	for (theOut = 0; theOut < string_lenght - 1; theOut ++)
	{
		int theMinIndex = theOut;
		int theIn;	
		for (theIn = theOut + 1;theIn < string_lenght; theIn ++)
		{
			if (str[theIn]<str[theMinIndex])
			{				
				theMinIndex = theIn;
			}
		}
		
		char theTmp = str[theOut];
		str[theOut] = str[theMinIndex];
		str[theMinIndex] = theTmp;
	}
}

void insertionSort(char *str, int string_lenght)
{
	int theOut;
	for (theOut = 1; theOut < string_lenght; theOut ++)
	{
		char theTmp = str[theOut];
		int theIn = theOut;
		while (theIn > 0 && (str[theIn-1] >= theTmp))
		{
			str[theIn] = str[theIn - 1];
			-- theIn;
		}	
			str[theIn] = theTmp;
	}
}
