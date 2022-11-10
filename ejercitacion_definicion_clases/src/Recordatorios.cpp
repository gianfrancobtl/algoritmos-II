#include <iostream>
#include "list"

using namespace std;

using uint = unsigned int;

// Pre: 0 <= mes < 12
uint dias_en_mes(uint mes) {
    uint dias[] = {
        // ene, feb, mar, abr, may, jun
        31, 28, 31, 30, 31, 30,
        // jul, ago, sep, oct, nov, dic
        31, 31, 30, 31, 30, 31
    };
    return dias[mes - 1];
}

// Ejercicio 7, 8, 9 y 10

// Clase Fecha
class Fecha {
  public:
    Fecha(int mes, int dia);

    int mes() const;
    int dia() const;
    void incrementar_dia();
    bool operator == (Fecha o);
    bool operator<(Fecha f);

  private:
    int mes_;
    int dia_;
};

Fecha::Fecha(int mes, int dia) : mes_(mes), dia_(dia) {}

int Fecha::mes() const {
    return mes_;
}

int Fecha::dia() const {
    return dia_;
}

void Fecha::incrementar_dia() {
    if (dias_en_mes(mes_) == dia_) {
        mes_ += 1;
        dia_ = 1;
    } else {
        dia_ += 1;
    }
}

ostream& operator<<(ostream& os, Fecha f) {
    os << f.dia() << "/" << f.mes();
    return os;
}

bool Fecha::operator==(Fecha o) {
    bool igual_dia = dia() == o.dia();
    bool igual_mes = mes() == o.mes();
    return igual_dia && igual_mes;
}

bool Fecha::operator<(Fecha f){
    bool res = false;
    if (mes() < f.mes()){
        res = true;
    } else if (dia() < f.dia()){
        res = true;
    }
    return res;
}

// Clase Horario
class Horario{
    public:
        Horario(uint hora, uint min);
        uint hora() const;
        uint min() const;
        bool operator==(Horario h);
        bool operator<(Horario h);
        friend ostream& operator<<(ostream& os, Horario h);

    private:
        uint hora_;
        uint min_;
};

Horario::Horario(uint hora, uint min) : hora_(hora), min_(min) {}

uint Horario::hora() const {
    return hora_;
}

uint Horario::min() const {
    return min_;
}

ostream& operator<<(ostream& os, Horario h) {
    os << h.hora() << ":" << h.min();
    return os;
}

bool Horario::operator==(Horario h) {
    bool igual_hora = this->hora() == h.hora();
    bool igual_min = this->min() == h.min();
    return igual_hora && igual_min;
}

bool Horario::operator<(Horario h){
    bool res = false;
    if (hora() < h.hora()){
        res = true;
    } else if (hora() == h.hora() && min() < h.min()){
        res = true;
    }
    return res;
}

// Ejercicio 13
class Recordatorio{
    public:
        Recordatorio(Fecha fecha, Horario horario, string mensaje);
        string mensaje();
        Fecha fecha() const;
        Horario horario() const;
        bool operator<(Recordatorio r) const;

    private:
        Fecha f_;
        Horario h_;
        string mensaje_;
};

Recordatorio::Recordatorio(Fecha fecha, Horario horario, string mensaje) : f_(fecha.mes(), fecha.dia()), h_(horario.hora(), horario.min()), mensaje_(mensaje){}

string Recordatorio::mensaje() {
    return mensaje_;
}

Fecha Recordatorio::fecha() const {
    return Fecha(f_.mes(), f_.dia());
}

Horario Recordatorio::horario() const {
    return Horario(h_.hora(), h_.min());
}

ostream& operator<<(ostream& os, Recordatorio r) {
    os << r.mensaje() << " @ " << r.fecha() << " " << r.horario();
    return os;
}

bool Recordatorio::operator<(const Recordatorio r) const{
    bool res = true;
    if (r.fecha() < fecha()) {
        res = false;
    } else if (r.horario() < horario()) {
        res = false;
    }
    return res;
}

// Ejercicio 14
class Agenda {
    public:
        list<Recordatorio> recordatorios_de_hoy();
        Fecha hoy();

        Agenda(Fecha fecha_inicial);
        void agregar_recordatorio(Recordatorio rec);
        void incrementar_dia();

    private:
        list<Recordatorio> recordatorios_de_hoy_;
        Fecha hoy_;
};

Agenda::Agenda(Fecha fecha_inicial) : hoy_(fecha_inicial.mes(), fecha_inicial.dia()), recordatorios_de_hoy_() {}

list<Recordatorio> Agenda::recordatorios_de_hoy() {
    return recordatorios_de_hoy_;
}

Fecha Agenda::hoy() {
    return hoy_;
}

void Agenda::agregar_recordatorio(Recordatorio rec) {
    recordatorios_de_hoy_.push_back(rec);
}

void Agenda::incrementar_dia() {
    hoy_.incrementar_dia();
}

ostream& operator<<(ostream& os, Agenda a) {
    list<Recordatorio> recordatorios = a.recordatorios_de_hoy();
    recordatorios.sort();
    os << a.hoy() << endl;
    if (a.hoy() == recordatorios.front().fecha()){
        os << "=====" << endl;
        for (Recordatorio& r : recordatorios){
            os << r << endl;
        }
    } else {
        os << "=====" << endl;
    }
    return os;
}
