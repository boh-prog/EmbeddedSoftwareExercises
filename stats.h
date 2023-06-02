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
 * @file stats.h
 * @brief "This file contains decleration of functions use in the stats.c file"
 *
 * <No Extended Description Here>
 *
 * @author Nkeh Boh
 * @date 05/19/2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Functions descriptions and declarations */

/**
 * @brief Print statics of array; minimum, maximum, mean, and median
 *
 * This functions uses the output of median, mean, maximum, minimum,
 * to compute and print out the corresponding stats of the array data.
 *
 * @param takes no parameter
 *
 * @return void
 *
 */
void print_statistics(int* array, int length);


/*
 * @brief Prints out array on screen
 *
 * This functions takes an array of signed integers and length of the array
 * then prints out the array on the screen in a presentatble format
 *
 *
 * @param array The array of signed integers
 * @param length The size of input array
 *
*/
void print_array(int *array, int length);


/*
 * @brief Calculates the median of an array
 *
 * This functions takes an unordered array of signed integers and the length of the array.
 * It'll sort the array. Then return the single middle element or average of the two middle element.
 * Depending on if the array is odd or even.
 *
 * @param array The array of signed integers
 * @param length The size of input array
 *
 * @return Signed integer as the median value
 *
*/
int find_median(int *array, int length);


/*  
 * @brief Calculates the mean of an array
 *
 * This functions takes an unordered/ordered array of signed integers and the length of the array.
 * It'll sum all values in array and divide by the length of array to find the average.
 *
 * @param array The array of signed integers
 * @param length The size of input array
 *
 * @return Signed integer as the average
 *
 */
int find_mean(int *array, int length);


/*
 *
 * @brief finds the maximum value of an array
 *
 * This functions takes an unordered/ordered array of signed integers and the length of the array.
 * It'll parse through the array to find the highest signed integer value by comparing  
 * each consecutive value with the current maximum value.
 *
 * @param array The array of signed integers
 * @param length The size of input array
 *
 * @return Signed integer as maximum value
 *
 */
int find_maximum(int *array, int length);
 

/*
 * @brief finds the minimum value of an array
 *
 * This functions takes an unordered/ordered array of signed integers and the length of the array
 * It'll parse through the array to find the lowest signed integer value by comparing  
 * each consecutive value with the current maximum value.  
 *
 * @param array The array of signed integers
 * @param length The size of input array
 *
 * @return Signed integer as manimum value
 *
 */
int find_minimum(int *array, int length);


/*
 * @brief Sorot the values in array
 *
 * This functions takes an unordered array of signed integers and the length of the array
 * It'll parse through the array and sort it from largest to smallest.  
 *
 * @param array The array of signed integers
 * @param length The size of input array
 *
 * @return void
 *
 *
 *
 */
void sort_array(int *array, int length);






  #endif /* __STATS_H__ */