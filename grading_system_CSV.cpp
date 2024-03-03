#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

// Function to calculate grade
char calculateGrade(float mark) {
    if (mark >= 80) return 'A';
    else if (mark >= 70) return 'B';
    else if (mark >= 60) return 'C';
    else if (mark >= 50) return 'D';
    else if (mark >= 40) return 'E';
    else return 'F';
}

int main() {
    std::string inputFileName, outputFileName;

    // Ask the user for the names of the input and output files
    std::cout << "Enter the path to the file to grade: ";
    std::cin >> inputFileName;
    std::cout << "Enter the name to use on the output file (without extension): ";
    std::cin >> outputFileName;

    // Determine the extension of the input file
    std::string extension = inputFileName.substr(inputFileName.find_last_of(".") + 1);

    // Append the extension to the output file name
    outputFileName += "." + extension;

    std::ifstream inputFile(inputFileName);
    std::ofstream outputFile(outputFileName);
    std::string line;

    // Read and write the first line
    std::getline(inputFile, line);
    outputFile << line << ",Average\n";

    while (std::getline(inputFile, line)) {
        std::istringstream ss(line);
        std::string name;
        float maths, english, computer, sst;

        std::getline(ss, name, ',');
        ss >> maths;
        ss.ignore(1); // Ignore the comma
        ss >> english;
        ss.ignore(1); // Ignore the comma
        ss >> computer;
        ss.ignore(1); // Ignore the comma
        ss >> sst;

        float average = (maths + english + computer + sst) / 4;
        outputFile << name << "," << maths << "(" << calculateGrade(maths) << "),"
                   << english << "(" << calculateGrade(english) << "),"
                   << computer << "(" << calculateGrade(computer) << "),"
                   << sst << "(" << calculateGrade(sst) << "),"
                   << average << "(" << calculateGrade(average) << ")\n";
    }

    inputFile.close();
    outputFile.close();
    std::cout<<"The file has been saved to the specified directory";

    return 0;
}

