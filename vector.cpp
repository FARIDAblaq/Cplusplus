#include <iostream>
#include <cstring> // memcpy
using namespace std;

/**
 * Question 1
    Print the array elements seperated by spaces with an
    endl at the end of the array.
**/

void print(int* array, int& current_size);

void print(int* array, int& current_size){
    for(int i = 0; i < current_size ; i++){
        cout << *(array+i)<<" ";  //prints the array
    }
    cout<<endl;
}


/**
 * QUESTION 2
    Insert a new element into the vector, update the current size.
    Resize the vector (if needed) and update the max_size.
**/

void insert(int* &array, int& current_size, int& max_size, int element);



void insert(int* &array, int& current_size, int& max_size, int element){
    if(current_size == max_size){
        max_size = max_size * 2; //updating the maximum size of array
        int * new_array = new int[max_size]; //Resizing array
        for(int i = 0; i < current_size; i++){
            new_array[i] = array[i];  //copying items into new array
        }
        delete[] array; //deleting the old array
        array = new_array; //readjust the pointer to point to the correct array.
    }
    array[current_size]=element;
    current_size++;
}

/**
 * QUESTION 3
    Remove the last element from the vector and return its value.
    Hint: you don't have to delete the value.
**/

int pop(int* array, int& current_size);
int pop(int* array, int& current_size){
    for(int i = current_size; i > 0 ; i--){
         array[current_size-1] = array[current_size-2];
    }
    current_size--;

}

/**
 * QUESTION 4
    Return the first index where you find the given value in the vector
    Return -1 if not found
**/

int find(int* array, int current_size, int value);
int find(int* array, int current_size, int value){
    for(int i = 0; i < current_size; i++){
        if(array[i] == value){
            return i;
        }
    }
    return -1;

}
/**
 * QUESTION 5
    Delete the first occurence of val from a given index,
    shift all elements to the left, update the current size.
    Do nothing if value not found.
**/

int del(int* array, int& current_size, int val);
int del(int* array, int& current_size, int val){
    for(int i = 0; i < current_size; i++){
        if(array[i]== val){
            for(int j = i; j <= current_size; j++ ){
               array[j] = array[j+1];
            }
        }

    }
    current_size--;
}