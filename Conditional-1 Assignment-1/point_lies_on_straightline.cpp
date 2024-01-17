#include <iostream>
using namespace std;

int main()
{
    int x1, y1, x2, y2, x3, y3;

    // Input the coordinates of three points
    cout << "Enter coordinates of point 1 (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter coordinates of point 2 (x2 y2): ";
    cin >> x2 >> y2;

    cout << "Enter coordinates of point 3 (x3 y3): ";
    cin >> x3 >> y3;

    // Check if the points lie on a straight line
    if ((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1))
    {
        cout << "The points lie on a straight line." << endl;
    }
    else
    {
        cout << "The points do not lie on a straight line." << endl;
    }

    return 0;
}
