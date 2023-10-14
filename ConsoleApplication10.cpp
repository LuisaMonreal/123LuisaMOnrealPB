/*
			EJEMPLO PARA PRIMER AVANCE 

			Crea un Programa qye cumpla con lo siguiente
			Contenga un menu de opciones que guarde la informacion de los alumnos 
			Matricula // no se puede modificar
			Nombre completo // no se puede modificar
			Calificacion 1 avance
			Calificacion 2 avance
			Calificacion 3 avance
			Calificacion Final  // se calcula automaticamente
			 El menu de opciones debere contener lo siguiente
			 1.-Alta
			 2.-Baja
			 3.-Cambios
			 4.-Lista de Alumnos
			 5.-Salir 
			
**En la lista de alumnos se deberan de mostrar los alumnois de baja con una leyenda de "esta alumno esta dado de BAJA.
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>



using namespace std;

struct UANL
{
    string NombreAlumno;
    int Matricula;
    float C1, C2, C3, CP;
    int BAJA;
};

int main()
{
    //Creacion de arreglo 
    UANL FCFM[2];
    //variable a comparar
    int op;
    do
    {
        cout << "ingrese la opcion deseada" << endl << "1.-Alta" << endl << "2.-Baja" << endl << "3.-Modificar" << endl << "4.-Lista de Alumnos" << endl << "5.-Salir" << endl;
        cin >> op;

        switch (op)
        {
        case 1: //ALTA
            for (int i = 0; i < 2; i++)
            {
                cout << "ingrese  Nombre del alumno:" << endl;
                cin.ignore();
                getline(cin, FCFM[i].NombreAlumno);
                cout << "ingrese la Matricula" << endl;
                cin >> FCFM[i].Matricula;
                cout << "Ingrese la Cal1" << endl;
                cin >> FCFM[i].C1;
                cout << "Ingrese la Cal2" << endl;
                cin >> FCFM[i].C2;
                cout << "Ingrese la Cal3" << endl;
                cin >> FCFM[i].C3;
                FCFM[i].CP = (FCFM[i].C1 + FCFM[i].C2 + FCFM[i].C3) / 3;
            }
            break;

        case 2: //BAJA
            break;

        case 3: //Modificar
            break;

        case 4://Lista

            for (int i = 0; i < 2; i++)
            {

                cout << FCFM[i].Matricula << endl << FCFM[i].NombreAlumno << endl << FCFM[i].CP;
            }
            break;

        case 5:
            exit(1);
            break;
        default:
            op = 6;
            cout << "la opcion es incorrecta" << endl;
            break;
        }
    } while (op >= 1 || op <= 5);

    system("pause");
}
