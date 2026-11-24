#include "../include/fibonnacci.h"

// Définition : on écrit le vrai code de la fonction
unsigned long long calculerFibonacci(int n) {
    if (n <= 1) return n;
    return calculerFibonacci(n - 1) + calculerFibonacci(n - 2);
}
