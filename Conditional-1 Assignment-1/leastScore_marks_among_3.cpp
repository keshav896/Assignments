#include <iostream>
using namespace std;
int main()
{
    int A_marks, B_marks, C_marks;
    cout << "Enter A marks: ";
    cin >> A_marks;
    cout << "Enter B marks: ";
    cin >> B_marks;
    cout << "Enter C marks: ";
    cin >> C_marks;
    if (A_marks > B_marks)
    {
        if (B_marks > C_marks)
        {
            cout << "C score least marks";
        }
        else
        {
            cout << "B score least marks";
        }
    }
    else
    {
        if (A_marks > C_marks)
        {
            cout << "C score least marks";
        }
        else
        {
            cout << "A score least marks";
        }
    }
    return 0;
}