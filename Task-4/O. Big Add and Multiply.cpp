#include <iostream>
#include <string>

int main() {
   
    std::string N;
    std::cin >> N;

    
    std::string resultAddition = "1";
    for (int i = 0; i < N.size(); ++i) {
        resultAddition += '0';
    }

    
    std::string resultMultiplication = N;
    resultMultiplication += "0000";

   
    std::cout << resultMultiplication << std::endl;
    std::cout << resultAddition << std::endl;
    

    return 0;
}
