#include <iostream>
using namespace std;

int main() {
    //Numeros N > 0
    int N;
    cout << "Digite um numero inteiro positivo: ";
    cin >> N;
    //Verificar se o numero é positivo
    if (N <= 0) {
        cout << "Numero invalido. Digite um numero inteiro positivo." << endl;
        return 1; //Encerrar o programa com código de erro
    }
    
}