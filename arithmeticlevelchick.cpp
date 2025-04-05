#include <iostream>

int main() {
    // Mismo array original
    int a[] = {2,4,6,8,10,1,3,5,7,9};
    int tamaño = sizeof(a)/sizeof(int);
    
    // Puntero base al inicio del array
    int *puntero = a;

    // Mostrar array original
    std::cout << "Array sin ordenar: ";
    // Usar puntero para mostrar
    for(int i = 0; i < tamaño; i++) {
        std::cout << *(puntero + i) << " ";  // Acceder usando aritmética básica
    }
    std::cout << "\n";

    // Ordenar con lógica simple y aritmética de punteros básica
    for(int i = 0; i < tamaño - 1; i++) {
        for(int j = 0; j < tamaño - 1; j++) {
            // Comparar elementos adyacentes usando el puntero
            if(*(puntero + j) > *(puntero + j + 1)) {
                // Intercambiar usando el puntero
                int temporal = *(puntero + j);
                *(puntero + j) = *(puntero + j + 1);
                *(puntero + j + 1) = temporal;
            }
        }
    }

    // Mostrar array ordenado
    std::cout << "Array ordenado: ";
    for(int i = 0; i < tamaño; i++) {
        std::cout << *(puntero + i) << " ";
    }
    std::cout << "\n";

    return 0;
}
