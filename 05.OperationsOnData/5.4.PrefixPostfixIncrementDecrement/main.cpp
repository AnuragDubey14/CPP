#include <iostream>
using namespace std;

int main(){
    int value { 5 };
    value=value+1;
    cout<<"The value is : "<<value<<endl;
    value= 5;
    value=value-1;
    cout<<"The value is : "<<value<<endl;

    cout<<"=============Postfix increment and decrement==============="<<endl;
    value=5;
    //increment 

    cout<<"The value is (incrementing) : "<<value++<<endl;
    cout<<"The value is : "<<value<<endl;

    cout<<endl;

    //decrement
    value=5;

    cout<<"The value is (decrementing) : "<<value--<<endl;
    cout<<"The value is : "<<value<<endl;
    

    cout<<"=============Prefix increment and decrement==============="<<endl;
    value=5;
    //increment 

    cout<<"The value is (incremented) : "<<++value<<endl;
    

    cout<<endl;

    //decrement
    value=5;

    cout<<"The value is (decremented) : "<<--value<<endl;
    
    return 0;


}