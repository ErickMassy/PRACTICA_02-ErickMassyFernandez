// Materia: Programación I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creación: 24/08/2023

// Fecha modificación: 31/08/2023

// Número de ejericio: 8

// Problema planteado: Medidor de ventas acorde al mes

#include <iostream>
using namespace std;
int main()
{
	char mes[]={'Enero','Febrero','Marzo','Abril','Mayo','Junio','Julio','Agosto','Septiembre','Octubre','Noviembre','Diciembre'};
	int Nvent,n[12],max=-1,ar,tv=0;
	for (int i=0;i<12;i++)
	{
		cout<<"Ventas de mes "<<i;
		cout<<": ";
		cin>>n[i];
		tv+=n[i];
	}
	for (int j=0;j<12;j++)
	{
		if (max<n[j])
		{
			max=n[j];
			ar=j;
		}
	}
	cout<<"En el mes "<<ar<<" se dieron las ventas maximas"<<endl;
	cout<<"Las ventas maximas es de "<<max<<endl;
	cout<<"Las ventas totales son de "<<tv<<endl;
	return 0;
}




