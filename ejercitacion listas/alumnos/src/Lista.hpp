#include "Lista.h"

Lista::Lista() {
    _primero = NULL;
    _ultimo = NULL;
    _longitud = 0;
}

Lista::Lista(const Lista& l) : Lista() {
    //Inicializa una lista vacía y luego utiliza operator= para no duplicar el código de la copia de una lista.
    //Lista::~Lista();
    *this = l;
}

Lista& Lista::operator=(const Lista& aCopiar) {
    // aCopiar entra con los valores de 'l'.
    while (this->longitud() != 0){
        this->eliminar(0);
    }
    int longi = aCopiar.longitud();
    for (int i = 0; i < longi; i++) {
        this->agregarAtras(aCopiar.iesimo(i));
    }
    return *this;
}

void Lista::agregarAdelante(const int& elem) {
    if (_primero == NULL) {
        _primero = new Nodo;
        _primero->anterior = NULL;
        _primero->valor = elem;
        _primero->siguiente = NULL;
        _ultimo = _primero;
    } else {
        Nodo* nd = new Nodo;
        nd->valor = elem;
        nd->anterior = NULL;
        nd->siguiente = _primero;
        _primero->anterior = nd;
        _primero = nd;
    }
    _longitud++;
}

void Lista::agregarAtras(const int& elem) {
    if (_primero == NULL) {
        _primero = new Nodo;
        _primero->anterior = NULL;
        _primero->valor = elem;
        _primero->siguiente = NULL;
        _ultimo = _primero;
    } else {
        Nodo* nd = new Nodo;
        nd->valor = elem;
        nd->anterior = _ultimo;
        nd->siguiente = NULL;
        _ultimo->siguiente = nd;
        _ultimo = nd;
    }
    _longitud++;
}

void Lista::eliminar(Nat i) {
    // Inicializa aEliminar en el primer nodo con valor != null.
    Nodo* aEliminar = _primero;
    // Se avanza en la lista hasta alcanzar el siguiente al nodo a eliminar.
    int j = i;
    while (j > 0){
        aEliminar = aEliminar->siguiente;
        j --;
    }
    // Se inicializa un nuevo nodo como el siguiente al siguiente al eliminado.
    Nodo* siguiente = aEliminar->siguiente;
    Nodo* anterior = aEliminar->anterior;
    // Se "normaliza" la lista uniendo, con punteros, los nodos desenlazados.
    if (!(siguiente == NULL)){
        siguiente->anterior = anterior;
    } else {
        _ultimo = anterior;
    }
    if (!(anterior == NULL)){
        anterior->siguiente = siguiente;
    } else {
        _primero = siguiente;
    }
    // Se elimina el nodo i.
    delete aEliminar;
    _longitud --;
}

int Lista::longitud() const {
    return _longitud;
}

const int& Lista::iesimo(Nat i) const {
    Nodo* nd = _primero;
    int j = i;
    // Itera hasta que se llega al nodo i.
    while (j != 0){
        nd = nd->siguiente;
        j --;
    }
    return nd->valor;
}

int& Lista::iesimo(Nat i) {
    Nodo* nd = _primero;
    int j = i;
    // Itera hasta que se llega al nodo i.
    while (j != 0){
        nd = nd->siguiente;
        j --;
    }
    return nd->valor;
}

void Lista::mostrar(ostream& o) {
    Nodo* nd = _primero;
    while (nd != _ultimo){
        cout << nd->valor << " ";
        nd = nd->siguiente;
    }
}

Lista::~Lista() {
    while (_longitud > 0){
        eliminar(0);
    }
}