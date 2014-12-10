#include "Evaluador.h"
#include <iostream>
using namespace std;

//Devuelve la suma de a (dado) y b (dado)
int sumar(int a, int b)
{
    return a+b;// devuelve el valor de la suma de las dos variables
}

//Devuelve la resta de a (dado) y b (dado)
int restar(int a, int b)
{
    return a-b;// devuelve el valor de la resta de las dos variables
}

//Devuelve la multiplicacion de a (dado) y b (dado)
int multiplicar(int a, int b)
{
    return a*b;// devuelve el valor de la multiplicacion de las dos variables
}

//Devuelve la division de a (dado) y b (dado)
int dividir(int a, int b)
{
    return a/b;// devuelve el valor de la division de las dos variables
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{
    if (a>b)// se evalua si la variable a es mayor que la variable b
    return a;//si la condicion es verdadera se devuelve la variable a
    else//sino
    return b;//si la condicion no se cumple se devuelve la variable b
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
     if (a<b)// se evalua si la variable a es menor que la variable b
    return a;//si la condicion es verdadera se devuelve la variable a
    else//sino
    return b;//si la condicion no se cumple se devuelve la variable b
}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
    if (a>b && a>c)// se evalua si la variable a es mayor que las variables b y c
    return a;//si la condicion se cumple devuelve la variable a
    else//sino
    if (b>a && b>c)// se evalua si la variable b es mayor que las variables a y c
    return b;//si la condicion se cumple devuelve la variable b
    else//sino
    if (c>b && c>a)// se evalua si la variable c es mayor que las variables b y a
    return c;
}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{
    arreglo[posicion]=valor;//se manda la variable posicion como parametro y se asigna el valor que tiene la variable valor

  }

//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{
    return arreglo[posicion];//devuelve el valor del arreglo en el indice posicion
}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
int getMayor(int arreglo[], int tamano)
{

   		int mayor=0;//se declara la vaiable que usaremos para evaluar

		for (int i=0; i<tamano; i++ ){//se inicia el ciclo
			if (arreglo[i]>mayor){//se evalua si el arreglo en la posicion i es mayor que la variable mayor
				mayor=arreglo[i];//se igualan la  variable con el valor del arreglo en la posicion i
			}
		}
		return mayor;//devuelve el valor de la variable mayor
		}


//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano){

		int menor=999;//se declara la vaiable que usaremos para evaluar

		for (int i=0; i<tamano; i++ ){//se inicia el ciclo
			if (arreglo[i]<menor){//se evalua si el arreglo en la posicion i es menor que la variable menor
				menor=arreglo[i];//se igualan la  variable con el valor del arreglo en la posicion i
			}
		}
		return menor;//devuelve el valor de la variable mayor
}




//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
int getPromedio(int arreglo[], int tamano)
{

		int promedio=0;// se declara la variable que se usara para evaluar

		for (int  i=0;  i<arreglo[tamano]; i++){//se inicia el ciclo
		promedio=promedio+arreglo[i];// se estable el calculo a realizar en la variable promedio
		}
		return promedio/arreglo[tamano];//devuelve el valor del promedio entre el tamaño del arreglo

    return -1;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
