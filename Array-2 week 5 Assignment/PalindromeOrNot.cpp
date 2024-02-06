#include <iostream>
using namespace std;
int main()
{
    int array[] = {34, 56, 34, 76, 87, 76, 33, 56, 34};
    for(int i=0;i<=8;i++){
        cout<<array[i]<<" ";
    }
    bool flag = false;
    for (int i = 0; i <= 4; i++)
    {
        if (array[i] != array[8 - i])
            flag = true;
    }
    if (flag)
        cout << "Not a Palindrome";
    else cout << " palindrome";
   cout<<endl;

    int array1[] = {34, 56, 34, 76, 87, 76, 34, 56, 34};
    for(int i=0;i<=8;i++){
        cout<<array1[i]<<" ";
    }
    bool flag1 = false;
    for (int i = 0; i <= 4; i++)
    {
        if (array1[i] != array1[8 - i])
            flag1 = true;
    }
    if (flag1)
        cout << "Not a Palindrome";
    else
        cout << " palindrome";

    return 0;
}