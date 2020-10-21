#include <iostream>
#include <array>
#include <vector>
#include <iomanip>
#include <ctime>
using namespace std;

vector<int> numerosEnteros(int cantidadEnteros) {
    vector <int> numerosAlmacenados;
    if (cantidadEnteros == 1) {
        numerosAlmacenados.push_back(0);
    }
    else {
        if (cantidadEnteros % 2 == 0) {
            int numrand = rand() % (cantidadEnteros + 1);
            for (int i = 0; i < cantidadEnteros; i++) {
                numrand = numrand + i;
                numerosAlmacenados.push_back(numrand);
                int numrandN = numrand * -1;
                numerosAlmacenados.push_back(numrandN);
            }
        }
        else {
            int numrand = rand() % (cantidadEnteros + 1);
            for (int i = 0; i < cantidadEnteros; i++) {
                numrand = numrand + i;
                numerosAlmacenados.push_back(numrand);
                //obtenemos el primer numero, para despues, como 
                //hablamos de impares, mostrar otro numero subdividido
                if (i == 0) {
                    int numRandI1 = (((numrand / 2) + 0.5)+cantidadEnteros)* -1;
                    int numRandI2 = (((numrand / 2) - 0.5)+cantidadEnteros) * -1;
                    numerosAlmacenados.push_back(numRandI1);
                    numerosAlmacenados.push_back(numRandI2);
                }
                else {
                    int numrandN = numrand * -1;
                    numerosAlmacenados.push_back(numrandN);
                }
            }
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
            cout << "El numero debe ser menor a 1001 y mayor de 0\n";
        }
    } while (numeroEnteros < 1 || numeroEnteros > 1000);
    srand(time(0)); //Esta linea es obligatoria siempre
    vector <int> numerosVector;
    numerosVector = numerosEnteros(numeroEnteros);
    printf("El arreglo de numeros que suma 0 es: \n");
    for (int i = 0; i < numeroEnteros; i++) {
        cout << numerosVector[i] << "   ";
    }
    printf("\nGenial, ten un gran día!");
}
