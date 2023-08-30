#include "main.h"

/**
 * find_sqrt - Finds the natural square root
 * @n: The number to find the square root of
 * @guess: Guess for the square root
 * Return: Return 'n' or -1
 */
int find_sqrt(int n, int guess)
{
    if (guess * guess == n)
        return guess;
    if (guess * guess > n)
        return -1;
    return find_sqrt(n, guess + 1);
}

/**
 * _sqrt_recursion - Returns natural square root of N
 * @n: The number to be found
 * Return: return 'n', or -1
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;

    return find_sqrt(n, 1);
}

