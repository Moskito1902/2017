#include <stdio.h>
#include <stdlib.h>

#define tool_h

typedef struct coordinate
{
	int x;
	int y; 
	int z;
	
}Point;

typedef struct Points
{
	Point *points; //��������� �� ���������;
}Figure;

typedef struct List
{
	Figure *paralel; //��������� �� ���������;
	int size;
	int current_size;
	
}List_of_Figure;

List_of_Figure *createList_of_Figure(int size);
int WriteCoordinate(List_of_Figure *aFigure);
void printList(List_of_Figure *aFigure);
void destroyList_of_Figure(List_of_Figure *aFigure);
int addCoordinate();
