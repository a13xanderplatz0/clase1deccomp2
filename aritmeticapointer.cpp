#include <iostream>

int main() {
    int a[] = {2,4,6,8,10,1,3,5,7,9};
    int tamañoarray = sizeof(a)/sizeof(int);
    int *p = a;  // Puntero al inicio del array
    
    // Mostrar array original
    std::cout << "Array original: ";
    for(int *ptr = p; ptr < p + tamañoarray; ptr++) {
        std::cout << *ptr << " ";
    }
    std::cout << std::endl;

    // Ordenar usando aritmética de punteros
    for(int *ptr1 = p; ptr1 < p + tamañoarray; ptr1++) {
        for(int *ptr2 = ptr1 + 1; ptr2 < p + tamañoarray; ptr2++) {
            if(*ptr1 > *ptr2) {
                int temp = *ptr1;
                *ptr1 = *ptr2;
                *ptr2 = temp;
            }
        }
    }

    // Mostrar array ordenado
    std::cout << "Array ordenado: ";
    for(int *ptr = p; ptr < p + tamañoarray; ptr++) {
        std::cout << *ptr << " ";
    }
    std::cout << std::endl;

    return 0;
}
