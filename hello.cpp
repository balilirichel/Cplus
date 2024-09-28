/*
Write a C++ program to implement a class called Circle that has private member variables for radius. 
Include member functions to calculate the circle's area and circumference.

create Class Circle
create private member for radius
create function to calculate area and circumference

main()
  create a circle object
  ask for input 
*/
#include <iostream>
#include<cmath>
using namespace std;

const double PI = 3.14;

class Circle{

  private:
  double radius;

  public:

  Circle(double rad): radius(rad){};

  double calculateAre(){
    return PI * radius*radius;
  }
  double calculateCircumference(){
    return 2 * PI * radius;
  }
};

int main(){

  double radius;
  cout << "Give a radius: ";
  cin >> radius ;
  Circle cirl(radius);


  double area = cirl.calculateAre();
  double circumference = cirl.calculateCircumference();

  cout << endl;
  cout << "The area of the circle is: ";
  cout << area << endl;

  cout << "The circumference of the circle is: ";
  cout << circumference << endl;
}

