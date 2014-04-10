#include "Ahorcado.h"

using namespace std;

Ahorcado::Ahorcado(string palabra, unsigned int chances) {

    palabraPorAdivinar = palabra;
    chancesUsadas = 0;

    if (chances > 0) {

        chancesTotales = chances;

    } else {
        /* si el valor es incorrecto asume el valor estándar */
        chancesTotales = 7;
    }

    /* construye la palabra enmascarada con guiones en todas la letras */
    palabraEnmascarada = "";
    for (unsigned int i = 0; i < palabraPorAdivinar.size(); i++) {
        palabraEnmascarada += "_";
    }
}

unsigned int Ahorcado::obtenerChancesRestantes() {

    return chancesTotales - chancesUsadas;
}

string Ahorcado::obtenerPalabra() {

    return palabraEnmascarada;
}
