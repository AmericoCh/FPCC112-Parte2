/*1. Solicita al usuario un entero y crea un arreglo dinámico de ese tamaño. 
Luego, llena el arreglo con números ingresados por el usuario.*/

#include <iostream>
using namespace std;

void llenarArreglo(int *p, int tam){
    for(int i = 0; i <tam; ++i){
        cout << "Ingrese el elemento " << i+1 << ": ";
        cin >> p[i];
    }
}


int main(){
    int N;
    cout << "Ingrese el tamaño: ";
    cin >> N;

    int * arr = new int[N];

    llenarArreglo(arr, N);

    delete [] arr;

    return 0; 
}