/*
 Largest Palindrome Product

 A palindromic number reads the same both ways. The largest palindrome made 
 from the product of two 2-digit numbers is 9009 = 91 × 99.

 Find the largest palindrome made from the product of two 3-digit numbers.
*/
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool is_palindrome(int);

int main()
{
    int largest = 0;

    for (int i = 100; i <= 999; i++) {

        for (int j = 100; j <= 999; j++) {

            int current = i * j;
            
            if (is_palindrome(current) && current > largest)
            {
                largest = current;
            }
        }
    }

    cout << largest << endl;
}

bool is_palindrome(int number)
{
    string forward = to_string(number);

    string backward = to_string(number);
    reverse(backward.begin(), backward.end());
    
    return (forward == backward);
}