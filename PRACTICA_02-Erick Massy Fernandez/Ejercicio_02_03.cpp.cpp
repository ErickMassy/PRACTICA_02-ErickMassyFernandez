// Materia: Programación I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creación: 24/08/2023

// Fecha modificación: 31/08/2023

// Número de ejericio: 3

// Problema planteado: Detector de numeros primos para vectores

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	int v[50],n,ct=0,a,b;
	cout<<"A: ";
	cin>>a;
	cout<<"B: ";
	cin>>b;
	for (int i=0;i<50;i++)
	{
		v[i]=a+(rand()%(b-a+1));
	}
	for (int j=0;j<50;j++)
	{
		int c=0;
		for (int l=1;l<=v[j];l++)
		{
			if ((v[j]%l)==0)
				c++;
		}
		if (c==2)
			ct++;
	}
	cout<<"Hay "<<ct++<<" numeros primos"<<endl;
	return 0;
}



