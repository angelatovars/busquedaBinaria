#include <iostream>
#include <string>
using namespace std;

int busquedaBinaria(int arr[], int inicio, int fin, int valorBuscado)
{
	if (fin >= inicio)
	{
		int medio = inicio + (fin - inicio) / 2;

		if (arr[medio] == valorBuscado)
			return medio;

		if (arr[medio] > valorBuscado)
			return busquedaBinaria(arr, inicio, medio - 1, valorBuscado);

		return busquedaBinaria(arr, medio + 1, fin, valorBuscado);
	}
	
	 return -1;
}

void imprimirArreglo(int arr[], int i)
{
	cout << "Arreglo " << i << ": ";
	for (int b = 0; b < 15; b++)
	{
		cout << " " << arr[b];
	}

	cout << endl;
	
}

int main()
{
	int numeroBuscar;
	string accion;

	int arreglo1[15] = {2, 4, 7, 11, 15, 18, 19, 21, 23, 24, 29, 30, 56, 80};

	int arreglo2[15] = {3, 5, 6, 12, 13, 17, 20, 21, 23, 24, 29, 32, 46, 55};

	int arreglo3[15] = {0, 9, 10, 14, 22, 28, 33, 41, 43, 44, 59, 60, 66, 100};

	int valorBuscado1 = 10;

	int valorBuscado2 = 21;

	int valorBuscado3 = 18;

	imprimirArreglo(arreglo1, 1);
	imprimirArreglo(arreglo2, 2);
	imprimirArreglo(arreglo3, 3);

	do
	{
		
		cout << "Inserte un número para buscar : ";
	cin >> numeroBuscar;
	cout << endl;
	
		int res1 = busquedaBinaria(arreglo1, 2, 80, numeroBuscar);

		int res2 = busquedaBinaria(arreglo2, 3, 55, numeroBuscar);

		int res3 = busquedaBinaria(arreglo3, 0, 100, numeroBuscar);

		if (res1)
		{
			cout << "El número " << numeroBuscar << " ";
			cout << " está en el arreglo 1." << endl;
		}else { cout<<endl;}

		if (res2 > -1)
		{
			cout << "El número " << numeroBuscar << " ";
			cout << " está en el arreglo 2." << endl;
		}else { cout<<endl;}

		if (res3 > -1)
		{
			cout << "El número " << numeroBuscar << " ";
			cout << " está en el arreglo 3." << endl;
		}else { cout<<endl;}

		cout << "¿Desea buscar otro número? s(sí) / n(no) : ";
		cin >> accion;
		cout << endl;

		if (accion == "n")
		{
			break;
		}

	} while (accion == "s");

	return 0;
}