// Ejercicio 1: Pasar a templates
template<class T>
T cuadrado(T x) {
    return x * x;
}

// Ejercicio 2: Pasar a templates
template<class Contenedor, class Elem>
bool contiene(Contenedor s, Elem c) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) {
            return true;
        }
    }
    return false;
}

// Ejercicio 3
template<class Contenedor>
bool esPrefijo(Contenedor a, Contenedor b){
    bool res = true;
    if (a.size() < b.size()){
        for (int i = 0; i < a.size(); i++){
            if (a[i] != b[i]){
                res = false;
            }
        }
    } else {
        res = false;
    }
    return res;
}

// Ejercicio 4
template<class Contenedor, class Elem>
Elem maximo(Contenedor c){
    Elem max = c[0];
    for (int i = 1; i < c.size(); i ++){
        if (c[i] > max){
            max = c[i];
        }
    }
    return max;
}