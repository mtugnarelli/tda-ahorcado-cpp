Algoritmos y Programación 2 - FI UBA

# TDA: Ahorcado

## Enunciado

Implementar el TDA `Ahorcado` que modele el conocido juego de lápiz y papel, 
en el que el objetivo es adivinar una palabra o frase.

![Ahorcado][ahorcado]

El `Ahorcado` debe proveer operaciones para:

1. Inicializar el juego a partir de una palabra y la cantidad de chances disponibles
   inicialmente para arriesgar letras.
   
2. Conocer la cantidad de chances restantes para arriesgar una letra que no
   exista en la palabra.
   
## Solución

### Implementaciones incrementales

1. Constructor de `Ahorcado`:
    * declaración: [`Ahorcado.h`](../punto-01/src/Ahorcado.h)
    * implementación: [`Ahorcado.cpp`](../punto-01/src/Ahorcado.cpp)
    * uso: [`main.cpp`](../punto-01/src/main.cpp)
    
2. Método `unsigned int obtenerChancesRestantes()`:
    * declaración: [`Ahorcado.h`](../punto-02/src/Ahorcado.h)
    * implementación: [`Ahorcado.cpp`](../punto-02/src/Ahorcado.cpp)
    * uso: [`main.cpp`](../punto-02/src/main.cpp)

### Versión final

`main.cpp` [ver](../master/src/main.cpp)

`Ahorcado.h` [ver](../master/src/Ahorcado.h)

`Ahorcado.cpp` [ver](../master/src/Ahorcado.cpp)

[ahorcado]: http://upload.wikimedia.org/wikipedia/commons/5/5f/Ahoracado_%28juego%29_-_2.gif "Ahorcado"