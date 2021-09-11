#include <iostream>

namespace problems
{
    int max_element_array(int arr[], int size)
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

    void reverse_an_array(int arr[], int size)
    {   
        int start = 0;
        int end = size - 1;
        while (start < end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
        
    }

    void show_arr(int arr[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            std::cout << arr[i] << " ";
        }
        std::cout << "\n";
        
    }  


}




