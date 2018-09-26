#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void pedirArreglo();
void mostrarArreglo();
void recorrer();
int numArreglo, *Arreglo, *ptr;

int main(){
	pedirArreglo();
	mostrarArreglo();
	delete[] Arreglo;
	getch();
	return 0;
}//fin de main
void pedirArreglo(){
	cout<<"Ingrese el numero digitos---> "; cin>>numArreglo;
	Arreglo=new int[numArreglo];
	for(int i=0; i<numArreglo; i++)
	{
		cout<<"Ingrese un numero---> "; cin>>Arreglo[i];
	}
}//fin pedir
void mostrarArreglo(){
	ptr=Arreglo;
	cout<<"\n Imprimiendo Arreglo..."<<endl;
	for(int i=0 ; i<numArreglo; i++)
	{
		cout<<*ptr++<<endl;
	}
}//fin mostrar
