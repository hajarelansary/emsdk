#include <stdio.h>
#include <math.h> 
#include <stdlib.h>


void data(float * array, int n, int m)
{
    int i =0;
    for (int x = n; x < m; x++)
    {
        array[i] = log(x) + x + sqrt(x+1);
        i++;
    }
}

double calcule(int x){
    return ln(x) + x + sqrt(x+1);
}

