#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
/*
     * LOGIC :- Input n numbers into an array and find the ratio of positive ,
     * negative and zero numbers
*/


int main(){
    int n;
    float pos=0,neg=0,zer=0;
    scanf("%d",&n);
    int arr[n];//Array
    for(int arr_i = 0; arr_i < n; arr_i++)
        {
       scanf("%d",&arr[arr_i]);//Array Input
        //Check for positive
        if(arr[arr_i]>0)
            {
            pos++;
        }
        //Check for negative
        else if(arr[arr_i]<0)
            {
               neg++;
           }
        //Check for zero
        else
            {
               zer++;
               }
    }
    //Printing the ratio of positive,negative and zero numbers upto 6 decimal places.
    printf("%.6f\n%.6f\n%.6f",(float)pos/n,(float)neg/n,(float)zer/n);
    return 0;
}
