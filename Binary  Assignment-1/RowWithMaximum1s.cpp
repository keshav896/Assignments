#include <iostream>
using namespace std;

int main() {
    int array[][4] = {{0, 1, 1, 1}, {0, 0, 1, 1}, {1, 1, 1, 1}, {0, 0, 0, 0}};
    int m = 4; // number of rows
    int n = 4; // number of columns
    int row = -1; // row index with maximum number of 1s
    int maxone = 0; // maximum number of 1s found in any row

    for (int i = 0; i < m; i++) {
        int loidx = 0;
        int hindx = n - 1;
        int firstindx = -1; // Reset first index for each row

        // Binary search to find the first occurrence of 1 in the current row
        while (loidx <= hindx) {
            int mid = loidx + (hindx - loidx) / 2;
            if (array[i][mid] == 1) {
                if (mid == 0 || array[i][mid - 1] == 0) {
                    firstindx = mid;
                    break;
                } else {
                    hindx = mid - 1;
                }
            } else {
                loidx = mid + 1;
            }
        }

        // If we found a 1 in the current row, count the number of 1s
        if (firstindx != -1) {
            int count = n - firstindx;
            if (maxone < count) {
                maxone = count;
                row = i;
            }
        }
    }

    cout << "Row with maximum number of 1s: " << row << " with " << maxone << " ones." << endl;
    return 0;
}
