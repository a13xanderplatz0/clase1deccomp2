#include <iostream>
int main(){

int a=321;
/* declaramos un puntero que apunta a la direccion de 
memoria de la variable a la cual estamos apuntando */
int *p=&a;

/*aqui convertimos el puntero de tipo int a tipo char*/
/*solo cambia la manera en como  interpretamos esos datos 
p:lo lee de recorrido los 4 bytes 
q:lee byte por byte */
char *q=(char*)p;
/*aqui estamos desreferenciando el puntero para poder 
mostrar el valor que almacena a*/
std::cout<<*p<<std::endl;
std::cout<<*q<<std::endl;
std::cout<<p<<std::endl;
std::cout<<q<<std::endl;
*q='B';
std::cout<<*p<<std::endl;

return 0;

}
/*
COMO INT:

00000000 00000000 00000001 01000001=321
 byte[3]  byte[2] byte[1] byte[0]
COMO CHAR:
byte[0]=01000001="A"(65)little-endian
byte[1]=00000001="1"
byte[2]=00000000="0"
byte[3]=00000000="0"
*/