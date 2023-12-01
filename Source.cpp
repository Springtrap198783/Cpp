#include <fstream>
#include <iostream>

int main() {
    std::ofstream file("source.cpp");

    if (file.is_open()) {
        file << "#include <iostream>\n\n";
        file << "int main() {\n";
        file << "\tstd::cout << \"Hello, World!\" << std::endl;\n";
        file << "\treturn 0;\n";
        file << "}\n";
        file.close();
        std::cout << "File created successfully.\n";
    } else {
        std::cout << "Unable to open file.\n";
    }

    return 0;
}
