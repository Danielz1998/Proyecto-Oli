#include "Lista.h"

void Lista::inicializar()
{
    primernodo = NULL;
    ultimonodo = NULL;
}

bool Lista::vacia()
{
    if (primernodo == NULL && ultimonodo == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int Lista::tamano()
{
    int cont = 0;

    Nodo * aux;
    aux = primernodo;
    while(aux != NULL)
    {
        cont++;
        aux = aux -> sig;
    }
    return cont;
}

void Lista::mostrar()
{
    Nodo *aux;
    aux = primernodo;
    cout<<"\nProcesos...";

    while(aux)
    {
        cout<<"\nNombre: "<<aux->nombre;
        cout<<"\nPrioridad: "<<aux->prioridad;
        cout<<"\nTiempo de Ejecucion: "<<aux->tiempo;
        cout<<"\nTiempo de Llegada: "<<aux->tllegada;
        cout<<"\n";
        cout<<"\n#########################";
        cout<<"\n";
        aux = aux ->sig;
    }
}

void Lista::insertar(Nodo * nuevo)
{
    if(vacia())
    {
        primernodo = nuevo;
        ultimonodo = nuevo;
    }
    else
    {
        ultimonodo -> sig = nuevo;
        nuevo -> ant = ultimonodo;
        ultimonodo = nuevo;
    }
}
