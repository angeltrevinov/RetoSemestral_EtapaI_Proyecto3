/*
    Angel Odiel Treviño Villanueva
    A01336559
    Estructura de Datos
    Reto Semestral 
    Odd Linkedlist 
 */

#include <iostream>
#include "Lista.h"

int main() {
    
    Lista <int> L;
    L.insertaInicio(5);
    L.insertaInicio(2);
    L.insertaInicio(8);
    L.insertaFinal(3);
    //L.oddEvenList(L); //no se que poner para que no tenga errores de compilacion
    L.muestra();
    return 0;
}

