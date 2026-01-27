#include <iostream>
using namespace std;


int main(){
    bool a{true};
    bool b{false};
    bool c{true};

    cout<<boolalpha;
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;
    cout<<"c : "<<c<<endl;

    cout<<endl;

    cout<<"BASIC AND OPERATIONS"<<endl;

    cout<<" a&&b : "<<(a&&b)<<endl;
    cout<<" a&&c : "<<(a&&c)<<endl;
    cout<<" a&&b&&c : "<<(a&&b&&c)<<endl;

    cout<<endl;
    cout<<"BASIC OR OPERATIONS"<<endl;
    cout<<"a || b : "<<(a||b)<<endl;
    cout<<"a || c : "<<(a||c)<<endl;
    cout<<"a || b ||c : "<<(a||b||c)<<endl;

    cout<<endl;
    cout<<"BASIC NOT OPERATIONS"<<endl;

    cout<<"!a : "<<(!a)<<endl;
    cout<<"!b : "<<(!b)<<endl;
    cout<<"!c : "<<(!c)<<endl;
    
    


    return 0;
}