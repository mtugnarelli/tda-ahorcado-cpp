Algoritmos y Programaci�n 2 - FI UBA

# TDA: Ahorcado

## Enunciado

Implementar el TDA `Ahorcado` que modele el conocido juego de l�piz y papel, 
en el que el objetivo es adivinar una palabra o frase.

![Ahorcado][ahorcado]

El `Ahorcado` debe proveer operaciones para:

1. Inicializar el juego a partir de una palabra y la cantidad de chances disponibles
   inicialmente para arriesgar letras.

## Soluci�n

### Implementaciones incrementales

1. Constructor de `Ahorcado`
    * declaraci�n: [`Ahorcado.h`](../punto-01/src/Ahorcado.h)
    * implementaci�n: [`Ahorcado.cpp`](../punto-01/src/Ahorcado.cpp)
    * uso: [`main.cpp`](../punto-01/src/main.cpp)

### Versi�n final

`main.cpp` [ver](../master/src/main.cpp)

`Ahorcado.h` [ver](../master/src/Ahorcado.h)

`Ahorcado.cpp` [ver](../master/src/Ahorcado.cpp)

[ahorcado]: http://upload.wikimedia.org/wikipedia/commons/5/5f/Ahoracado_%28juego%29_-_2.gif "Ahorcado"