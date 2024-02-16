#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s1, s2;
    cout << "Enter your strings: ";
    cin >> s1 >> s2;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if (s1 != s2)
    {
        cout << "Not anagram";
        return 0;
    }
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != s2[i])
        {
            cout << "Not anagram";
           return 0;
        }
    }
     cout<<"Anagram";
    return 0;
}