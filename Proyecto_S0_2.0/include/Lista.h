#ifndef LISTA_H
#define LISTA_H
#include <iostream>

using namespace std;

class Nodo
{
    public:
    int tllegada;
    string nombre;
    int prioridad;
    int tiempo;

    Nodo * sig;
    Nodo * ant;

        Nodo (int ctllegada, string cnombre, int cprioridad, int ctiempo)
    {
        tllegada = ctllegada;
        nombre = cnombre;
        prioridad = cprioridad;
        tiempo = ctiempo;
    }

    friend class Lista;
};

class Lista
{
    Nodo * primernodo;
    Nodo * ultimonodo;

public:
    void inicializar();
    bool vacia();
    int tamano();
    void mostrar();
    void insertar(Nodo * nuevo);



};

#endif // LISTA_H
