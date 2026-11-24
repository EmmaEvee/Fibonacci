#include <iostream>
#include "../include/fibonnacci.h" // On importe juste le "mode d'emploi"
#include <string>

int main() {
	std::cout << "choisir n :\n";
	int n;
	std::cin >> n;
    std::cout << "Fibonacci(n) = " << calculerFibonacci(n) << std::endl;
    return 0;
}
