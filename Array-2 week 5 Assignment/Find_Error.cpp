#include<iostream>
using namespace std;

/*
double getAverage(int arr[], int size);
int main () {
int balance[5] = {1000, 2, 3, 17, 50};
double avg;
avg = getAverage( balance[0], 5 ) ;
cout << "Average value is: " << avg << endl;
return 0;
}*/

// in this code we provide int type array as argument but while calling function we provide int num as argument so it generate error message
double getAverage(int arr[], int size);
int main () {
int balance[5] = {1000, 2, 3, 17, 50};
double avg;
avg = getAverage( balance, 5 ) ;
cout << "Average value is: " << avg << endl;
return 0;
}