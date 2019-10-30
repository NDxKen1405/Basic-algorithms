GCPD (Greatest Common Prime Divisor) is defined as the largest prime number that divides both given positive integers. Your task is to find GCPD of the given integers a and b.

Example

For a = 12 and b = 18, the output should be greatestCommonPrimeDivisor(a, b) = 3;
For a = 12 and b = 13, the output should be greatestCommonPrimeDivisor(a, b) = -1.
Input/Output

[execution time limit] 0.5 seconds

[input] integer a

Guaranteed constraints:
2 ≤ a ≤ 150.

[input] integer b

Guaranteed constraints:
2 ≤ b ≤ 150.

[output] integer

GCPD of a and b or -1 if it doesn't exist.





int greatestCommonPrimeDivisor(int a, int b)
{
    int temp = 0;
    int max = 0;
    int x = 0;
    for(int i = 2; i <= b; i++)
    {
        x = i;
        for(int j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                temp++;
            }
        }
        if(temp == 2)
        {
            if(a % x == 0 && b % x == 0 && x > max)
            {
                max = x;
            }
        }
        temp = 0;
    }


    if(max == 0)
    {
        return -1;
    }
    return max;
}
