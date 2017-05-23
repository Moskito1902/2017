#include <stdio.h>
#include <stdlib.h>
#include "dk_tool.h"

int main(int argc, const char *argv[])
{
	int a = 0;
	do{										//���� ����� �����������, ���� a < 1
		printf("Enter number of circles: ");
		scanf("%i", &a);
	}while(a < 1);
	
	list *circ = createList(a);				//�������� ������ �� ������ ���������� ������
	
	while(a != 0)							//����
	{
		newCoordinate(circ);
		a--;
	}
	
	printArea(circ);						//������� �� �����
	printJson(circ);						//������� � ����
	destroyList(circ);
	
	return 0;
}
