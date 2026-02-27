#include <iostream>
using namespace std;

int main(){
    double celsius;
    cout<<"Please enter the value of temperature in celsius--->>"<<endl;
    cin>>celsius;
    double farheniet=(9.0/5)*celsius+32;
    cout<<celsius<<" Celsius is "<<farheniet<<" Farheniet";
    return 0;
}