A prime number (or a prime) is a natural number greater than 1 that cannot be formed by multiplying two smaller natural numbers

Implement a function that determines if a given positive integer is a prime or not.

Example

For n = 47, the output should be isPrime(n) = true;
For n = 4, the output should be isPrime(n) = false.
Input/Output

[execution time limit] 0.5 seconds

[input] integer n

A positive integer.

Guaranteed constraints:
0 ≤ n ≤ 1000.

[output] boolean

true if n is a prime number, false otherwise.







bool isPrime(int n)
{
    if(n < 2)
    {
        return false;
    }
    else
    {
        if(n == 2)
        {
            return true;
        }
        else
        {
            for(int i = 2; i < n; i++)
            {
                if(n % i  == 0)
                {
                    return false;
                }
            }
        }
    }
    return true;
}
