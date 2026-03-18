#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Digite um numero inteiro positivo: ";
    if (!(cin >> N) || N <= 0) {
        cout << "Digite um numero inteiro maior que 0." << endl;
        return 1;
    }
    cout << "Valor de N: " << N << endl;
    cout << "Numeros primos: ";
    int count = 0;
    bool primeiro = true;
    for (int i = 2; i <= N; i++) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            if (!primeiro) cout << " - ";
            cout << i;
            primeiro = false;
            count++;
        }
    }
    cout << endl;
    cout << "Quantidade de numeros primos: " << count << endl;
    return 0;
}