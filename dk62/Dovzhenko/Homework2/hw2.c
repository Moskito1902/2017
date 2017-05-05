#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "hw2.h"


SphereList * createSphereList(int aSize)
{
	SphereList *newList = (SphereList *)malloc(sizeof(SphereList)); //�������� ���*�� ��� ��������� ������
	
	if(newList != NULL)
	{
		newList->spheres = (SpherePosition *)malloc(aSize * sizeof(SpherePosition));
		memset(newList->spheres, 0 , aSize * sizeof(SpherePosition));
		
		newList->size = aSize;
		newList->currentSize = 0;		
	}
	return newList;
}

int addSphere(SphereList *aSphere, int x,int y, int z, int R) //� ������� ��������  �������� ������ � ��������� �����
{
	if(NULL != aSphere && 0 < R) //�������� �� ��������� ������ � �� ����� ����� 0
	{
		if(aSphere -> currentSize < aSphere->size)
		{
			SpherePosition *theSphere = &(aSphere->spheres[aSphere->currentSize]);
			if( NULL != theSphere) 
			{
				theSphere -> x = x; //���������� �����
				theSphere -> y = y;
				theSphere -> z = z;
				theSphere -> R = R;
				
				aSphere->currentSize ++;
			}
		}
		else
		return 0;
	}
	else
	{
	    return 0;
    }
    return 0;
}


float Squareareas(SpherePosition * Sphere)
{
	return  4 * 3.14 * pow(Sphere->R,2);	
}

void removeSphereList(SphereList *aSphere)
{
	if(NULL != aSphere)
	{
		if(NULL != aSphere-> spheres)
		{
			free(aSphere-> spheres);
		}
		free(aSphere);
	}
}



