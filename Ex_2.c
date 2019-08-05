//
//  main.c
//  Ex_2 bis
//
//  Created by Pietro Astori on 01/08/19.
//  Copyright © 2019 Pietro Astori. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define DIMENSION 5

//The goal of this program is to find if two arrays contain the same values with their multiplicity

int main(int argc, const char * argv[]) {
    
    int original_array[DIMENSION];
    int second_array[DIMENSION];
    int array_of_flag[DIMENSION] = {0,};
    int the_same=1;
    int counter_1=0;
    int counter_2=0;
    
    printf("Insert %d values into the 1st array:\n", DIMENSION);
    for (int t=0; t<DIMENSION; ++t) {
        scanf("%d", &original_array[t]);
    }
    printf("Insert %d values int the 2nd array\n", DIMENSION);
    for (int t=0; t<DIMENSION; ++t) {
        scanf("%d", &second_array[t]);
    }
    
    for (int t=0; t<DIMENSION; ++t) {
        for (int i=0; i<DIMENSION; ++i) {
            if (original_array[t]==original_array[i]) {
                ++counter_1;
            }
        }
        for (int k=0; k<DIMENSION; ++k) {
            if (original_array[t]==second_array[k]) {
                ++counter_2;
            }
        }
        if (counter_1==counter_2) {
            array_of_flag[t]=1;
        }
    }
    for (int t=0; t<DIMENSION && the_same==1; ++t) {
        if (array_of_flag[t]==0) {
            the_same=0;
        }
    }
    if (the_same) {
        printf("The two arrays contain the same values\n");
    } else printf("The two arrays are different\n");
    printf("\n");
    
    return EXIT_SUCCESS;
}
