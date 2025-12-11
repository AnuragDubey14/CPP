#include <iostream>
using namespace std;


int main(){
    //Declare and initialize the variables
    float number1 {1.12345678901234567890f};
    double number2 {1.12345678901234567890};
    long double number3 {1.12345678901234567890L};

    //Print out the sizes
    cout<<"Size of Float : "<<sizeof(float)<<endl;
    cout<<"Size of Double : "<<sizeof(double)<<endl;
    cout<<"Size of long double : "<<sizeof(long double)<<endl;

    return 0;
}