#include<iostream>
using namespace std;
int main(){
    int array[4][4]={{1,3,4,6},{2,4,5,7},{3,5,6,8},{4,6,7,9}};
    int largest_element=array[0][0];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(array[i][j]>largest_element)largest_element=array[i][j];
        cout<<endl;
    }
    }
    cout<<"largest element: "<<largest_element;
return 0;
}