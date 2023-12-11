#include <iostream>
#include <string>
#include <limits> // Include the <limits> header for std::cin.ignore()

void joke_func(std::string param) {
    std::string base, joke, response, response2;

    if (param == "knock knock") {
        // Clear the input buffer before using getline
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
        std::cout << "who's there?" << std::endl;
        std::getline(std::cin,base);
        std::cout << base << " who?" << std::endl;
        std::getline(std::cin, joke);

        std::cout << "\nhahaha, that's Totally coOL DUDE! :D\n";
        std::cout << "my turn!;\n";
        std::cout << "knock knock...\n";
        std::getline(std::cin, response);

        if (response == "who's there?") {
            std::cout << base <<std::endl;
            std::getline(std::cin, response2);

            if (response2 == base + " who?") {
                std::cout << joke <<std::endl;
            } else {
                std::cout << "you're supposed to respond with:" << base << " who? DUDE!\n";
            }
        } else {
            std::cout << "you're supposed to respond with; 'who's there?'  DUDE!\n";
        }
    } else {
        std::cout << "Sorry, we only do knock knock jokes here :/\n";
    }
}

int main() {
    int choice;
    std::cout << "Ready for some knock knock jokes...\n";
    std::cout << "1. let's do this!\n2. Nah, not really.\n";
    std::cin >> choice;

    switch (choice) {
        case 1:
            joke_func("knock knock");
            break;
        case 2:
            std::cout << "sucks DUDE, maybe next time.\n";
            break;
        default:
            std::cout << "That's Totally not coOL DUDE!";
    }

    return 0;
}

