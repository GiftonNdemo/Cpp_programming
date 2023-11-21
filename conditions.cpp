#include<iostream>
int main(){
    //program to find the max number of two inputs
    int a, b;
    std::cout<< "Enter the first number: ";
    std::cin >>a;
    std::cout<< "Enter the second number: ";
    std::cin >>b;
    if(a>b){
        std::cout<<"The first number is greater than the second number!"<<std::endl; 
    }
    else if(a==b){
        std::cout<<"The first and second number are equal!"<<std::endl;
    }
    else{
        std::cout<<"The second number is greater than the first number!"<<std::endl;
    }
return 0;
}
