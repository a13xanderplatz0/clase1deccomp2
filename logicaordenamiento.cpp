#include <iostream>

int main() {
    int a[] = {2,4,6,8,10,1,3,5,7,9};
    int tamañoarray = sizeof(a)/sizeof(int);
    
    // Mostrar array original
    std::cout << "Array original: ";
    for(int i = 0; i < tamañoarray; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    // Ordenar usando lógica simple
    for(int i = 0; i < tamañoarray; i++) {
        for(int j = i + 1; j < tamañoarray; j++) {
            // Si el número actual es mayor que el siguiente
            // los intercambiamos
            if(a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Mostrar array ordenado
    std::cout << "Array ordenado: ";
    for(int i = 0; i < tamañoarray; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
