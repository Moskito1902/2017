//
//  main.c
//  HW2
//
//  Created by air on 03.03.17.
//  Copyright © 2017 Oleg Kuzhilnyi. All rights reserved.
//


#include "DKfigure.h"

int main(int argc, const char *argv[])
{
 
     DK_tochki *ForMemory = (DK_tochki*) malloc(sizeof(DK_tochki)); //Add in memory Struct of points
        
    AddTochki(ForMemory);
    
    printf("The Res:%.2f\n",Calculator(ForMemory));
    

    free(ForMemory);
    
    return 0;
}
