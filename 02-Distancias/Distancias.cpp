/* Distancias.cpp
 * Medir distancias.
 * Luna Arecha, Julian Ismael
 * 20220707
 */

#include <cassert>

double Distancia(double a, double b);

double Abs(double d);

bool AreNear(double a, double b, double precision);

int main() {
    assert( AreNear(Distancia(-3.2,5.6),8.8,0.1));
    assert( AreNear(Distancia(5.6,-3.2),8.8,0.1));
    assert( AreNear(Distancia(-5.6,3.2),8.8,0.1));
    assert( AreNear(Distancia(3.2,-5.6),8.8,0.1));
}

bool AreNear(double a, double b, double precision){
    return (a >= b) ? (a - b) <= precision : (b - a) <= precision;
}

// Distancia : R x R --> R / Distancia(x,y) = |x-y| = { d(x,y) = 0 if x = y; d(x,y) = |x − y| }
double Distancia(double a, double b){
    return Abs(a-b);
}

// Abs: Z --> Z / Abs(x) = |x| = { -x si  x < 0; x }
double Abs(double d){
    return d < 0 ? -d : d;
}
