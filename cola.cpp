#include<iostream>
#include<conio.h>
#include <stdlib.h>
struct Nodo
{
	int dato;
	Nodo *siguiente;
};
void insertarCola (Nodo *&,Nodo *&,int);
bool cola_vacia(Nodo *);
int main ()
{
	Nodo *frente=NULL;
	Nodo *fin=NULL;
	int dato;
	cout<<"dijite un numero: ";
	cin>>dato;
	insertar dato (frente,fin,dato);
	getch();
}
void insertarCola (Nodo *&frente,Nodo *&fin,int n)
{
	Nodo *nuevo_nodo= new Nodo ();
	nuevo_nodo ->dato=n;
	nuevo_nodo -> siguiente = NULL;
	if(cola_vacia(frente))
	{
		frente= nuevo_nodo;
	}
	else
	{
		fin ->siguiente = nuevo_nodo;
	}
	fin= nuevo_Nodo
	cout<<"elemento"<<n<<"insertando cola correctamente\n";
}
bool cola_vacia (Nodo *frente)
{
	if (frente==NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}
