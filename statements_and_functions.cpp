#include<iostream>
#include<string> // use of the string library 
using namespace std;
int add_numbers(int first, int second){
    int addition = first + second;
    return addition;
    return 0;
}
int main(){
    int first_number;
    int second_number;
    string fullname; // declaring a string variable in C++
    std::cout<<"Enter your full name: ";
    getline(cin,fullname); //getline function in string library - used to capture input of the user including whitespaces which the cin function doesn't capture.
    std::cout<<"Enter the first number: ";
    std::cin>>first_number;
    std::cout<<"Enter the second number: ";
    std::cin>>second_number;
    int sum = add_numbers(first_number, second_number);
    std::cout<<fullname<<", The sum of the two numbers is: "<<sum <<std::endl;
    return 0;
}
