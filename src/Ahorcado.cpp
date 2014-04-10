#include "Ahorcado.h"

using namespace std;

Ahorcado::Ahorcado(string palabra, unsigned int chances) {

    palabraPorAdivinar = palabra;

    if (chances > 0) {
        chancesTotales = chances;

    } else {

        /* si el valor es incorrecto asume el valor est�ndar */
        chancesTotales = 7;
    }

    chancesUsadas = 0;
}
