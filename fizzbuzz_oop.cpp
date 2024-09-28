//#include <bits/stdc++.h>
#include<iostream>

using namespace std;


/*15
 * Complete the 'fizzBuzz' function below.
 *
 * The function accepts INTEGER i as parameter.
 
 
 create a loop for counter up to N size
 if number is equal is to 3 and 5
    FizzBus
 else if (number is = to 3)
    fizz
 else if number is = to 5
    buzz
 else 
    print i
 */

void fizzBuzz(int n) {
    
    int i;
    for(i = 1; i <= n; i++){
        
        if (i == 3 && i == 5){
            cout << "FizzBuzz" << endl;
        }
        
        else if (i == 3){
            cout << "Fizz" << endl;
        }
        
         else if (i == 5){
            cout << "Buzz" << endl;
        }
        else   
            cout << i << endl;
        
        
    }

}

int main(){
    
    int number;
    cout << "Provide a number: " << endl;
    cin >> number;
    
    fizzBuzz(number);
    
    return 0;
}