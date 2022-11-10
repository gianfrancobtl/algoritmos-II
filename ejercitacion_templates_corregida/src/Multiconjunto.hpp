#ifndef __MULTICONJUNTO_HPP__
#define __MULTICONJUNTO_HPP__

#include "../src/Diccionario.hpp"
#include <cassert>
#include <vector>
#include <string>

template<class T>
class Multiconjunto {
public:
    Multiconjunto();
    void agregar(T x);
    int ocurrencias(T x) const;

private:
    Diccionario<T, int> _elems;
};

template<class T>
Multiconjunto<T>::Multiconjunto(){};

template<class T>
void Multiconjunto<T>::agregar(T x){
    if (_elems.def(x)){
        int a = _elems.obtener(x) + 1;
        _elems.definir(x, a);
    } else {
        _elems.definir(x, 1);
    }
}

template<class T>
int Multiconjunto<T>::ocurrencias(T x) const {
    int res = 0;
    if (_elems.def(x)){
        res = _elems.obtener(x);
    }
    return res;
}

#endif /*__MULTICONJUNTO_HPP__*/