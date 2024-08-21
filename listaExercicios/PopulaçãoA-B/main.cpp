#include <iostream>

using namespace std;

int calcularAnos() {
    double populacao_a = 90000000;
    double populacao_b = 200000000;
    double taxa_a = 0.03;
    double taxa_b = 0.015;
    int anos = 0;
    while (populacao_a <= populacao_b) {
        populacao_a += populacao_a * taxa_a;
        populacao_b += populacao_b * taxa_b;
        anos++;
    }
    return anos;
}
int main() {
    int anos = calcularAnos();
    cout << "Serao necessarios " << anos << " anos para que a populaçao do pais A ultrapasse ou iguale a do pais B." << endl;
    return 0;
}
