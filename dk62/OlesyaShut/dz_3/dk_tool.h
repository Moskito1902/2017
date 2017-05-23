#ifndef dk_tool_h
#define dk_tool_h

typedef struct aCoordinates			//��������� �������� ������ 2 ���������� ����� � ������
{
	float x;
	float y;
	float r;
}coordinates;						//��� ��������� ������

typedef struct aList				//��������� ��������
{
	int maxSize;					//������������ ���������� ������
	int currentSize;				//������� ���������� ������
	coordinates *circle;			//��������� �� ������ ���� (�� ��� ����� �.�.
}list;								//��� ����������� ������ ����� ������ ������)

list *createList(int aSize);		//������� ���� ������ ��������� � aSize ������
void destroyList(list *aList);		//����������� ������

void newCoordinate(list *aList);	//������ ������� x, y, radius.
void printArea(list *aList);		//�������� �� ������ ��������� ������ (x y r S)
void printJson(list *aList);		//�������� � ���� ��������� ������
float square(coordinates *current);	//������� ������� �����

#endif
