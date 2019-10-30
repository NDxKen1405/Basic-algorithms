Consider the following operation - we take a positive integer nand replace it with the sum of its prime factors (if a prime number is presented multiple times in the factorization of n, then it's counted the same number of times in the sum). This operation is applied sequentially first to the given number, then to the first result, then to the second result and so on, until the result remains the same.

Given any number, find the final result of the operation.

Example

For n = 24, the output should be factorSum(n) = 5.
24 -> (2 + 2 + 2 + 3) = 9 -> (3 + 3) = 6 -> (2 + 3) = 5 -> 5.
So the answer for n = 24 is 5.
Input/Output

[execution time limit] 0.5 seconds

[input] integer n

Guaranteed constraints:
2 ≤ n ≤ 200.

[output] integer







bool CheckPrime(int n)
{
    for(int i = 2; i < n; i++)
            {
                if(n % i == 0)
                {
                    return false;
                }
            }
    return true;
}
int factorSum(int n)
{
    if(n == 4)
    {
        return 4;
    }
    int sum = 0;
    for(int i = 2; i <= n; i++)
    {
        while(n % i == 0)
        {
            n /= i;
            sum += i;
        }
    }
    if(CheckPrime(sum) == false)
    {
        factorSum(sum);
    }
    else return sum;
}
