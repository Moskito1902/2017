/*** ������������, �� ������ ����� ������� 4 �����. ����� ����� �������� ��������� 
������������. 
���������� ������� ��� ���������� �����. 
������ �������, �� ������� ��������� �� �������� ������ �� ���� �� �� ������ ��������� ��������. 
*/

#include <stdio.h>
#include "area_tools.h"

int main(void)
{ 
	kvadrat();//printf an image of sqare
			
	//1.
	SquareArray *array = createSA(10);
	Square square = {{1,2}, {3,3}, {3,3}, {3,3}};
	
	addSquareToList(array, &square);
	square.points[0].x = 2;
	square.points[0].y = 3;

	addSquareToList(array, &square);

	void addSquareToList(SquareArray *aList, Square *aSquare);
	void addSquareToList(SquareArray *aList, Square *aSquare);
	void addSquareToList(SquareArray *aList, Square *aSquare);
	void addSquareToList(SquareArray *aList, Square *aSquare);

	
	
	
		point *masiv_dots = (point*)malloc(4 * sizeof(point));// make a massiv for all dots
		
		scan_dot(masiv_dots);
		
		float plaza = area(masiv_dots);// variable with area of figure
		
		printf("\n\n the area of your 4-corner is   % .2f \n", plaza);
		
}


