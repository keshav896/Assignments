#include <iostream>
using namespace std;
int main()
{
    // if sum of cubes of each digit of the number is equal to the number itself, then ---> Armstrong number

    
    for (int i = 1; i <= 500; i++)
    {    int sum = 0;
        int n = i;
        
        while (n > 0)
        {
            int last_digit = n % 10;
            sum += last_digit * last_digit * last_digit;
            n /= 10;
        }
        if(sum==i)cout<<i<<" ";
    }

    return 0;
}