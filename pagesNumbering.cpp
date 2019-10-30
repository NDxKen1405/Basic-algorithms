Given a number of the pages in some book find the number of digits needs to print to enumerate the pages of the book.

Example

For n = 11, the output should be pagesNumbering(n) = 13.
Input/Output

[execution time limit] 0.5 seconds 
[input] integer n
A positive integer.
Guaranteed constraints:
1 ≤ n ≤ 10^8.
[output] integer




int pagesNumbering(int n)
{
    int degits = 0;
    for(int i = 1; i <= n; i *= 10)
    {
        degits += n - i + 1;
    }
    return degits;
}
