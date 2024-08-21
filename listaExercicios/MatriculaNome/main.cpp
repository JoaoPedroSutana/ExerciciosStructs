#include <iostream>

using namespace std;

struct Aluno{
    int maricula;
    char nome[100];
};
int main(){
    Aluno aluno[50];
    int numAluno;
    cout << "Digite o numero de alunos:";
    cin >> numAluno;
    for(int i = 0; i < numAluno; ++i){
        cout << "Digite a matricula do aluno:" << i+1 << ":";
        cin >> aluno[i].maricula;
        cin.ignore();
        cout << "Digite o nome do alunos:" << i+1 << ":";
        cin.getline(aluno[i].nome, 100);
    }
    cout << "Lista de alunos:";
    for(int i = 0; i < numAluno; ++i){
        cout << aluno[i].maricula << "-" <<aluno[i].nome << endl;
    }
    return 0;
}
