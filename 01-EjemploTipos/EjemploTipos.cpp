/* EjemploTipos.cpp
 * Ejemplos de Valores y Operaciones de Tipos de Datos
 * Luna Arecha, Julian Ismael
 * 20220420
 */

#include <string>   // Incluye la biblioteca de string
                    // definido en la biblioteca de esta manera:
                    // "typedef basic_string<char>    string;".

#include <cassert>  // Incluye la biblioteca cassert para poder utilizar el assert
                    // (asegurar, afirmar, aseverar o asertar) de C++.
                    // El assert asevera si la sentencia dentro de los parentesis es verdadera.
#include <limits>

using namespace std::string_literals;

int main() {    // Define la clase principal del programa por donde C++ ingresa, siempre retorna un entero que se define como el estado de la ejecucion.

    assert(true);                   // Aseveramos si la constante booleana es verdadera.
    assert('a' != 'b');             // Aseveramos si la constante caracter no es b.
    assert(666 == 666);             // Aseveramos si la constante entera sin signo es igual a 666.
    assert(3.14159 > -7);           // Aseveramos si la constante de punto flotante con doble precision es mayor a la constante entera.
    assert(3.14159 > 3e-2); // Notacion cientifica
    assert(12 == std::string("Las Palabras").length()); // Aseveramos si la constante cadena de caracteres tiene 12 caracteres de largo.
    assert(12 == "Las Palabras"s.length()); // Aseveramos si la constante cadena de caracteres utilizando string_literals tiene 12 caracteres de largo.
    assert("abcd"s == "ab"s + "cd"s); // Concatenacion de cadenas de caracteres
    assert(666u == 666u); // Unsigned
    assert(667l >= 666l); // Long
    assert(2 == 2u);
    assert(std::numeric_limits<int>::max() == 2147483647); // Limite maximo de int
    assert(std::numeric_limits<int>::min() == -2147483648); // Limite minimo de int
    assert(std::numeric_limits<short>::max() == 32767); // Limite maximo de short
    assert(std::numeric_limits<short>::min() == -32768); // Limite minimo de short
    assert(std::numeric_limits<short int>::max() == 32767); // Limite maximo de short int
    assert(std::numeric_limits<short int>::min() == -32768); // Limite minimo de short int
    assert(std::numeric_limits<unsigned short int>::max() == 65535); // Limite maximo de unsigned short int
    assert(std::numeric_limits<unsigned short int>::min() == 0); // Limite minimo de unsigned short int
    assert(std::numeric_limits<unsigned>::max() == 4294967295); // Limite maximo de unsigned
    assert(std::numeric_limits<unsigned>::min() == 0); // Limite minimo de unsigned
    assert(std::numeric_limits<signed short int>::max() == 32767); // Limite maximo de signed short int
    assert(std::numeric_limits<signed short int>::min() == -32768); // Limite minimo de signed short int
    assert(std::numeric_limits<long>::max() == 2147483647); // Limite maximo de long
    assert(std::numeric_limits<long>::min() == -2147483648); // Limite minimo de long
    assert(std::numeric_limits<long long>::max() == 9223372036854775807); // Limite maximo de long long
    assert(std::numeric_limits<long long>::min() == -9223372036854775808u); // Limite minimo de long long
    assert(std::numeric_limits<unsigned long long>::max() == 18446744073709551615u); // Limite maximo de unsigned long long
    assert(std::numeric_limits<unsigned long long>::min() == 0); // Limite minimo de unsigned long long
    assert(std::numeric_limits<float>::max() > 9999999999999999999u); //Limite maximo de float
    assert(std::numeric_limits<float>::min() < -9999999999999999999u); // Limite minimo de float
    assert(std::numeric_limits<double>::max() > 9999999999999999999u); //Limite maximo de double
    assert(std::numeric_limits<double>::min() < -9999999999999999999u); // Limite minimo de double
    assert(std::numeric_limits<long double>::max() > 9999999999999999999u); //Limite maximo de long double
    assert(std::numeric_limits<long double>::min() < -9999999999999999999u); // Limite minimo de long double
    assert("Hola"s.max_size() == 9223372036854775807); // Limite maximo de string
    assert(sizeof 'a' == 1); // Memoria de caracter
    assert(sizeof 65 == 4); // Memoria de entero
    assert(sizeof "Hola"s == 32); // Memoria de string C++
    assert(sizeof "Hola" == 5); // Memoria de string C

}   // Cerramos la clase principal main.