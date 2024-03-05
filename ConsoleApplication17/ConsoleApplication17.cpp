#include <iostream> 

void printPattern(int n) {
    for (int i = 0; i < n; ++i) {
        for (int s = 4; s < n + i; ++s) {
            std::cout << ' '; //  пробіли  
        }
        for (int j = 0; j < n - i; ++j) {
            std::cout << i;
        }
        for (int k = 4; k <= 7 - i; ++k) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cout << "Enter the number: ";
    std::cin >> n;
    int numRows = n;
    if (n == 12) {
        numRows = n % 5 + 5;
    }
    printPattern(n);
    return 0;
}