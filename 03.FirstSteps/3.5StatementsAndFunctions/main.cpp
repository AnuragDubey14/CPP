#include <iostream>


int addNumbers(int first_num, int second_num){
    int result=first_num+second_num;
    return result;
}


int main(){
    int first_number =3; //Statement
    int second_number {7}; 
    std::cout << "First Number: " << first_number << std::endl;
    std::cout << "Second Number: " << second_number << std::endl;

    int sum = first_number+second_number;

    std::cout<<"Sum : "<< sum <<std::endl;

    sum=addNumbers(20,10);
    std::cout<<"Sum : "<< sum <<std::endl;

    sum=addNumbers(30,10);
    std::cout<<"Sum : "<< sum <<std::endl;

    sum=addNumbers(40,10);
    std::cout<<"Sum : "<< sum <<std::endl;
    return 0;
}