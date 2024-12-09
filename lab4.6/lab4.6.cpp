#include <iostream>

using namespace std;

double expression1() {
    double result = 0;
    int i = 1;
    while (i <= 10) {
        double inner_prod = 1;
        int k = 1;
        while (k <= i) {
            inner_prod *= static_cast<double>(k) / i;
            k++;
        }
        result += (1 + inner_prod) / (i * i);
        i++;
    }
    return result;
}

double expression2() {
    double result = 0;
    int i = 1;
    do {
        double inner_prod = 1;
        int k = 1;
        do {
            inner_prod *= static_cast<double>(k) / i;
            k++;
        } while (k <= i);
        result += (1 + inner_prod) / (i * i);
        i++;
    } while (i <= 10);
    return result;
}

double expression3() {
    double result = 0;
    for (int i = 1; i <= 10; i++) {
        double inner_prod = 1;
        for (int k = 1; k <= i; k++) {
            inner_prod *= static_cast<double>(k) / i;
        }
        result += (1 + inner_prod) / (i * i);
    }
    return result;
}

double expression4() {
    double result = 0;
    for (int i = 10; i >= 1; i--) {
        double inner_prod = 1;
        for (int k = i; k >= 1; k--) {
            inner_prod *= static_cast<double>(k) / i;
        }
        result += (1 + inner_prod) / (i * i);
    }
    return result;
}

int main() {
    cout << "1: " << expression1() << endl;
    cout << "1: " << expression2() << endl;
    cout << "1: " << expression3() << endl;
    cout << ": " << expression4() << endl;
    return 0;
}
