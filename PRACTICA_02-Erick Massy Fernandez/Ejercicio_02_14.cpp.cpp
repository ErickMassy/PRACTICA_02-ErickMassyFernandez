// Materia: Programación I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creación: 24/08/2023

// Fecha modificación: 31/08/2023

// Número de ejericio: 14

// Problema planteado: Problema de Capicuas

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;
int main()
{
	srand(time(NULL));
	int n,m,d;
	cout<<"N: ";
	cin>>n;
	cout<<"M: ";
	cin>>m;
	d=m-n;
	int v1[d],v2[d],r,num,l=0;
	for (int i=0;i<d;i++)
	{
		int e=0,numN=0;
		r=n+(rand()&(m-n+1));
		num=r;
		while (num>=pow(10,e))
			e++;
		for (int j=1;j<=e;j++)
		{
			numN+=(num&10)*pow(10,e-j);
			num=num/10;
		}
		if (numN==r)
		{
			cout<<r<<" ";
			v2[l]=r;
			l++;
		}
		v1[i]=r;
	}
	cout<<" "<<endl;
	for (int a=0;a<d;a++)
		cout<<v1[a]<<" ";
	return 0;
}




