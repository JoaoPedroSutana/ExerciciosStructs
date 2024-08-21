#include <iostream>
using namespace std;

int maior(int a, int b, int c) {
    if (a >= b && a >= c) return a;
    else if (b >= a && b >= c) return b;
    else return c;
}

int main() {
    int num1, num2, num3;
    cout << "Digite tres numeros: ";
    cin >> num1 >> num2 >> num3;

    int resultado = maior(num1, num2, num3);
    cout << "O maior numero e: " << resultado << endl;

    return 0;
}
