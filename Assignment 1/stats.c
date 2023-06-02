/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
 /**
  * @file stats.c
  * @brief This program computes statistics for given array data
  *
  * Compute the mean, median, maximum, minimum, and sorting of the array of signed integers
  *
  * @author Nkeh Boh
  * @date 05/19/2023
  *
  */


#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)
 
_Bool arrayIsSorted;
void main() {

int test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
114, 88,   45,  76, 123,  87,  25,  23,
200, 122, 150, 90,   92,  87, 177, 244,
201,   6,  12,  60,   8,   2,   5,  67,
 7,  87, 250, 230,  99,   3, 100,  90 };

/* */

/* Statistics and Printing Functions Go Here */
printf("Statistics of Array Data: \n");
print_statistics(test, SIZE);

}

/* Add other Implementation File Code Here */
void print_statistics(int* array, int length)
{
//printf("Size of array in printStats func is: %d\n", length);

print_array(array, length);
printf("\n");
int medianOfArr = find_median(array, length); //printf("Median of Array: %d\n", medianOfArr); //Checked
int meanOfArr  = find_mean(array, length);  //printf("Mean of Array: %d\n", meanOfArr);
int maxOfArr = find_maximum(array, length);   //printf("Max of Array: %d\n", maxOfArr);
int minOfArr = find_minimum(array, length);  //printf("Min of Array: %d\n", minOfArr);

//printf("Array Stats:\n");
printf("Median: %d \nMean: %d \nMaximum Value: %d \nMinimum Value: %d \n", medianOfArr, meanOfArr, maxOfArr, minOfArr);

}

void print_array(int *array, int length)
{
int colNum = 10;//set display size
printf("\nArray: \n");
for (char index = 0; index < length; index++)
{
/*printf("%d ", *array);
array++;*/
//printf("index = %d : ", index);

printf("%d ", *(array + index));
if ((index+1) % colNum == 0) printf("\n"); //dispaly in size of 10 int values
}

}
int find_median(int* array, int length)
{
if (!arrayIsSorted) sort_array(array, length);

if (length % 2 == 0)
{
int right = *(array + (length / 2));
int left = *(array + ((length / 2) - 1));
return ( left+right) / 2;
}

return  *(array + (length / 2));
}
int find_maximum(int* array, int length)
{
//printf("value at first index of array is %d\n", *array);
if (arrayIsSorted) { return *array; } //array is sorted in descending order
int* max;
max = array;

for (int index = 1; index < length; index++)
{
if (*(array + index) > *max) max = (array + index);
}
return *max;
}
int find_minimum(int* array, int length)
{
if (arrayIsSorted) { return *(array + (length-1)); } //array is sorted in descending order

int* min;
min = array;

for (int index = 1; index < length; index++)
{
if (*(array + index) < *min) min = (array + index);
}

return *min;

}
int find_mean(int* array, int length)
{

int sum = 0;
for (int index = 0; index < length; index++)
{
sum = sum + *(array + index);
}

return sum / length;

}
void sort_array(int* array, int length)
{

return;
}