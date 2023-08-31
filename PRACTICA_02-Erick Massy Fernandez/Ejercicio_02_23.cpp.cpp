// Materia: Programación I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creación: 24/08/2023

// Fecha modificación: 31/08/2023

// Número de ejericio: 23

// Problema planteado: Dimension de vector

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Dimension: ";
	cin>>n;
	int v1[n],v2[n],v3[2*n];
	for (int i=0;i<n;i++)
	{
		cout<<"C"<<i+1<<"= ";
		cin>>v1[i];
	}
	cout<<"-Vector 2-"<<endl;
	for (int j=0;j<n;j++)
	{
		cout<<"C"<<j+1<<"= ";
		cin>>v2[j];
	}
	for (int l=0;l<n;l++)
		v3[l]=v1[l];
	for (int k=n;k<(2*n);k++)
		v3[k]=v2[k-n];
	for (int q=0;q<(2*n);q++)
		cout<<v3[q]<<" ";
	return 0;
}
    




