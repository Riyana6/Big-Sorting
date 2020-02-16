#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

    unsigned long int i,j,a,n,number[100000000000000000];
    scanf("%lu",&n);

    
        for (i = 0; i < n; ++i)
            scanf("%lu",&number[i]);
 
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (number[i] > number[j]) 
                {
 
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
 
                }
 
            }
 
        }
 
        for (i = 0; i < n; ++i){
            printf("%lu\n", number[i]);
        }

 

    return 0;
}