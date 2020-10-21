#include <iostream>
#include <array>
#include <vector>
#include <iomanip>
#include <ctime>
using namespace std;

vector<int> numerosEnteros(int cantidadEnteros) {
    vector <int> numerosAlmacenados;
    if (cantidadEnteros%2==0) {
        for (int i = 0; i < cantidadEnteros; i++) {
            int numrand = rand() % cantidadEnteros;
            numerosAlmacenados.push_back(numrand);
            int numrandN = numrand * -1;
            numerosAlmacenados.push_back(numrandN);
        }
    }

    return numerosAlmacenados;
}

int main(){
    int numeroEnteros = 0;
    do {
        cout << "Hola y bienvenido\nIngresa el numero de enteros que utilizaremos: ";
        cin >> numeroEnteros;
        if (numeroEnteros < 1 || numeroEnteros > 1000) {
            cout << "El numero debe ser menor a 1000 y mayor de 0\n";
        }
    } while (numeroEnteros < 1 || numeroEnteros > 1000);
    vector <int> numerosVector;
    numerosVector = numerosEnteros(numeroEnteros);
    printf("El arreglo de numeros que suma 0 es: \n");
    for (int i = 0; i < numeroEnteros; i++) {
        cout << numerosVector[i] << "   ";
    }
    printf("\nGenial, ten un gran día!");
}
