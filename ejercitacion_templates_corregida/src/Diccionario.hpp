#ifndef __DICCIONARIO_HPP__
#define __DICCIONARIO_HPP__

#include <cassert>
#include <vector>
#include <string>

template<class Clave, class Valor>
class Diccionario {
public:
    Diccionario();
    void definir(Clave k, Valor v);
    bool def(Clave k) const;
    Valor obtener(Clave k) const;
    std::vector<Clave> claves() const;
    Valor findMinPos (std::vector<int> a, int i, int j) const;
    void swap(std::vector<int> a, int i, int menor) const;

private:

    struct Asociacion {
        Asociacion(Clave k, Valor v);
        Clave clave;
        Valor valor;
    };
    std::vector<Asociacion> _asociaciones;
};

template<class Clave, class Valor>
Diccionario<Clave, Valor>::Diccionario() {
}

template<class Clave, class Valor>
Diccionario<Clave, Valor>::Asociacion::Asociacion(Clave k, Valor v) : clave(k), valor(v) {
}

template<class Clave, class Valor>
void Diccionario<Clave, Valor>::definir(Clave k, Valor v) {
    for (unsigned int i = 0; i < _asociaciones.size(); i++) {
        if (_asociaciones[i].clave == k) {
            _asociaciones[i].valor = v;
            return;
        }
    }
    _asociaciones.push_back(Asociacion(k, v));
}

template<class Clave, class Valor>
bool Diccionario<Clave, Valor>::def(Clave k) const {
    for (unsigned int i = 0; i < _asociaciones.size(); i++) {
        if (_asociaciones[i].clave == k) {
            return true;
        }
    }
    return false;
}

template<class Clave, class Valor>
Valor Diccionario<Clave, Valor>::obtener(Clave k) const {
    for (unsigned int i = 0; i < _asociaciones.size(); i++) {
        if (_asociaciones[i].clave == k) {
            return _asociaciones[i].valor;
        }
    }
    assert(false);
}

template<class Clave, class Valor>
Valor Diccionario<Clave,Valor>::findMinPos (std::vector<int> a, int i, int j) const{
    Valor menor = i;
    for (int k = i; k < j; k ++){
        if (a[k] < menor){
            menor = k;
        }
    }
    return menor;
}

template<class Clave, class Valor>
void Diccionario<Clave,Valor>::swap(std::vector<int> a, int i, int menor) const{
    int aux = a[i];
    a[i] = a[menor];
    a[menor] = aux;
}

template<class Clave, class Valor>
std::vector<Clave> Diccionario<Clave,Valor>::claves() const {
    std::vector<Clave> claves = std::vector<Clave>(0);
    for (int i = 0; i < _asociaciones.size(); i ++){
        claves.push_back(_asociaciones[i].clave);
    }
    for (int i = 0; i < claves.size(); i ++){
        Valor menor = findMinPos(claves, i, claves.size());
        swap(claves, i, menor);
    }
    return claves;
}

#endif /*__DICCIONARIO_HPP__*/
