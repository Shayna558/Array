/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: sjmcf
 *
 * Created on April 6, 2025, 10:26 AM
 */

#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */

// Generic function to find the maximum element in an array
template <typename T>
T findMax(T arr[], int size) {
    T maxElement = arr[0]; // Assume the first element is the maximum
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}


int main(int argc, char** argv) {
     // Testing with an array of integers
    int intArray[] = {5, 3, 8, 1, 4};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);
    cout << "Maximum in integer array: " << findMax(intArray, intSize) << endl;

    // Testing with an array of doubles
    double doubleArray[] = {2.5, 7.1, 3.3, 8.8, 6.6};
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);
    cout << "Maximum in double array: " << findMax(doubleArray, doubleSize) << endl;

    // Testing with an array of strings
    string stringArray[] = {"apple", "orange", "banana", "pear"};
    int stringSize = sizeof(stringArray) / sizeof(stringArray[0]);
    cout << "Maximum in string array: " << findMax(stringArray, stringSize) << endl;
    return 0;
}

