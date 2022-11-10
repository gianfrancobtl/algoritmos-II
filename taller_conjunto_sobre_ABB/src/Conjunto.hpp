
template <class T>
Conjunto<T>::Conjunto() {
    _raiz = NULL;
    _cant = 0;
}

template <class T>
Conjunto<T>::~Conjunto() { 
    delete _raiz;
    _cant = NULL;
}

template <class T>
bool Conjunto<T>::pertenece(const T& clave) const {
    Nodo* nd = this->_raiz;
    while (nd != NULL && nd->valor != clave){
        if (clave > nd->valor){
            nd = nd->der;
        } else {
            nd = nd->izq;
        }
    }
    return nd != NULL;
}

template <class T>
void Conjunto<T>::insertar(const T& clave) {
    Nodo* nd = NULL;
    if (_raiz == NULL) {
        Nodo* aux = new Nodo (clave);
        _raiz = aux;
        _cant ++;
    }
    Nodo* aux2 = this->_raiz;
    while (aux2 != NULL && aux2->valor != clave){
        nd = aux2;
        if (clave < aux2->valor){
            aux2 = aux2->izq;
        } else {
            aux2 = aux2->der;
        }
        if (aux2 == NULL){
            Nodo* aux3 = new Nodo (clave);
            if (clave < nd->valor){
                nd->izq = aux3;
            } else {
                nd->der = aux3;
            }
            _cant ++;
        }
    }
}

template <class T>
void Conjunto<T>::remover(const T& clave) {
    if (_raiz->valor == clave){
        if (_raiz->izq == NULL){
            this->_raiz = _raiz->der;
        } else if (_raiz->der == NULL){
            this->_raiz = _raiz->izq;
        } else {
            Nodo* nd = _raiz->der;
            this->_raiz = _raiz->izq;
            Nodo max = this->maximo();
            max.der = nd;
        }
    }
    _cant --;
}

template <class T>
const T& Conjunto<T>::siguiente(const T& clave) {
/*    Nodo* nd = NULL;
    Nodo* aux2 = this->_raiz;

    while (aux2 != NULL){
        nd = aux2;
        if (clave < aux2->valor){
            aux2 = aux2->izq;
        } else {
            aux2 = aux2->der;
        }
    }
    return aux2->valor;*/
    return _raiz->valor;
}

template <class T>
const T& Conjunto<T>::minimo() const {
    Nodo* nd = NULL;
    Nodo* aux = this->_raiz;
    while (aux != NULL) {
        nd = aux;
        aux = aux->izq;
    }
    return nd->valor;
}

template <class T>
const T& Conjunto<T>::maximo() const {
    Nodo* nd = NULL;
    Nodo* aux = this->_raiz;
    while (aux != NULL) {
        nd = aux;
        aux = aux->der;
    }
    return nd->valor;
}

template <class T>
unsigned int Conjunto<T>::cardinal() const {
   return _cant;
}

template <class T>
void Conjunto<T>::mostrar(std::ostream&) const {
    assert(false);
}

