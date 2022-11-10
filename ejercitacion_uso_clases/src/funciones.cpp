#include <vector>
#include "algobot.h"
#include <string.h>

using namespace std;

// Ejercicio 1
bool estaEnRes (int n, vector<int> s){
    bool res = false;
    for (int i = 0; i < s.size(); i ++){
        if (n == s[i])
            res = true;
    }
    return res;
}

vector<int> quitar_repetidos(vector<int> s) {
    vector<int>res;
    for (int i = 0; i < s.size(); i ++){
        if (!estaEnRes(s[i], res))
            res.push_back(s[i]);
    }
    return res;
}

// Ejercicio 2
vector<int> quitar_repetidos_v2(vector<int> s) {
    set<int> set_a;
    for (int i = 0; i < s.size(); i ++){
        set_a.insert(s[i]);
    }
    vector<int> res (set_a.begin(), set_a.end());
    return res;
}

// Ejercicio 3
bool mismos_elementos(vector<int> a, vector<int> b) {
    bool res = false;
    set<int> set_a, set_b;
    for (int i = 0; i < a.size(); i ++){
        set_a.insert(a[i]);
    }
    for (int j = 0; j < b.size(); j ++){
        set_b.insert(b[j]);
    }
    if (set_a == set_b){
        res = true;
    }
    return res;
}

// Ejercicio 4
bool mismos_elementos_v2(vector<int> a, vector<int> b) {
    return mismos_elementos(a, b);
}

// Ejercicio 5
map<int, int> contar_apariciones(vector<int> s) {
    map<int, int> m;
    for (int i = 0; i < s.size(); i ++){
        int j = s[i];
        m[j] ++;
    }
    return m;
}

// Ejercicio 6
vector<int> filtrar_repetidos(vector<int> s) {
    map<int, int> m = contar_apariciones(s);
    vector<int> res;
    for (pair<int, int> p : m) {
        if (p.second == 1)
            res.push_back(p.first);
    }
    return res;
}

// Ejercicio 7
bool pertenece (int n, set<int> b){
    bool res = false;
    for (int m : b){
        if (m == n)
            res = true;
    }
    return res;
}

set<int> interseccion(set<int> a, set<int> b) {
    set<int> s;
    for (int n : a) {
        if (pertenece(n, b))
            s.insert(n);
    }
    return s;
}

// Ejercicio 8
map<int, set<int>> agrupar_por_unidades(vector<int> s) {
    map<int, set<int>> m;
    for (int i = 0; i < s.size(); i ++){
        int unidad = s[i] % 10;
        m[unidad].insert(s[i]);
    }
    return m;
}

// Ejercicio 9
vector<char> traducir(vector<pair<char, char>> tr, vector<char> str) {
    vector<char> res;
    for (int i = 0; i < str.size(); i ++){
        for (int j = 0; j < tr.size(); j ++){
            char c1 = tr[j].first;
            if (str[i] == c1){
                char c2 = tr[j].second;
                res.push_back(c2);
            }
        }
        if (res.size() < i + 1){
            res.push_back(str[i]);
        }
    }
    return res;
}

// Ejercicio 10
bool integrantes_repetidos(vector<Mail> s) {
    bool res = false;
    for (int i = 0; i < s.size(); i ++){
        for (int j = i + 1; j < s.size(); j ++){
            if (s[i].asunto() == s[j].asunto()){
                res = false;
            } else if (s[j].asunto().size() > 6 && s[i].asunto().substr(0, 6) == s[j].asunto().substr(7, 6)){
                res = true;
            } else if (s[i].asunto().size() > 6 && s[i].asunto().substr(7, 6) == s[j].asunto().substr(0, 6)){
                res = true;
            } else if (s[i].asunto().size() > 6 && s[j].asunto().size() > 6 && s[i].asunto().substr(7, 6) == s[j].asunto().substr(7, 6)){
                res = true;
            } else if (s[i].asunto() == s[j].asunto().substr(0, 6)){
                res = true;
            }
        }
    }
    return res;
}

// Ejercicio 11
map<set<LU>, Mail> entregas_finales(vector<Mail> s) {
    return map<set<LU>, Mail>();
}
