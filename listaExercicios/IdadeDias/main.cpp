#include <iostream>

using namespace std;

int idadeEmDias(int anos, int meses, int dias) {
    return (anos * 365) + (meses * 30) + dias;
}
int main() {
    int anos, meses, dias;
    cout << "Digite a idade em anos, meses e dias: ";
    cin >> anos >> meses >> dias;
    int totalDias = idadeEmDias(anos, meses, dias);
    cout << "A idade expressa em dias e: " << totalDias << " dias" << endl;
    return 0;
}
