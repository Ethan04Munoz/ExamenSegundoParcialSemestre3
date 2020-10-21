//Ethan Muñoz López    19300098         3C          21/10/2020
#include <iostream>
#include <array>
#include <vector>
#include <iomanip>
#include <ctime>
//Incluimos las variables
using namespace std;

vector<int> numerosEnteros(int cantidadEnteros) { //Declaramos una funcion vector
    vector <int> numerosAlmacenados; 
    if (cantidadEnteros == 1) {
        numerosAlmacenados.push_back(0); //en caso de que solo nos haya dicho que con un numero, solo hya un numero que suma 0
    }                                    //y es el mismo cero, por lo que lo empujamos con el arreglo y seguimos adelante
    else { //Si el numero es mayor a uno entonces entra al else
        if (cantidadEnteros % 2 == 0) { //Si el usuario pidio una cantidad par entrará aquí
            int numrand = rand() % (cantidadEnteros + 1);
            for (int i = 0; i < cantidadEnteros; i++) {
                numrand = numrand + i;
                numerosAlmacenados.push_back(numrand); 
                int numrandN = numrand * -1;
                numerosAlmacenados.push_back(numrandN);
            }
        }
        else { //Si el numero no es par entrara aquí
            int numrand = rand() % (cantidadEnteros + 1);
            numerosAlmacenados.push_back(0); //Añadimos un 0 de una vez al vector
            for (int i = 0; i < cantidadEnteros-1; i++) {
                numrand = numrand + i;
                numerosAlmacenados.push_back(numrand);
                int numrandN = numrand * -1;
                numerosAlmacenados.push_back(numrandN); //Empujamos los valoes basados en el for y el aleatorio para que no se repitan
            }
        }
    }
    return numerosAlmacenados; //Retornamos el vector
}

int main(){
    int numeroEnteros = 0; //numerosEnteros es la cantidad que pedimos al usuario
    do {
        cout << "Hola y bienvenido\nIngresa el numero de enteros que utilizaremos: ";
        cin >> numeroEnteros; 
        if (numeroEnteros < 1 || numeroEnteros > 1000) { 
            cout << "El numero debe ser menor a 1001 y mayor de 0\n";
        }
    } while (numeroEnteros < 1 || numeroEnteros > 1000); //En este bucle verificamos que se trata de un numero mayor a 1 y menor a 1001
    srand(time(0)); //Esta linea es obligatoria siempre
    vector <int> numerosVector; //El vector es un vector que almacenara lo retornado por la función
    numerosVector = numerosEnteros(numeroEnteros);
    // Con las siguientes lineas imprimiremos el vector
    printf("El arreglo de numeros que suma 0 es: \n");
    for (int i = 0; i < numeroEnteros; i++) {
        cout << numerosVector[i] << "   ";
    }
    printf("\nGenial, ten un gran dia!");
    return 0;
}
