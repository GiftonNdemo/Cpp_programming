#include<iostream>
using namespace std;
int add_numbers(int first, int second){
    int addition = first + second;
    return addition;
    return 0;
}
int main(){
    int first_number;
    int second_number; 
    std::cout<<"Enter the first number: ";
    std::cin>>first_number;
    std::cout<<"Enter the second number: ";
    std::cin>>second_number;
    int sum = add_numbers(first_number, second_number);
    std::cout<<"The sum of the two numbers is: "<<sum <<std::endl;
    return 0;
}
