#include <iostream>
using namespace std;

double pesoIdeal(double altura, char sexo) {
    if (sexo == 'M' || sexo == 'm')
        return 72.7 * altura - 58;
    else if (sexo == 'F' || sexo == 'f')
        return 62.1 * altura - 44.7;
    else
        return -1; // Valor inválido para sexo
}

int main() {
    double altura;
    char sexo;
    cout << "Digite a altura (em metros): ";
    cin >> altura;
    cout << "Digite o sexo (M/F): ";
    cin >> sexo;
    double peso = pesoIdeal(altura, sexo);
    if (peso != -1)
        cout << "O peso ideal e: " << peso << " kg" << endl;
    else
        cout << "Sexo inválido!" << endl;
    return 0;
}
