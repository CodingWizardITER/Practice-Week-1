#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
/*Logic:- To find the number of apples and oranges that lies between the range of s and t*/

int main(){
    int s;
    int t,count1=0,count2=0;
    scanf("%d %d",&s,&t);
    int a;
    int b;
    scanf("%d %d",&a,&b);
    int m;
    int n;
    scanf("%d %d",&m,&n);
    int temp;
    //Logic to find the number of apples that falls between s and t
    for(int apple_i = 0; apple_i < m; apple_i++)
        {
       scanf("%d",&temp);
        if(temp+a>=s && temp+a<=t)
            {
            count1++;
        }
    }
    //Logic to find the number of oranges that falls between s and t
    for(int orange_i = 0; orange_i < n; orange_i++){
        scanf("%d",&temp);
        if(temp+b>=s && temp+b<=t)
            {
            count2++;
        }
    }
    printf("%d\n",count1);
    printf("%d",count2);
    return 0;
}
