/* EjemploTipos.cpp
 * Ejemplos de Valores y Operaciones de Tipos de Datos
 * Luna Arecha, Julian Ismael
 * 20220420
 */

#include <iostream>
#include<cassert>
#include <stdio.h>

int main() {

    const bool booleano = true;
    const char caracterSimple = 'a';
    const unsigned enteroSinSigno = 666;
    const int numeroEntero = 7;
    const double doblePrecision = 3.14159;
    const std::string palabra = "Las Palabras";

    assert(booleano);
    assert(caracterSimple!='b');
    assert(enteroSinSigno==666);
    assert(numeroEntero>doblePrecision);
    assert(12==palabra.length());

    return 0;

}