#include "SistemaDeMensajes.h"

//Generador
SistemaDeMensajes::SistemaDeMensajes() {
    for(auto & _conn : _conns) {
        _conn = nullptr;
    }
    for(auto & _proxy : _proxys) {
        _proxy = nullptr;
    }
}

void SistemaDeMensajes::registrarJugador(int id, string ip){
    ConexionJugador* jugador = new ConexionJugador(ip);
    _conns[id] = jugador;
}

void SistemaDeMensajes::enviarMensaje(int id, string mensaje){
    _conns[id]->enviarMensaje(mensaje);
}

bool SistemaDeMensajes::registrado(int id) const{
    bool res = true;
    if(_conns[id] == nullptr){
        res = false;
    }
    return res;
}

string SistemaDeMensajes::ipJugador(int id) const{
    string ip = _conns[id]->ip();
    return ip;
}

void SistemaDeMensajes::desregistrarJugador(int id){
    _conns[id] = nullptr;
}

Proxy* SistemaDeMensajes::obtenerProxy(int id){
    Proxy* proxy = new Proxy(_conns[id]);
    return proxy;
}

SistemaDeMensajes::~SistemaDeMensajes(){
    for(auto & _conn : _conns) {
        delete _conn;
    }
    for(auto & _proxy : _proxys) {
        delete _proxy;
    }
}
