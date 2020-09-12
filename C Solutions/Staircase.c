#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

/*Problem:-Have to print the given pattern with n number of rows.
     #
    ##
   ###
  ####
 #####
######
*/



int main()
{
    int n, i, j, s = 0, pattern = 0;
    //No. of rows in pattern.
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        //Printing Space(" ").
        for(j = 0; j < n - (i+1); j++)
        {
            printf(" ");
        }
       //Printing Hash("#").
        for(j = 0; j < i+1; j++)
        {
            printf("#");
        }
       //Going to next line.
        printf("\n");
    }
}
