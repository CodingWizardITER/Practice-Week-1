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
/* Logic:- Input n elements in an array and then find the maximum element and see how many times it is repeated*/
char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

int parse_int(char*);
int main()
{
int i;
int n;
int max = 0;
//Array Size
scanf("%d", & n);
int a[n];
int count = 0;
for (i = 1; i <= n; i++)
    {
        //Inserting elements in Array
        scanf("%d", & a[i]);
       //Finding the Maximum element
       if (max < a[i])
        {
          max = a[i];
          }
}
//Counting how many times the maximum element is repeated.
for (i = 1; i <= n; i++)
{
if (a[i] == max)
count++;
}
printf("%d", count);
return 0;

}

