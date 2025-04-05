#include <iostream>

int main() {
    // 1. Crear array y puntero base
    int a[] = {2,4,6,8,10,1,3,5,7,9};
    int tamañoarray = sizeof(a)/sizeof(int);
    int *p = a;  // p apunta al inicio del array
    
    // 2. Mostrar array original usando un puntero que se mueve
    std::cout << "Array original: ";
    int *pMostrar = p;  // Puntero para mostrar
    while(pMostrar < p + tamañoarray) {
        std::cout << *pMostrar << " ";
        pMostrar++;  // Mover puntero al siguiente elemento
    }
    std::cout << std::endl;

    // 3. Ordenar usando dos punteros
    int *pActual = p;  // Puntero que apunta al número actual
    while(pActual < p + tamañoarray) {
        int *pComparar = pActual + 1;  // Puntero para comparar
        while(pComparar < p + tamañoarray) {
            // Si el actual es mayor que el comparado, intercambiar
            if(*pActual > *pComparar) {
                int temp = *pActual;
                *pActual = *pComparar;
                *pComparar = temp;
            }
            pComparar++;  // Mover puntero de comparación
        }
        pActual++;  // Mover puntero actual
    }

    // 4. Mostrar array ordenado
    std::cout << "Array ordenado: ";
    pMostrar = p;  // Reiniciar puntero para mostrar
    while(pMostrar < p + tamañoarray) {
        std::cout << *pMostrar << " ";
        pMostrar++;
    }
    std::cout << std::endl;

    return 0;
}
