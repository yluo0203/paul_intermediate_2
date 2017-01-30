/*
 Challenge - Factorial Challenge
 
 Factorial Challenge
 
 Here's a challenge that's a bit more mathematical in nature. Write a program that determines the number of trailing zeros at the end of X! (X factorial), where X is an arbitrary number. For instance, 5! is 120, so it has one trailing zero. (How can you handle extremely values, such as 100!?) The input format should be that the program asks the user to enter a number, minus the !.
*/

#include <iostream>

using namespace std;

int answer( int n );

int main() {
    int number(100);
    int ZeroCount(0);
    int temp = 1;
    
//    cout << "Keying the number: "<< endl;
//    cin >> number;
    
    for (int i = 1; i <= number; i++) {
        temp *= i;
        temp = temp%1000;
        while ( temp % 10 == 0) {
//            cout << "temp: " << temp << " and i: " << i <<endl;
            temp = temp / 10;
            ++ZeroCount;
//            cout << "temp: " << temp << " and Zerocount: " << ZeroCount << endl;
        }
    }
    cout << "Trailing zeros of " << number << " is: " << ZeroCount <<endl;
    cout << "The Answer is: " << answer(number) << endl;
}


//I'm the answer.
int answer( int n )
{
    int factorialnumber = n;
//    cout<<"Please enter a number: ";
//    cin>>factorialnumber;
    int zero_count = 0;
    for(int five_factor=5; five_factor<=factorialnumber; five_factor*=5)
    {
        zero_count += factorialnumber/five_factor;
    }
//    cout<<"Trailing zeros of "<<factorialnumber<<"! is "<<zero_count<<endl;
    return zero_count;
}
