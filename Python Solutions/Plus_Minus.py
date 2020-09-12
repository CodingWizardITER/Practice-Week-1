#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the plusMinus function below.
def plusMinus(arr):
    pos=0     # counter to find number of positive nos.
    neg=0     # counter to find number of negative nos.
    neu=0     # counter to find number of zeros.
    for i in range(len(arr)):
        if(arr[i]>0):
            pos+=1
        elif(arr[i]==0):
            neu+=1
        else:
            neg+=1
    print(pos/len(arr))
    print(neg/len(arr))
    print(neu/len(arr))

if __name__ == '__main__':
    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
