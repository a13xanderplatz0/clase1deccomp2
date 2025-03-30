#include <iostream>
#include <algorithm> // para funcion sort y reverse para ordenar
int main()
   {

    int a[]={2,4,6,8,10,1,3,5,7,9};
    /*obtener tamaño del array*/
    int tamañototal=sizeof(a);
    int tamañoint=sizeof(int);
    int tamañoarray=tamañototal/tamañoint;//numero de elementos
    
    std::cout<<"tamaño total: "<<tamañototal<<std::endl;
    std::cout<<"tamaño int: "<<tamañoint<<std::endl;
    std::cout<<"tamaño array: "<<tamañoarray<<std::endl;
    std::cout<<""<<std::endl;
    
    std::cout<<"elementos sin ordenar: "<<std::endl;

    for(int i=0;i<tamañoarray;i++)
    {
        std::cout<<a[i]<<" " ;
    }

    std::cout<<""<<std::endl;
    std::cout<<"elementos ordenados: "<<std::endl;  
    
    for(int i=0;i<tamañoarray;i++)
    {
        std::cout<<&a[i]<<" " ;
    }

 std::cout<<""<<std::endl;
    return 0;
   } 