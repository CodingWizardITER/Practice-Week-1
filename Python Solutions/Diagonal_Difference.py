#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the diagonalDifference function below.
def diagonalDifference(arr):
    sum1 = 0      // for left diagonal 
    sum2 = 0      // for right diagonal
    length = len(arr[0])
    for i in range(length):
        sum1 += arr[i][i]              // in left diagonal, elements are a[i][j], where i = j
        sum2 += arr[i][length-i-1]     // in right diagonal, elements are a[i][j], where j = n - i - 1
    return abs(sum1 - sum2)
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    n = int(input())
    arr = []
    for _ in range(n):
    arr.append(list(map(int, input().rstrip().split())))
    result = diagonalDifference(arr)
    fptr.write(str(result) + '\n')
    fptr.close()
