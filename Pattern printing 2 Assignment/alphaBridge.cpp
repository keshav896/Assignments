#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter value of n:";
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << (char)(i + 64);
    }
    cout << endl;
    for (int i = 1; i <= n - 1; i++)
    {   int a=1;
        for (int j = 1; j <=  n-i; j++)
        {
            cout << (char)(j+ 64);
            a++;
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << " ";
            a++;
        }

        for (int j = 1; j <= n-i; j++)
        {   
            cout <<(char)(a+64);
            a++;
        }
        cout << endl;
    }
    return 0;
}