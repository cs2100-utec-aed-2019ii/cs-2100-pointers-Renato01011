#include <iostream>

using namespace std;

int main() {
    
	//Pregunta 1
	//Respuesta : Se imprime 1 2 3 4 5 6 7 8 9 10

	//Pregunta 2
	//Respuesta : Se imprime 7 5 10

	//Pregunta 3
	//Respuesta : Se imprime T 
	//						 L
	//						 T

	//Pregunta 4
	//Respuesta : La opcion 4 actualiza en valor de i

	//Pregunta 5
	//Respuesta : Si da error, ya que no se puede asignar una variable de un tipo a un puntero de una variable de tipo diferente

	//Pregunta 6
	//Respuesta

	/* Funcion :
	void swap(int* x, int* y) {
		int temp = *x;
		*x = *y;
		*y = temp;
	}
	*/
	/* Implementacion :
	int a = 5, b = 6, c = 7;
	swap(a, b);
	swap(a, c);
	cout << a << ' ' << b << ' ' << c << endl;
	*/

	//Pregunta 7
	//Respuesta : Se imprime 2 8
	
	//Pregunta 8
	//Respuesta : Se imprime 0 
	//						 8
	
	//Pregunta 9 
	//Respuesta : Se imprime 8 15

	//Pregunta 10
	//Respuesta : Se imprime 8

	//Pregunta 11
	//Respuesta :
	/*
	int a;
	int* ptr = &a;
	cout << *ptr << ' ' << ptr << ' ' << &ptr << endl;
	*/

	//Pregunta 12
	//Respuesta : Se imprime 13 13 13
	
	//Pregunta 13
	//Respuesta : Se imprime 5 6 7
	
	//Pregunta 14
	//Respuesta : Se imprime 4 1

	//Pregunta 15
	//Respuesta :
	/*
	int a = 5, b = 6;
	int* pt1 = &a;
	int* pt2 = &b;
	int* pt3 = new int;
	*pt3 = *pt1 + *pt2;
	cout << *pt3;
	*/

	//Pregunta 16
	//Respuesta : Se imprime 19

	//Pregunta 17
	//Respuesta : Nada porque el puntero no estaba inicializado

	//Pregunta 18
	//Respuesta : Se imprime 18
	
	//Pregunta 19
	//Respuesta : Lo que hace es recibir un string y poner '\O'	al final de el y retornarlo

	//Pregunta 20
	//Respuesta : Lo que hace es recibir un string y retornalo sin comas
	
	return 0;
}
