#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstring>


using namespace std;

 /*@author: Farida Eleshin
  * @ params : name1, name2
  *This is a Person class that stores the information of people in a pair
  *
  */

class Person{
    public:
    string name1; //stores the name of the first person in a pair
    string name2; //stores the name of the second person in a pair

    Person(){}  //constructor

    //second constructor that takes in the name1, name2
    Person(string name, string name2){
        this->name1 = name1;
        this->name2 = name2;

    }

    //setters
    void Setname1(){  //sets name1 of pair
        this->name1 = name1;
    }

    void Setname2(){  //sets names2 of pair
        this->name2 = name2;
    }


    //getters
    string getName1(string name1 ){  //gets name1
        return name1;
    }

    string getName2(string name2){   //gets name2
        return name2;
    }
};

int main(){
    Person p; //object of the person
    string filename; //stores the name of the file
    string infectedpname; //stores the name of the infected person
    vector<Person> peoplepair; //stores the name of the pairs of people in the file
    vector<string> otherpeople; //stores the names of the people that are directly infected by the infected person
    cout<<"Enter the name of the file: "<<endl; //take the name of the file
    cin>>filename; //takes the filename as input


    cout<<"Enter the name of the infected person: "<<endl;
    cin>>infectedpname;

    ifstream file(filename);
    if (!file) {  //if file does not exist, print what is below
        cerr<<"The file cannot be opened"<<endl;
        return 1;
            }

    int N = 0;
    while (file>>p.name1>>p.name2){ //read every string in the line
        N++;
        peoplepair.push_back(p); //push into a vector called peoplevector

    }


    //This finds the names of people the infected person has had direct contact with
        cout<<"Direct :"<<endl;
        for( const auto& v : peoplepair){  //loop through peoplevector
            if(infectedpname == v.name1){
                otherpeople.push_back(v.name2); //pushback into a vector that stores their nmaes
                cout<<v.name2 <<endl;  //print the names of the other paired person

            }
        }cout<<endl;


    //This finds the names of the people that are indirectly connected to the infected person
        cout<<"Indirect: "<<endl;
        for (const auto& d: otherpeople){  //loop through the vector of the people that are directly infected
            for(const auto& c: peoplepair){ //loop through the original vector of paired people
                if(d == c.name1){  //check if the directly infected person is connected to another person
                    cout<<c.name2<<endl;  //print the name of the person
                }
            }
        }


}