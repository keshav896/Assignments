#include <iostream>
using namespace std;
int main()
{
    int x_coordinate, y_coordinate;
    cout << "Enter x-coordinate: ";
    cin >> x_coordinate;
    cout << "Enter y-coordinate: ";
    cin >> y_coordinate;
    if (x_coordinate == 0 && y_coordinate != 0)
    {
        cout << "Lies on y-Axis";
    }
    else if (x_coordinate != 0 && y_coordinate == 0)
    {
        cout << "Lies on x-axis";
    }
    else if (x_coordinate == 0 && y_coordinate == 0)
    {
        cout << "Lies at origin";
    }
    else
    {
        cout << "Doesn't lies on axises";
    }
    return 0;
}