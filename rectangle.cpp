/*
Write a C++ program to implement a class called Circle that has private member variables for radius. 
Include member functions to calculate the circle's area and circumference.

create Class rectangle
create private member for radius
create function to calculate area and parameter

main()
  create a rectangle object
  ask for input 
*/

#include<iostream>
#include<cmath>

using namespace std;


class Rectangle {

  private: 
  double length;
  double width;


  public:
  Rectangle(double len, double wid): length(len), width(wid){}
    double calculateArea(){
      return 1 * length * width;
    }

    double calculateParameter(){
      return (2*length) + (2*width);
    }
};

int main(){
  
  
  double length, width;
  cout << "Ask for length: ";
  cin >> length;
    cout << "Ask for width: ";
  cin >> width;
  Rectangle rectangle(length, width);
  

  double area = rectangle.calculateArea();
  double parameter = rectangle.calculateParameter();

  cout << "Area is " << area << endl;
  cout << "Parameter is " << parameter << endl;

  return 0;
}