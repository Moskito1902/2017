//
//  Sorting.c
//  Lab2
//
//  Created by air on 09.03.17.
//  Copyright © 2017 Oleg Kuzhilnyi. All rights reserved.
//

#include "Sorting.h"

int line_search(theDescriptionArray *iArray ,int aSize)
{
    int key = 0;
    puts("Please Enter integer which you want to find in Array:");
    scanf("%i", &key);
    
    for (int thePosition = 0; thePosition < aSize; thePosition++)
    {
        if (iArray->value[thePosition] == key)
            {
             
                puts("The line search could find next information:");
                puts("-------------------");              
            printf("|The key: %i\n|The Position: %i\n",key,thePosition);
                puts("-------------------");
            return thePosition;
            }
    }
  
    puts("NO have this element in Array");
    return -1;
}
void QuickSort(theDescriptionArray *MassOfNumbers,int left,int right)  //Quick Sort
{
    int TheOut,last;
    if(left >= right)
        return;
    
    swap(MassOfNumbers,left,(left + right)/2);
    last = left;
    for (TheOut = left+1;TheOut <=right;TheOut++)
        if(MassOfNumbers->value[TheOut] < MassOfNumbers->value[left])
            swap(MassOfNumbers,++last,TheOut);
    swap(MassOfNumbers,left,last);
    QuickSort(MassOfNumbers,left,last-1);
    QuickSort(MassOfNumbers, last+1, right);
}

void bubbleSort(theDescriptionArray *iArray)
{
    for (int theOut = iArray->current_size-1 ; theOut > 1; theOut --)
    {
        for (int theIn = 0; theIn < theOut; theIn ++)
        {
            if (iArray->value[theIn] > iArray->value[theIn+1])
            {
                swap(iArray,iArray->value[theIn],iArray->value[theIn+1]);
            }
        }
    }
}



void selectionSort(theDescriptionArray *iArray)
{
    for(int TheOut = 0; TheOut< iArray->current_size; TheOut++)
    {
        int min = TheOut;
        for(int TheIn = TheOut;TheIn < iArray->current_size; TheIn++)
        {
            if(iArray->value[TheIn] < iArray->value[min])
            {
                min = TheIn;
            }
        }
        swap(iArray,iArray->value[TheOut],iArray->value[min]);
        
    }
}



void insertionSort(theDescriptionArray *iArray)
{
    for (int theOut = 1; theOut < iArray->current_size; theOut ++)
    {
        int theTmp = iArray->value[theOut];
        int theIn = theOut;
        
        while (theIn > 0 && iArray->value[theIn - 1] >= theTmp)
        {
            iArray->value[theIn] = iArray->value[theIn - 1];
            -- theIn;
        }
        
        iArray->value[theIn] = theTmp;
    }
}

void swap(theDescriptionArray *srcArray,int x,int y)//transposition two elements of array
{
    
    int temp = srcArray->value[x];
    srcArray->value[x] = srcArray->value[y];
    srcArray->value[y] = temp;
}

