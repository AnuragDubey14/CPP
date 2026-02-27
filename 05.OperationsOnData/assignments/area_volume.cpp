#include <iostream>
using namespace std;

int main(){
    float width,length,height,base_area,volume;
    cout<<"enter width: ";
    cin>>width;
    cout<<"enter length: ";
    cin>>length;
    cout<<"enter height: ";
    cin>>height;
    base_area=width*length;
    volume=base_area*height;
    cout<<"The base area is : "<<base_area<<endl;
    cout<<"The volume is : "<<volume<<endl;
    return 0;
}
