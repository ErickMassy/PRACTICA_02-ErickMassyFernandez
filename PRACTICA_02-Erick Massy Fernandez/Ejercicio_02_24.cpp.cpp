// Materia: Programación I, Paralelo 1

// Autor: Erick G. Massy Fernandez

// Fecha creación: 24/08/2023

// Fecha modificación: 31/08/2023

// Número de ejericio: 24

// Problema planteado: Transformador de Mayusculas a Minusculas

#include <iostream>
using namespace std;
int main()
{
	char v[30],may[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char min[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	cin>>v;
	int i=0;
	while (v[i]!='\0')
	{
		for (int j=0;j<26;j++)
		{
			if (v[i]==may[j])
				cout<<min[j];
		}
		i++;
	}
	return 0;
}
    




