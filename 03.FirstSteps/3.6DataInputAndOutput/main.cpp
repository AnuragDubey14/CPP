#include <iostream>
#include <string>
using namespace std;

int main(){
    // Printing data
    cout<<"Hello C++ 20! "<<endl;

    int age{21};
    cout<<"Age: "<<age<<endl;

    cerr<<"Error message: Something is wrong"<<endl;

    clog<<"Log Message: Something Happened"<<endl;

    //Get data from terminal
    string name;
    cout<<"Enter your name buddy: ";
    cin>>name;
    cout<<"Welcome "<<name<<" in the world of C++"<<endl;
    
    cin.ignore();  // <-- discard leftover newline

    cout<<"Enter your full name buddy: ";
    getline(cin,name);
    cout<<"Welcome "<<name<<" in the world of C++"<<endl;

   return 0;
}