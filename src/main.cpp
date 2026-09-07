#include <iostream>
#include <string>
#include <fstream>
int main(int argc, char* argv[]) {
    std::string str;
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;
    }
    else{
        std::ifstream file(argv[1]);
        if (file.is_open()) {
            if (std::getline(file, str)) {
                file.close();
            } else {
                std::cout << "File is empty" << std::endl;
            }
        } else {
            std::cerr << "Error opening file: " << argv[1] << std::endl;
            return 1;
        }
    }
    std::cout << str << std::endl;
    return 0;
}