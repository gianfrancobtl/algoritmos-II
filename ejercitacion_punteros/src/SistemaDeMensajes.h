#ifndef SISTEMADEMENSAJES_H
#define SISTEMADEMENSAJES_H

#include "ConexionJugador.h"
#include <string>

#if EJ == 4 || EJ == 5
#include "Proxy.h"
#elif EJ == 6
#include "Proxy2.h"
#endif

using namespace std;

class SistemaDeMensajes {
  public:
    SistemaDeMensajes();
    ~SistemaDeMensajes();

    bool registrado(int id) const;
    string ipJugador(int id) const;
    Proxy* obtenerProxy(int id);

    void registrarJugador(int id, string ip);
    void desregistrarJugador(int);
    void enviarMensaje(int id, string mensaje);

  private:
    ConexionJugador* _conns[4];
    Proxy* _proxys[4];
};

#endif
