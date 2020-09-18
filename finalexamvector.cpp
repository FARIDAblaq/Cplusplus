#include <iostream>
#include <cstdint>
#include <cstring>
using namespace std;

/**
 * If you make any assumptions, please include them below:
 *
 *
 *
 */

/**
 * HINT: All of the todos below can be implemented in
 * about less than 6 lines of code (per todo).
 * /


/**
 * TODO: In Clab3, you used a collection of variables (array,
 * current_size, and max_size) to represent a vector. Here,
 * declare a struct named vector that contains all three
 * variables
 */

struct vector{
    int current_size; //declaring currentsize
    int max_size; //declaring max_size
    int* array; //declaring array
};

/**
 * TODO: Define a function that initializes the given vector
 * instance with the given size. -: Make sure you dynamically
 * initialize the array within the vector and adjust
 * current_size and max_size correctly :-
 */


void initialize(vector &vec, int size){

    vec.array = new int [size]; //initialize the vector dynamically
    vec.current_size = 0;  //initilatize current size
    vec.max_size = size; //initilatize max size

}

/**
 *  TODO: Define the print function that prints the elements
 *  stored by the vector seperated by spaces. Print an endl
 *  at the end.
**/


//print the elements in the array
void print(vector vec){
    for(int i = 0; i < vec.current_size;i++){ //iterate through the array
        cout<<*vec.array<<" "; //print every element inside
        vec.array++;
    }cout<<endl;

}

/**
 *  TODO: Define the insert function to insert a new element into the
 *  vector and update the current_size.
 *  NO NEED TO RESIZE HERE
 */


//insert elements into the vector
void insert( vector &vec, int element){

    vec.array[vec.current_size] = element;
vec.current_size++;  //increase the current size
    }



int main(){

    /**
     * TODO: Declare two vectors v1 and v2.
     * v1 is declared dynamically
     * v2 is declared staticaly
     */
    vector *v1  = new vector;  //v1 is declared dynamically
    vector v2; //declared vector v2 statically
    //vector v1;


    /**
     * TODO: initialize both vectors using your initialize
     * function to have a size 100
     */

     //initializing both vectors
     int size = 100;
     initialize(*v1,size);
     initialize(v2,size);


    /**
     * TODO: Insert a 100 random numbers between 0 and 100
     * into v1 and v2
     */

     //inserting 100 random numbers in v1
     for(int i = 0; i < 100; i++){
         int randnum = rand()% 100;
         insert(*v1, randnum);
     }

     //inserting 100 random numbers in v2;
     for(int i = 0; i < 100; i++){
         int randnum2 = rand()% 100;
         insert(v2, randnum2);
     }


     /**
     * TODO: Use your print function to print v1 and v2
     */

     //print the elements in v1 and v2
     cout<<"Elements in v1: "<<endl;
     print(*v1);
     cout<<endl;
     cout<<"Elements in v2: "<<endl;
     print(v2);

}


