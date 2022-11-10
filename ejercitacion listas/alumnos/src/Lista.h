#ifndef _LISTA_ALUMNOS_H_
#define _LISTA_ALUMNOS_H_

#include <string>
#include <ostream>

using namespace std;

typedef unsigned long Nat;

class Lista {
public:
    // Constructor
    Lista();

    // Constructor por copia de la clase Lista.
    Lista(const Lista& l);

    //Operador asignación.
    Lista& operator=(const Lista& aCopiar);

    // Operaciones para agregar elementos adelante y atrás.
    void agregarAdelante(const int& elem);
    void agregarAtras(const int& elem);

    // Elimina el i-ésimo elemento de la Lista.
    void eliminar(Nat i);

    // Devuelve la cantidad de elementos que contiene la Lista.
    int longitud() const;

    // Devuelve el elemento en la i-ésima posición de la Lista. El @return es una referencia no modificable.
    const int& iesimo(Nat i) const;

    // Devuelve el elemento en la i-ésima posición de la Lista. El @return es una referencia modificable.
    int& iesimo(Nat i);

    // Muestra la lista en un ostream con formato de salida: [a_0, a_1, a_2, ...]
    void mostrar(ostream& o);

    // Utiliza el método mostrar(os) para sobrecargar el operador <<.
    friend ostream& operator<<(ostream& os, Lista& l) {
        l.mostrar(os);
        return os;
    }

    ~Lista();

private:
    // Estructura del Nodo.
    struct Nodo {
        int valor;
        Nodo* anterior;
        Nodo* siguiente;
    };

    // Punteros a los nodos centinela.
    Nodo* _primero;
    Nodo* _ultimo;
    int _longitud;
};

#include "Lista.hpp"

#endif
