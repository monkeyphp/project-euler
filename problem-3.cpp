/*
 Largest Prime Factor

 The prime factors of 13195 are 5, 7, 13 and 29.

 What is the largest prime factor of the number 600851475143 ?
*/

/* 
 Sieve of Eratosthenes 
 https://primes.utm.edu/prove/prove2_1.html
*/
    
#include <iostream>
#include <vector>

using namespace std;

bool is_odd(long);
long square(long);
bool sieved(long array[], long);

int main()
{
    signed long target = 600851475143;
                         
    signed long counter = 3;
    signed long sieve[10000];
    signed long current = 0;
    signed long squared = 0;

    for (int i = 0; i < 10000; i++)
    {
        sieve[i] = 0;
    }

    do {
        if (is_odd(counter))
        {
            if (! sieved(sieve, counter)) 
            {
                sieve[counter] = counter;

                if (target % counter == 0) 
                {
                    current = counter;
                    cout << current << " is the current" << endl;
                }
            }
        }
        
        counter++;
        
    } while (counter < 10000);

    cout << "Current: " << current << endl;
    cout << "Counter: " << counter << endl;

    return 0;
}

bool sieved(long sieve[], long number)
{
    for (int i = 0; i < 10000; i++)
    {
        if (sieve[i] == 0) 
        {
            continue;
        }

        if (number % sieve[i] == 0)
        {
            // cout << number << " has been seived by " << sieve[i] << endl;
            return true;
        }
    }



    return false;
}

long square(long number)
{
    return number * number;
}

bool is_odd(long number)
{
    if (number == 0) {
        return false;
    }
    if (number % 2 == 0)
    {
        return false;
    }
    return true;
}