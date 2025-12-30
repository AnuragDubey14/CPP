#include <iostream>
using namespace std;

int main(){
    bool red_light {false};
    bool green_light {true};
    if(red_light==true){
        cout<<"Stop!"<<endl;
    }
    else{
        cout<<"Go through!"<<endl; 
    }
    
    if (!green_light){
        cout<<"Stop!"<<endl;
    }
    else{
        cout<<"Go through!"<<endl; 
    }

    cout<<"Sizeof bool : "<<sizeof(red_light)<<endl;
    return 0;
}