#include <fstream>
#include <iostream>
#include <string>

int main() {
    // Create an input stream to read the file
    std::ifstream sourceFile("source.cpp");

    // Check if the file was opened successfully
    if (!sourceFile.is_open()) {
        std::cerr << "Unable to open source file.\n";
        return 1;
    }

    // Create an output stream to write to the file
    std::ofstream destinationFile("database.xml", std::ios_base::app);

    // Check if the file was opened successfully
    if (!destinationFile.is_open()) {
        std::cerr << "Unable to open destination file.\n";
        return 1;
    }

    // Read lines from the source file and write them to the destination file
    std::string line;
    while (std::getline(sourceFile, line)) {
        destinationFile << line << '\n';
    }

    // Close the files
    sourceFile.close();
    destinationFile.close();

    return 0;
}
