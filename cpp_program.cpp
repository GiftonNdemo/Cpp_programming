#include <iostream> //loads prebuilt library to use, in this case the 
                    //library necessary to print to console(namespace std::cout)

consteval int get_value(){
    return 3;
}
int main(){ //this is the main function and acts as the start point for the program
    constexpr int value = get_value();
    std::cout << "Hello World!" << std::endl;//endl is used to printout a new line 
    return 0;
}
