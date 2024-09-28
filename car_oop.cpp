/*

 Write a C++ program to create a class called Triangle that has private member variables 
 for the lengths of its three sides. 
 Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.

 create class Triangle
    private lenght of three sides, a, b , c

    public 
    Rectangle(int s1, int s2, int s3): side1(s1), side2(s2), side3(s3){}

    if all are equals, equilateral
    else scalene


*/

#include<iostream>
#include<cmath>

using namespace std;

class Triangle {

    private:
    int side1;
    int side2;
    int side3;

    public:
    Triangle(int s1, int s2, int s3): side1(s1), side2(s2), side3(s3){}

    string determineTriangle(){
        string dtr;
        if( side1 == side2 && side2 == side3 && side3 == side1){
            dtr = "Equilateral";
        }
        else if(side1 == side2 || side2 == side3 || side3 == side1){
            dtr = "Isosceles";
        } 
        else
        dtr = "Scalene";

    return dtr;
    }
};

int main(){

    int s1, s2, s3;

    cout << "Input side A: ";
    cin >> s1;
    cout << "Input side B: ";
    cin >> s2;
    cout << "Input side C: ";
    cin >> s3;
     cout << endl;
    
    Triangle triangle(s1, s2, s3);

    string typedtr = triangle.determineTriangle();

    cout << "Your triangle is a " << typedtr;
    
    return 0;
}