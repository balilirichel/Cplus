#include<iostream>

using namespace std;


int main(){

 int i, n= 15;
    for(i = 1; i <= n; i++){
        
        if ( i ==3 && i == 5){
            cout << "FizzBuzz" << endl;
        }
        
        else if (n == 3){
            cout << "Fizz" << endl;
        }
        
         else if (n == 5){
            cout << "Buzz" << endl;
        }
        else   
            cout << i << endl;
        
        
    }


 return 0;   
}