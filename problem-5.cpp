/*
 Smallest Multiple

 2520 is the smallest number that can be divided by each of the numbers 
 from 1 to 10 without any remainder.

 What is the smallest positive number that is evenly divisible by all 
 of the numbers from 1 to 20?
*/

#include <iostream>

int main()
{
    long counter = 0;
    bool is_divisible = false;

    do {
        
        counter++;

        for (long x = 1; x <= 20; x++)
        {
            if (counter % x == 0)
            {
                is_divisible = true;
            } 
            else 
            {
                is_divisible = false;
                break;
            }
        }        

    } while (is_divisible == false);

    std::cout << counter << std::endl;

    return 0;
}