// Materia: Programación I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creación: 24/08/2023

// Fecha modificación: 31/08/2023

// Número de ejericio: 25

// Problema planteado: Vector Aleatorio del 1 al 100

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	int n,min=1,max=100,minr,maxr;
	float s=0;
	srand(time(NULL));
	cout<<"Cuantos elementos: ";
	cin>>n;
	int v[n];
	for (int i=0;i<n;i++)
	{
		v[i]=min+(rand()%(max-min+1));
		cout<<v[i]<<" ";
		s+=v[i];
	}
	cout<<" "<<endl;
	for (int j=0;j<n;j++)
	{
		if (v[j]<max)
			max=v[j];
		if (v[j]>min)
			min=v[j];
	}
	cout<<"El minimo elemento es: "<<max<<endl;
	cout<<"El maximo elemento es: "<<min<<endl;
	cout<<"El promedio es: "<<s/n<<endl;
	return 0;
}
    




