#ifndef AHORCADO_H_
#define AHORCADO_H_

#include <string>

class Ahorcado {

    private:

        std::string palabraPorAdivinar;

        unsigned int chancesTotales;

        unsigned int chancesUsadas;

        std::string palabraEnmascarada;

    public:
        /*
         * pre : palabra es una secuencia de letras y chances es mayor a cero.
         * post: el juego queda iniciado con la palabra indicada y con
         *       tantas todas las chances disponibles para arriesgar
         *       letras.
         */
        Ahorcado(std::string palabra, unsigned int chances);

        /*
         * post: devuelve la cantidad de veces en las que a�n se puede
         *       arriesgar una letra sin que exista en la palabra.
         *
         */
        unsigned int obtenerChancesRestantes();

        /*
         * post: devuelve la palabra a adivinar, enmascarando las letras
         *       desconocidas con '_' (gui�n bajo).
         */
        std::string obtenerPalabra();

        /*
         * pre : tiene al menos una chance restante.
         * post: eval�a la existencia de la letra en la palabra; si existe
         *       la revela, en caso contrario consume una chance.
         */
        bool arriesgar(char letra);
};


#endif /* AHORCADO_H_ */
