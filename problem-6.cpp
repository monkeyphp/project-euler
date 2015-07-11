/*
 Sum square difference

 The sum of the squares of the first ten natural numbers is,
 12 + 22 + ... + 102 = 385

 The square of the sum of the first ten natural numbers is,
 (1 + 2 + ... + 10)2 = 552 = 3025

 Hence the difference between the sum of the squares of the first ten natural numbers 
 and the square of the sum is 3025 − 385 = 2640.

 Find the difference between the sum of the squares of the first one hundred natural 
 numbers and the square of the sum.
*/
#include <iostream>
#include <cmath>

long calculateSquareOfSum(int);

long calculateSumOfSquares(int);


int main()
{
    int number = 100;
    long total = 0;

    long square = calculateSquareOfSum(number);
    long sum = calculateSumOfSquares(number);

    total = square - sum;

    // std::cout << square << std::endl;
    // std::cout << sum << std::endl;

    std::cout << total << std::endl;

    return 0;
}


long calculateSquareOfSum(int number)
{
    signed long total = 0;

    for (double i = 1; i <= number; i++)
    {
        total += i;
    }

    return total * total; 
}

long calculateSumOfSquares(int number)
{
    signed long total = 0;

    for (long i = 1; i <= number; i++)
    {
        total += (i * i);
    }

    return total; 
}
