#ifndef dk_tool.h
#define dk_tool.h

#include <stdio.h>
#include <Windows.h>
#include <conio.h>

struct polka
{
char avtor[50];
char nazva[100];
int stan;
}mas[20];


void add(int size);

void shov(int size);

#endif
