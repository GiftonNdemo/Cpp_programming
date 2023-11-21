#include<iostream>
#include<string>
int main(){
    //program to find the max number of two inputs
    int a, b, time;
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
//there is a shorthand form for writting if...else statements which is ;
//variable = (condition) ? condition_true : condition_false;
//we can then finally print out the result stored in the variable
//i.e., std::cout<< variable;
//
//example program using shorthand if...else

    std::cout<<"Enter the time in hrs:";
    std::cin>>time;
    std::string time_of_the_day = (time<1200) ? "It's Morning! Good Morning!": (time > 1200 && time <1501) ? "It's afternoon! Good afternoon" : (time >= 1501 && time < 1901) ? "It's evening! Good evening!": (time >= 1901 && time <= 2400) ? "It's night-time! Goodnight!":(time==1200)?"It's noon! Good Afternoon!" : "is not within the hrs time-frame!";
    std::cout<<time_of_the_day<<std::endl;
return 0;
}
