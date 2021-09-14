#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "core.h"
struct problems
{
    static int max_element_array(int arr[], int size)
    {
        int element;
        int max_element = arr[0];
        for (int i = 1; i < size; i++)
        {
            element = arr[i];
            if (element > max_element)
            {
                max_element = element;
            }
        }
        return max_element;
    }

    static void reverse_an_array(int arr[], int size)
    {
        int start = 0;
        int end = size - 1;
        while (start < end)
        {
            int temp = arr[start];
            core::swap(&arr[start], &arr[end]);
            start++;
            end--;
        }
    }

    static void reverse_array_by_index(int arr[], int size, int start, int end)
    {
        while (start < end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

    static void show_arr(int arr[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    static int *range(int start, int end)
    {
        int *arr;
        int index = 0;
        const int diff = end - start;
        arr = (int *)malloc(diff * sizeof(int));
        for (int i = start; i < end; ++i)
        {
            arr[index] = i;
            index++;
        }
        return arr;
    }

    static int *sort_accending(int arr[], int size)
    {
        int* return_array;
        return_array = (int*)malloc(size * sizeof(int));
        memcpy(return_array, arr, size * sizeof(int));
        int i, j;
        for (i = 0; i < size - 1; i++)

            // Last i elements are already in place
            for (j = 0; j < size - i - 1; j++)
                if (return_array[j] > return_array[j + 1])
                    core::swap(&return_array[j], &return_array[j + 1]);
        
        return return_array;
    }

};
