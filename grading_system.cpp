#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

// Function to calculate grade
char calculateGrade(int mark) {
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
    std::cout << "Enter the path of the file to grade: ";
    std::cin >> inputFileName;
    std::cout << "Enter the name to use on the graded file: ";
    std::cin >> outputFileName;

    // Append the extension to the output file name
    outputFileName += ".txt";
    

    std::ifstream inputFile(inputFileName);
    std::ofstream outputFile(outputFileName);
    std::string name;
    std::string line;
    int maths, english, computer, sst;

    // Read and write the first line
    std::getline(inputFile, line);
    std::istringstream ss(line);
    std::string header;
    while (std::getline(ss, header, ' ')) {
        outputFile << std::left << std::setw(5) << header << " | ";
    }
    outputFile << std::left << std::setw(5) << "Average\n";

        while (inputFile >> name >> maths >> english >> computer >> sst) {
            int average = (maths + english + computer + sst) / 4;
            outputFile << std::setw(5) << name << " "
                       << std::setw(5) << maths << "(" << calculateGrade(maths) << ") "
                       << std::setw(5) << english << "(" << calculateGrade(english) << ") "
                       << std::setw(5) << computer << "(" << calculateGrade(computer) << ") "
                       << std::setw(5) << sst << "(" << calculateGrade(sst) << ") "
                       << std::setw(5) << average << "(" << calculateGrade(average) << ")\n";
        }
    inputFile.close();
    outputFile.close();

    return 0;
}
