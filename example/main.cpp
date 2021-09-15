#include "../src/array_problems.h"
#include<iostream>

int main()
{

    int arr[] = {2, 3, 5, 3};
    // int max_element = problems::max_element_array(arr, 2);
    std::cout << "Our actuall array is: ";
    problems::show_arr(arr, 4);
    std::cout << "-------------------------------------------------------\n";
    problems::reverse_an_array(arr, 4);
    std::cout << "When the array is reversed: ";
    problems::show_arr(arr, 4);
    std::cout << "-------------------------------------------------------\n";
    problems::reverse_an_array(arr, 4); // just reversing the array again to make it original
    std::cout << "The array when reversing the 0 index to 2 index: ";
    problems::reverse_array_by_index(arr, 4, 0, 2);
    problems::show_arr(arr, 4);
    problems::reverse_array_by_index(arr, 4, 0, 2); // reversing the array in that range again to make it original
    std::cout << "-------------------------------------------------------\n";
    std::cout << "The largest element in the array is: ";
    int max_element = problems::max_element_array(arr, 4);
    std::cout << max_element << std::endl;
    std::cout << "-------------------------------------------------------\n";
    int *range_array = problems::range(0, 4);
    std::cout << "The array with range of 0 to 4 is: ";
    problems::show_arr(range_array, 4);
    std::cout << "-------------------------------------------------------\n";
    int *accending_order = problems::sort_accending(arr, 4);
    std::cout << "The array in accending order is: ";
    problems::show_arr(accending_order, 4);
    std::cout << "-------------------------------------------------------\n";
    int *descending_order = problems::sort_decending(arr, 4);
    std::cout << "The array in descensing order is: ";
    problems::show_arr(descending_order, 4);
    std::cout << "-------------------------------------------------------\n";
    int index_of_3 = problems::find_index(arr, 4, 3);
    std::cout << "The index of 3 in the array is: " << index_of_3 << std::endl;
    std::cout << "If the element is not in the list it will return -1\n";
    
}

