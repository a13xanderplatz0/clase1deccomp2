#include <iostream>
using namespace std;

void ordenarConPunteros(int *inicio, int *fin) {
    int *actual = inicio;
    
    while (actual <= fin) {
        int *min = actual; // Suponemos que el mínimo es el elemento actual
        int *busqueda = actual + 1; // Puntero para buscar el mínimo real
        
        // Busca el mínimo en el resto del array
        while (busqueda <= fin) {
            if (*busqueda < *min) {
                min = busqueda; // Encontramos un nuevo mínimo
            }
            busqueda++;
        }
        
        // Intercambia el mínimo con el elemento actual
        swap(*actual, *min);
        actual++; // Avanza al siguiente elemento
    }
}

int main() {
    int arr[] = {2, 4, 6, 1, 3, 5};
    int *inicio = arr;
    int *fin = arr + 5; // Puntero al último elemento
    
    ordenarConPunteros(inicio, fin);
    
    cout << "Array ordenado: ";
    for (int *p = inicio; p <= fin; p++) {
        cout << *p << " ";
    }
    cout << endl;
    
    return 0;
}