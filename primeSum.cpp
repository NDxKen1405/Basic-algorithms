A prime number is a natural number greater than 1 that cannot be formed by multiplying two smaller natural numbers

For example 2 and 3 are prime numbers

For n as an integer. Give the result of sum of prime numbers which are not greater than n.

Because the result of sum of integers according to the requirement might be very large, so give the result which is a remainder of division the sum of integers devided by 22082018.

Example

If n = 2 then primeSum = 2
If n = 3 then primeSum = 5
Input/output

[execution time limit] 0.5 seconds 
[input] integer n
-10^7 < n < 10^7 
[output] integer





bool CheckPrime(int n)
{
    if(n < 2)
    {
        return false;
    }
    else if(n == 2)
    {
        return true;
    }
    else
    {
        for(int i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}
int primeSum(int n)
{
    long long sum = 0;
    for(int i = 2; i <= n; i++)
    {
        if(CheckPrime(i) == true)
        {
            sum += i;
        }
    }
    return sum;
}
