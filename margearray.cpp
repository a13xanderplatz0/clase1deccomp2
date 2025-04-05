#include <iostream>
using namespace std;

bool esPar(int *num) {
    return (*num & 1) == 0;
}

bool esImpar(int *num) {
    return (*num & 1) != 0;
}

void combinarArrays(int *inicio, int *mitad, int *finalArr) {
    while (mitad <= finalArr) {
        int temp = *inicio;
        *inicio = *mitad;
        *mitad = temp;
        inicio++;
        mitad++;
    }
}

int main() {
    int numeros[] = {2, 4, 6, 1, 3, 5};
    int *ptrInicio = numeros;
    int *ptrMitad = numeros + 3;
    int *ptrFinal = ptrInicio + ((ptrMitad - ptrInicio) * 2) - 1;

    combinarArrays(ptrInicio, ptrMitad, ptrFinal);

    for (int i = 0; i < 6; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}