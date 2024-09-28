/*
Write a C++ program to implement a class called Shape with virtual member functions
for calculating area and perimeter. 
Derive classes such as Circle, Rectangle, and Triangle 
from the Shape class and override virtual functions accordingly.


create class Shape
    public:
        double areaCircle(){
            return 2*pi*r*r;
        }
        double areaRectangle(){
        return l*w;
        }
        double areaTriangle(){
        return (b*h)/2;
        }
        double parameterRectangle(){
        return 2*(l*w);
        }


create class Circle:
        public declare variables
create class Rectangle
create class Triangle


*/

#include <iostream>
#include<cmath>
using namespace std;


const double PI = 3.14;

class Shapes {

    public: 
    double radius;
    double length, width;
    double base, height;
    
    double areaCircle(){
    return 2*PI*radius*radius;
    }
    
    double areaRectangle(){
    return length*width;
    }
    
    double areaTriangle(){
    return (base*height)/2;
    }
    
    double parameterRectangle(){
    return 2*(length+width);
    }
};

class Circle: public class Shapes {
    double radius;
}

class Rectangle: public class Shapes {
    double length;
    double width;
}

class Triangle: public class Shapes {
    double base;
    double height;
}


int main(){

    Shapes rectangle;

    rectangle.length = 5;
    rectangle.width = 3;

    area = rectangle.areaRectangle();


    cout << "Area is " << area;
    return 0;
}