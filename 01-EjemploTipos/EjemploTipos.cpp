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

    assert(true);                   // Aseveramos si la constante booleana es verdadera.
    assert('a' != 'b');             // Aseveramos si la constante caracter no es b.
    assert(666 == 666);             // Aseveramos si la constante entera sin signo es igual a 666.
    assert(3.14159 > -7);           // Aseveramos si la constante de punto flotante con doble precision es mayor a la constante entera.
    assert(12 == std::string("Las Palabras").length()); // Aseveramos si la constante cadena de caracteres tiene 12 caracteres de largo.

}   // Cerramos la clase principal main.