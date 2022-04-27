/* EjemploTipos.cpp
 * Ejemplos de Valores y Operaciones de Tipos de Datos
 * Luna Arecha, Julian Ismael
 * 20220420
 */

#include <iostream> // Incluye la biblioteca de input/output stream
                    // (flujo de entrada/salida) para que "string"
                    // funcione, que en realidad es un "string of chars"
                    // (cadena de caracteres), definido en la biblioteca de esta manera:
                    // "typedef basic_string<char>    string;".

#include <cassert>  // Incluye la biblioteca cassert para poder utilizar el assert
                    // (asegurar, afirmar, aseverar o asertar) de C++.
                    // El assert asevera si la sentencia dentro de los parentesis es verdadera.

int main() {    // Define la clase principal del programa por donde C++ ingresa, siempre retorna un entero que se define como el estado de la ejecucion.

    const bool booleano = true;                     // Definimos una constante booleana con valor verdadero.
    const char caracterSimple = 'a';                // Definimos una constante de caracter con valor a.
    const unsigned enteroSinSigno = 666;            // Definimos una constante entera sin signo con valor 666.
    const int numeroEntero = -7;                    // Definimos una constante entera con valor -7.
    const double doblePrecision = 3.14159;          // Definimos una constante de punto flotante con doble precision con valor 3.14159.
    const std::string palabra = "Las Palabras";     // Definimos una constante cadena de caracteres con valor "Las Palabras".

    assert(booleano);                       // Aseveramos si la constante booleana es verdadera.
    assert(caracterSimple != 'b');          // Aseveramos si la constante caracter no es b.
    assert(enteroSinSigno == 666);          // Aseveramos si la constante entera sin signo es igual a 666.
    assert(doblePrecision > numeroEntero);  // Aseveramos si la constante de punto flotante con doble precision es mayor a la constante entera.
    assert(12 == palabra.length());         // Aseveramos si la constante cadena de caracteres tiene 12 caracteres de largo.

    return 0;   // Si lo ejecutado esta correcto, retorna 0 como estado de la ejecucion del main.

}   // Cerramos la clase principal main.