/*
 * Calculates the sum of n integers in an integer array
 */

#include <stdio.h>

int array_sum(int *array, int count)
{ 
    int sum = 0;
    for(int i = 0; i < count; i++) {
        sum = sum + array[i];
    }
    return sum;
}

unsigned int array_reader(int *vals, int n)
{
    int j = 0;
    int ret = 0;
    for (unsigned int i = 0; i < (unsigned int)n; i++)
    {
        ret = scanf("%d", &j);
        if (ret <= 0) {
            return i;
        }
        vals[i]=j;
    }
    return n;
}

int main()
{

    int valarray[] = { 10, 100, 1000 };
    int ret = array_sum(valarray, 3);
    printf("%d \n", ret);

    int array[10];
    unsigned int n = array_reader(array, 10);   
    printf("%d numbers read\n", n);
    unsigned int i;
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);     
    }
}