void TheSorts_For_DifferentArrays(theDescriptionArray *Small, theDescriptionArray *Medium, theDescriptionArray *theBig , theDescriptionArray *TheBiggest)
{
    TheArrayList TimeClass;
    float TheTimeAtTheMoment;
    
    // -----------------------------------------------------------------------------//   Quick Sort
    TheTimeAtTheMoment = clock();
    QuickSort(Small, ZERO, Small->current_size);
    TimeClass.For_Q_Sort.TheTime[0] = TheResultOfTimePoint(TheTimeAtTheMoment);
    
    
    TheTimeAtTheMoment = clock();
    QuickSort(Medium, ZERO, Medium->current_size);
    TimeClass.For_Q_Sort.TheTime[1] = TheResultOfTimePoint(TheTimeAtTheMoment);
    
    
    
    TheTimeAtTheMoment = clock();
    QuickSort(theBig, ZERO, theBig->current_size);
    TimeClass.For_Q_Sort.TheTime[2] = TheResultOfTimePoint(TheTimeAtTheMoment);
    
    
    TheTimeAtTheMoment = clock();
    QuickSort(TheBiggest, ZERO, TheBiggest->current_size);
    TimeClass.For_Q_Sort.TheTime[3] = TheResultOfTimePoint(TheTimeAtTheMoment);
    // -----------------------------------------------------------------------------//      Bubble Sort
    
    TheTimeAtTheMoment = clock();
    bubbleSort(Small);
    TimeClass.For_B_Sort.TheTime[0] = TheResultOfTimePoint(TheTimeAtTheMoment);
    
    
    TheTimeAtTheMoment = clock();
    bubbleSort(Medium);
    TimeClass.For_B_Sort.TheTime[1] = TheResultOfTimePoint(TheTimeAtTheMoment);
    
    
    TheTimeAtTheMoment = clock();
    bubbleSort(theBig);
    TimeClass.For_B_Sort.TheTime[2] = TheResultOfTimePoint(TheTimeAtTheMoment);
    
    TheTimeAtTheMoment = clock();
    bubbleSort(TheBiggest);
    TimeClass.For_B_Sort.TheTime[3] = TheResultOfTimePoint(TheTimeAtTheMoment);
    
    // -----------------------------------------------------------------------------//      Selection Sort
    
    
   TheTimeAtTheMoment = clock();
    selectionSort(Small);
    TimeClass.For_S_Sort.TheTime[0] = TheResultOfTimePoint(TheTimeAtTheMoment);
    
    TheTimeAtTheMoment = clock();
    selectionSort(Medium);
    TimeClass.For_S_Sort.TheTime[1] = TheResultOfTimePoint(TheTimeAtTheMoment);
    
    TheTimeAtTheMoment = clock();
    selectionSort(theBig);
    TimeClass.For_S_Sort.TheTime[2] = TheResultOfTimePoint(TheTimeAtTheMoment);
    
    TheTimeAtTheMoment = clock();
    selectionSort(TheBiggest);
    TimeClass.For_S_Sort.TheTime[3] = TheResultOfTimePoint(TheTimeAtTheMoment);
    
    // -----------------------------------------------------------------------------//  Insertion Sort
    
    
    TheTimeAtTheMoment = clock();
    insertionSort(Small);
    TimeClass.For_I_Sort.TheTime[0] = TheResultOfTimePoint(TheTimeAtTheMoment);
    
    TheTimeAtTheMoment = clock();
    insertionSort(Medium);
    TimeClass.For_I_Sort.TheTime[1] = TheResultOfTimePoint(TheTimeAtTheMoment);
    
    TheTimeAtTheMoment = clock();
    insertionSort(theBig);
    TimeClass.For_I_Sort.TheTime[2] = TheResultOfTimePoint(TheTimeAtTheMoment);
    
    TheTimeAtTheMoment = clock();
    insertionSort(TheBiggest);
    TimeClass.For_I_Sort.TheTime[3] = TheResultOfTimePoint(TheTimeAtTheMoment);
    
    // -----------------------------------------------------------------------------//  The End
    
}

void PrintfTheResultTable(void)
{
    TheArrayList VariableTime;

    printf("@==========");
    printf("10");
    printf("===========");
    printf("1000");
    printf("===========");
    printf("10000");
    printf("===========");
    printf("20000");
    printf("===========|\n");
    
    printf("||Q-Sort");
    printf("==");
    printf("\"%.0f ms\"",VariableTime.For_Q_Sort.TheTime[0]);
    printf("========");
    printf("\"%.0f ms\"",VariableTime.For_Q_Sort.TheTime[1]);
    printf("========");
    printf("\"%.0f ms\"",VariableTime.For_Q_Sort.TheTime[2]);
    printf("========");
    printf("\"%.0f ms\"",VariableTime.For_Q_Sort.TheTime[3]);
    printf("========\n");
    printf("@====================================================================|\n\n");
    
    printf("||B-Sort");
    printf("==");
    printf("\"%.0f ms\"",VariableTime.For_B_Sort.TheTime[0]);
    printf("========");
    printf("\"%.0f ms\"",VariableTime.For_B_Sort.TheTime[1]);
    printf("========");
    printf("\"%.0f ms\"",VariableTime.For_B_Sort.TheTime[2]);
    printf("========");
    printf("\"%.0f ms\"",VariableTime.For_B_Sort.TheTime[3]);
    printf("========\n");
    printf("@====================================================================|\n\n");
    
    printf("||S-Sort");
    printf("==");
    printf("\"%.0f ms\"",VariableTime.For_S_Sort.TheTime[0]);
    printf("========");
    printf("\"%.0f ms\"",VariableTime.For_S_Sort.TheTime[1]);
    printf("========");
    printf("\"%.0f ms\"",VariableTime.For_S_Sort.TheTime[2]);
    printf("========");
    printf("\"%.0f ms\"",VariableTime.For_S_Sort.TheTime[3]);
    printf("========\n");
    printf("@====================================================================|\n\n");
    
    printf("||I-Sort");
    printf("==");
    printf("\"%.0f ms\"",VariableTime.For_I_Sort.TheTime[0]);
    printf("========");
    printf("\"%.0f ms\"",VariableTime.For_I_Sort.TheTime[1]);
    printf("========");
    printf("\"%.0f ms\"",VariableTime.For_I_Sort.TheTime[2]);
    printf("========");
    printf("\"%.0f ms\"",VariableTime.For_I_Sort.TheTime[3]);
    printf("========\n");
    printf("@====================================================================|\n\n");

}
