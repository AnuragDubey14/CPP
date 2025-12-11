#include <iostream>
using namespace std;

int main(){
    int elephant_count; //garbage value

    int lion_count{}; //initalizes to zero

    int dog_count {10}; // initializes to 10
    int cat_count {15}; // initializes to 15 
    
    //can use expression as initializer 
    int domesticated_animals { dog_count + cat_count};

    cout<<"Elephant Count: "<<elephant_count<<endl;
    cout<<"Lion Count: "<<lion_count<<endl;
    cout<<"Dog Count: "<<dog_count<<endl;
    cout<<"Cat Count: "<<cat_count<<endl;
    cout<<"Domesticated  Animals: "<<domesticated_animals<<endl;

    //functional initialization 
    int apple_count(5);
    int orange_count(10);

    int fruit_count(apple_count+orange_count);
    cout<<"Apple Count: "<<apple_count<<endl;
    cout<<"Orange Count: "<<orange_count<<endl;
    cout<<"Fruit Count: "<<fruit_count<<endl;

    //Direct Assignment
    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int narrowing_conversion_assignment = 2.9;

    cout<<"Bike Count : "<<bike_count<<endl;
    cout<<"Truck Count : "<<truck_count<<endl;
    cout<<"Vehicle Count : "<<vehicle_count<<endl;
    cout<<"Narrowing Count : "<<narrowing_conversion_assignment<<endl;
    
    //check the sizeof a variable
    cout<<"Size of Integer : "<<sizeof(int)<<endl;
    cout<<"Size of domesticated animals Count : "<<sizeof(domesticated_animals)<<endl;


    //fractional initialization
    // int narrowing_conversion{2.9};

    return 0;
}
