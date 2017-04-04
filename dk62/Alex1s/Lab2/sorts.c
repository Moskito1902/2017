#include <stdio.h>
#include <stdlib.h>
#include "dk_tool.h"
#include "sorts.h"

void merge(int rzmr, int *array, int l, int r)
{
if(l < r)
    {
    int m = l+(r-l)/2;
    merge(rzmr, array, l, m);
    merge(rzmr, array, m+1, r);
    mergesort(rzmr, array, l, m, r);
    }
}

//-----------------------------------------------------------------------------------------------

void mergesort(int rzmr, int *array, int l, int m, int r)
{
int i, j, k;
int n1 = m - l + 1;
int n2 =  r - m;
int L[n1], R[n2];

for(i = 0; i < n1; i++)
    L[i] = array[l + i];

for(j = 0; j < n2; j++)
    R[j] = array[m + 1 + j];

i = 0;
j = 0;
k = l;

while(i < n1 && j < n2)
    {
    if(L[i] <= R[j])
        {
        array[k] = L[i];
        i++;
        }
    else
        {
        array[k] = R[j];
        j++;
        }
    k++;
    }
while(i < n1)
    {
    array[k] = L[i];
    i++;
    k++;
    }
while(j < n2)
    {
    array[k] = R[j];
    j++;
    k++;
    }
}

//-----------------------------------------------------------------------------------------------

void swap(int *val1, int *val2)
{
int tmp = *val1;
*val1 = *val2;
*val2 = tmp;
}

//-----------------------------------------------------------------------------------------------

void print_array(int *array, int rzmr)
{
int i;
for(i = 0; i < rzmr; i++)
	printf("%i ", array[i]);
printf("\n");
}

//-----------------------------------------------------------------------------------------------

void shellsort(int *array, int rzmr)
{
int theInner = 0;
int theOuter = 0;
int H = 1;

while (H <= rzmr/3)
	H = H*3 + 1;

while (H > 0)
	{
	for(theOuter = H; theOuter < rzmr; theOuter ++)
		{
		int theTmp = array[theOuter];
		theInner = theOuter;

		while (theInner > H-1 && array[theInner - H] >= theTmp)
			{
			array[theInner] = array[theInner - H];
			theInner -= H;
			}
		array[theInner] = theTmp;
		}
	H = (H - 1) / 3;
	}
}

//-----------------------------------------------------------------------------------------------

void bubblesort(int *array, int rzmr)
{
int k, i, swaps;
for(k = 0; k < rzmr-1; k++)
    {
    for(i = 0; i < rzmr-1-k; i++)
        {
        if(array[i] > array[i+1])
            {
            swap(&array[i], &array[i+1]);
            swaps++;
            }
        }
    if(!swaps)
    	{
    	printf("Array was sorted.\n");
    	break;
    	}
    }
}

//-----------------------------------------------------------------------------------------------

void selectionsort(int *array, int rzmr)
{
int theOut;
for(theOut = 0; theOut < rzmr - 1; theOut++)
	{
	int theMinIndex = theOut, theIn;
	for(theIn = theOut + 1; theIn < rzmr; theIn++)
		{
		if(array[theIn] < array[theMinIndex])
			{
			theMinIndex = theIn;
			}
		}
	swap(&array[theOut], &array[theMinIndex]);
	}
}

//-----------------------------------------------------------------------------------------------

void insertionsort(int *array, int rzmr)
{
int theOut;
for(theOut = 1; theOut < rzmr; theOut++)
	{
	int theTmp = array[theOut];
	int theIn = theOut;
	while(theIn > 0 && array[theIn - 1] >= theTmp)
		{
		array[theIn] = array[theIn - 1];
		theIn--;
		}
	array[theIn] = theTmp;
	}
}

//-----------------------------------------------------------------------------------------------

void quicksort(int *array, int first, int last)
{
int i = first, j = last, x = array[(first + last) / 2];
do{
	while(array[i] < x)
		i++;
    while(array[j] > x)
		j--;

	if(i <= j)
		{
		if(array[i] > array[j])
			swap(&array[i], &array[j]);
		i++;
		j--;
		}
}while(i <= j);

if(i < last)
	quicksort(array, i, last);
if(first < j)
	quicksort(array, first, j);
}

//-----------------------------------------------------------------------------------------------

