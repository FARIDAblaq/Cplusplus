#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/**
Handout code for question 3 CPP Lab CS313
**/

/*
 * QUESTION 3
 * This program is used for sorting using selective sort
 */

int main(){

    int size = 0;
    int num = 0;

    // Input an array size
    while (size < 2 || size > 100){
        cout << "Enter size of the array [2 - 100]: ";
        cin >> size;
    }

    // Generate a random array of the given size
    int array[size];
    srand((unsigned)time(0));

    for(int i=0; i<size; i++){
        array[i] = (rand()%100)+1;

        // print the array to the user
        cout<<"Unsorted numbers: ";
        cout<<array[i]<<endl;
    }


    /*
    * Implementing a sorting algorithm to sort the array in ascending order
    * selective sorting to sort numbers in an ascending order
    */

    for (int i = 0 ; i < size ; i++ ){
        for(int j = i+1; j < size; j++){
            if(array[i] > array[j]){
                num = array[i];
                array[i] = array[j];
                 array[j] = num;
            }
        }
    }

    //Print the sorted array to the user
    for(int i = 0; i < size; i++){
        cout<<" These numbers are sorted in ascending order: ";
        cout<<array[i]<<endl;
    }


// Extra-mile: Sort the array in descending order and print to the user
     for (int i = 0 ; i < size ; i++ ){
        for(int j = i+1; j < size; j++){
            if(array[i] < array[j]){
                num = array[j];
                array[j] = array[i];
                 array[i] = num;
            }
        }
    }

    cout<<endl;
    //Print the sorted array to the user
    for(int i = 0; i < size; i++){
        cout<<" These numbers are sorted in descending order: ";
        cout<<array[i]<<endl;
    }





}
