
#include <iostream>
#include "Ahorcado.h"

using namespace std;

int main() {

    Ahorcado partida("COMEDIA", 5);

    cout << ".:: Ahorcado ::." << endl << "Partida iniciada" << endl;

    cout << "Chances: " << partida.obtenerChancesRestantes() << endl;
    cout << "Palabra: " << partida.obtenerPalabra() << endl;

    return 0;
}

