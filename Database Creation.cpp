#include <fstream>
#include <iostream>

int main() {
    // Create and open a text file
    std::ofstream MyFile("database.xml", std::ios_base::app);

    // Write to the file
    MyFile << "Writing this to a file.\n";

    // Close the file
    MyFile.close();
}
