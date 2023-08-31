// Materia: Programación I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creación: 24/08/2023

// Fecha modificación: 31/08/2023

// Número de ejericio: 12

// Problema planteado: Problema de Minerales

#include <iostream>
using namespace std;
int main()
{
	string m[]={"SN","SB","AU","PT","AG","CU"},nom;
	float p[]={998.000,876.500,786.670,636.143,135.567,109.412};
	cout<<"Nombre del mineral: ";
	cin>>nom;
	for (int i=0;i<6;i++)
	{
		if (nom==m[i])
			cout<<"Su produccion es de "<<p[i]<<endl;
	}
	return 0;
}





