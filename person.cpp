/*
Write a C++ program to create a class called Person that has private member variables for name, age and country. 
Implement member functions to set and get the values of these variables.

create class Person
     private
        declare name, age, country

    create public
        setter 
            declare

        getter
            function/logic eg.. return
*/

#include<iostream>
#include<cmath>

using namespace std;

class Person{

    private:
    string name;
    int age;
    string country;

    public:
// setter
    void setName(string Name){
        name = Name;   
    }

    void setAge(int Age){
        age = Age;
    }

    void setCountry(string cnt){
        country = cnt;
    }

// getter
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    string getCountry(){
        return country;
    }
};

int main(){

    Person person1;
    person1.setName("bals");
    person1.setAge(22);
    person1.setCountry("US");

    cout << "Information: ";
    cout << person1.getName() << endl;
    cout << person1.getAge() << endl;
    cout << person1.getCountry() << endl;

}
