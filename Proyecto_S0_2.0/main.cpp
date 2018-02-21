#include <iostream>
#include "Lista.h"
#include <conio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    Lista l;
    l.inicializar();

    int cantidad = 0;
    int opc=0;

    do
    {
        cout<<"\n";
        cout<<"\t<<Simulador SO>>";
        cout<<"\n";
        cout<<"\nEscoja una opcion:";
        cout<<"\n1.Configuracion de Procesos";
        cout<<"\n2.Definicion de Lista de Ejecucion";
        cout<<"\n3.Ver procesos";
        cout<<"\n4.Salir";
        cout<<"\nOpcion:";
        cin>>opc;
        cout<<"\n";

        if(opc==1)
        {
            system("cls");
            cout<<"\t<<Configuracion de Procesos>>";
            cout<<"\n";
            cout<<"\nIngrese la cantidad de procesos: ";
            cin>>cantidad;

            for(int i=0; i<= (cantidad-1); i++)
            {
                cout<<"\n"<<i;
                string u_nombre;
                int u_prioridad;
                int u_tiempo;

                cout<<"\nIngrese el nombre del proceso: ";
                cin>>u_nombre;
                cout<<"\nIngrese el nivel de prioridad del proceso: ";
                cin>>u_prioridad;
                cout<<"\nIngrese el tiempo del preceso: ";
                cin>>u_tiempo;
                cout<<""<<endl;

                Nodo * n = new Nodo(i, u_nombre, u_prioridad, u_tiempo);
                l.insertar(n);
                }
                opc==0;


        };
        if(opc==2)
        {
            cout<<"\t<<Definicion de la Lista de Ejecucion>>";
            cout<<"\n";
            l.mostrar();
            opc==0;


        };

        if(opc==3)
        {
            l.mostrar();
            opc==0;
        };



        if(opc==4)
        {
            return 0;
            opc==0;
        };

    }
    while(opc != 4);

}
