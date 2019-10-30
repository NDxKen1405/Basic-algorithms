Given an integer product, find the smallest positive interger (i.e. greater than 0) that the product of whose digits is equal to product. If there is no such integer, return -1 instead.

Example

For product = 12, the output should be digitsProduct(product) = 26;
For product = 19, the output should be digitsProduct(product) = -1. 
Input/Output

[execution time limit] 0.5 seconds
[input] integer product 
Guaranteed constraints:
0 ≤ product ≤ 600.
[output] integer






int digitsProduct(int product)
{
    int i = 9;
    int j = -1;
    int sum = 0;
    int arr[10];
    if(product == 0)
    {
        return 10;
    }
    else if(product < 9)
    {
        return product;
    }
    while(i > 1)
    {
        if(product % i == 0)
        {
            j++;
            arr[j] = i;
            product /= i;
        }
        else i--;
    }
    if(j == -1)
    {
        return -1;
    }
    else
    {
        for(int k = j; k >= 0; k--)
        {
            sum = sum*10 + arr[k];
        }
    }
    return sum;
}
