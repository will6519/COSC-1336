//Christmas Tree Function
// Will 
#include <iostream>

void printTree (int intpHeight) {
    for(int intBranches = 1; intBranches <= intpHehight; intBracnhes++) {
        std::cout << "*" << std::endl;
    }
}
int main() {

    int intNumberLine = 3;

std::cout << "  *" << std::endl;
std::cout << "***" << std::endl;
std::cout << "*****" << std::endl;
std::cout << "   *" << std::endl;

printTree(intNumberLine);

std::cout << std::endl;

printTree(intNumberLine + 2);

return 0;

}