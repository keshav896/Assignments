 #include <iostream>
 using namespace std;

 int main(){
    int length, breadth;
cout<<"Enter length: ";cin>>length;
cout<<"Enter breadth: ";cin>>breadth;
if((length*breadth)>(2*(length+breadth))){
    cout<<"Area is greater than perimeter";
}else cout<<"perimeter is greater than area";
    return 0;
 }