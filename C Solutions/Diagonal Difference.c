#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

int parse_int(char*);

int main()
{
    /*Logic:- Take the sum of left diagonal elements then take the sum of right diagonal elements in a matrix(2D Array) and then calculate their absolute difference.*/

    int n, j;
    int i=0,RightDiagonalSum=0,LeftDiagonalSum=0, firstarray, secondarray;
 scanf("%d",&n);
    int a[n][n];
 //Inserting elements in 2D Array.
 for(int firstarray = 0; firstarray < n; firstarray++)
 {
       for(int secondarray = 0; secondarray < n; secondarray++)
    {

          scanf("%d",&a[firstarray][secondarray]);
       }
    }
// Getting the sum of right diagonal elements
  while(i<n)
  {
    RightDiagonalSum=RightDiagonalSum+a[i][i];
    i++;
  }

 j=n-1,i=0;
// Getting the sum of left diagonal elements
  while(i<n)
  {
    LeftDiagonalSum=LeftDiagonalSum+a[i][j];
    i++;
    j--;
  }
//Printing the absolute difference of both sums.
 printf("%d",abs(RightDiagonalSum-LeftDiagonalSum));
    return 0;
}

