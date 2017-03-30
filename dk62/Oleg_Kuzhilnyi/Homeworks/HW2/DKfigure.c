//
//  DKfigure.c
//  HW2
//
//  Created by air on 03.03.17.
//  Copyright © 2017 Oleg Kuzhilnyi. All rights reserved.
//

#include "DKfigure.h"

DK_Figures *createFigure(int aSize)
{
    DK_Figures *theFigures = (DK_Figures *) malloc(sizeof(DK_Figures));
    
    if(NULL != theFigures)
    {
        theFigures->ListOfFigures = (descriptionOfFigure *)malloc(aSize * sizeof(descriptionOfFigure));
        
       // bzero(theFigures,aSize*sizeof(Coords_Of_Geometry_Points)); //Zero for elements of struct
        memset(theFigures->ListOfFigures, 0, aSize * sizeof(Coords_Of_Geometry_Points));
        theFigures->size = aSize;
        theFigures->current_size = 0;
        
    }
    
    return theFigures;
}

int addMyFigureToArrayOfFigures(DK_Figures *ArrayFigures)
{
    int theResult = 0;
    int MountOfAngle = 4;
    if (NULL != ArrayFigures)
    {
        if (ArrayFigures->current_size < ArrayFigures->size)
        {
            descriptionOfFigure *ArrayOfFigures = &(ArrayFigures->ListOfFigures[ArrayFigures->current_size]);

            ArrayOfFigures->Points = (Coords_Of_Geometry_Points *)malloc(MountOfAngle*sizeof(Coords_Of_Geometry_Points));

            for(int i=0 ; i < MountOfAngle ; i++)
            {
                scanf("%i",&ArrayOfFigures->Points[i].x);   //= rand()%100;
                scanf("%i",&ArrayOfFigures->Points[i].y);    //    =  rand()%100;
                
           }
           ArrayFigures->current_size ++;
        }
        else
        {
            theResult = -2;
        }
    }
    else
    {
        theResult = -1;
    }
    
    return theResult;
}

void destroyFigure(DK_Figures *Figure)
{
    if (NULL != Figure)
    {
        if(NULL != Figure->ListOfFigures)
        {
            for (int i = 0; i < Figure->current_size; i++)
            {
                descriptionOfFigure *theLinkTolist = &(Figure->ListOfFigures[i]);
                if (NULL != theLinkTolist->Points)
                {
                    free(theLinkTolist->Points);
                }
            }
            free(Figure->ListOfFigures);
        }
      free(Figure);
    }
}

double FindArea(descriptionOfFigure *Figure) //Calculate Area of Quadrilateral
{
    
   // descriptionOfFigure *FigurePoint = (Figure->ListOfFigures);
    
    double ResultArea =
    ((((Figure->Points[0].x)*(Figure->Points[1].y)- (Figure->Points[0].y)*(Figure->Points[1].x)))
    +
    (((Figure->Points[1].x)*(Figure->Points[2].y)-(Figure->Points[1].y)*(Figure->Points[2].x)))
    +
    (((Figure->Points[2].x)*(Figure->Points[3].y)-(Figure->Points[2].y)*(Figure->Points[3].x)))
    +
    (((Figure->Points[3].x)*(Figure->Points[0].y)- (Figure->Points[3].y)*(Figure->Points[0].x))))
                                        /2;
if (ResultArea < 0)
    return ResultArea*(-1); //ABS of Area
  else
    return ResultArea;

}

void printPhoneBook(DK_Figures *FigureList)
{
    for (int i = 0; i < FigureList->current_size; i++)
    {
        descriptionOfFigure *theFigure = &(FigureList->ListOfFigures[i]);

            printf("[%d] - ", i);
            printf("Area Of Figure:%.2f\n",FindArea(theFigure));
    } 
    
}


