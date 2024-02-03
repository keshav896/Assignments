#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter value of m: ";
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m - i; j++)
        {
            cout << " ";
        }
        cout << "*";
        for (int j = 1; j <=2 * (i-1) - 1; j++)
        {
            cout <<" ";
        }
            if (i != 1)
            {
                cout << "*";
            }
        cout << endl;
    }
    for(int i=1;i<=m-1;i++){
    
        for (int j = 1; j <=i; j++)
        {
            cout <<" ";
        }
        cout << "*";
        for (int j=1; j<=2*(m-1-i)-1; j++)
        {
            cout <<" ";
        }
        if(i!=m-1) cout<<"*";
        cout << endl;

    }
    return 0;
}