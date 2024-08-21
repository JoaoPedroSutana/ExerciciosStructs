#include <iostream>
using namespace std;

void categoriaNadador(int idade) {
    if (idade >= 5 && idade <= 7)
        cout << endl << "Infantil A" << endl;
    else if (idade >= 8 && idade <= 10)
        cout << endl << "Infantil B" << endl;
    else if (idade >= 11 && idade <= 13)
        cout << endl << "Juvenil A" << endl;
    else if (idade >= 14 && idade <= 17)
        cout << endl << "Juvenil B" << endl;
    else if (idade >= 18)
        cout << endl << "Adulto" << endl;
    else
        cout << endl << "Idade fora das categorias." << endl;
}
int main() {
    int idade;
    cout << "Digite a idade do nadador: ";
    cin >> idade;

    categoriaNadador(idade);

    return 0;
}
