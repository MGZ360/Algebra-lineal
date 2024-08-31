#include <iostream>
#include <conio.h>
#include <vector>
#include <cstdlib> 
#include <time.h>

using namespace std;

int main()
{
	int i = 0, j = 0, k = 0, filas1 = 0, columnas1 = 0, filas2 = 0, columnas2 = 0, dato = 0;

	srand(time(NULL));

	cout << "Matriz A" << endl;

	cout << "digite el nuemro de filas: " << endl;
	cin >> filas1;

	cout << "Digitre el nuemro de columnas: " << endl;
	cin >> columnas1;

	cout << "Matriz B" << endl;

	cout << "digite el nuemro de filas: " << endl;
	cin >> filas2;

	cout << "Digitre el nuemro de columnas: " << endl;
	cin >> columnas2;

	if (columnas1 != filas2) {
		cout << "El número de columnas de la primera matriz debe ser igual al número de filas de la segunda matriz." << endl;
		return 1;
	}

	vector<vector<int>> matriz1(filas1, vector<int>(columnas1));
	vector<vector<int>> matriz2(filas2, vector<int>(columnas2));
	vector<vector<int>> matriz3(filas1, vector<int>(columnas2, 0));

	for (i = 0; i < columnas1; i++)
	{
		for (j = 0; j < filas1; j++)
		{
			dato = 2 + rand() % (30); //numeros aleatorios
			matriz1[i][j] = dato;
		}
	}

	for (i = 0; i < filas2; i++)
	{
		for (j = 0; j < columnas2; j++)
		{
			dato = 2 + rand() % (30); //numeros aleatorios
			matriz2[i][j] = dato;
		}
	}

	cout << "\n";

	for (i = 0; i < filas1; i++)
	{
		for (j = 0; j < columnas1; j++)
		{
			cout << matriz1[i][j] << " ";

		}
		cout << "\n";
	}

	cout << "\n";

	for (i = 0; i < filas2; i++)
	{
		for (j = 0; j < columnas2; j++)
		{
			cout << matriz2[i][j] << " ";

		}
		cout << "\n";
	}

	cout << "\n";


	for (i = 0; i < filas1; i++)
	{
		for (j = 0; j < columnas2; j++)
		{
			for (k = 0; k < columnas1; k++)
			{

				matriz3[i][j] = matriz3[i][j] + (matriz1[i][k] * matriz2[k][j]);

			}

		}

	}

	for (i = 0; i < filas1; i++)
	{
		for (j = 0; j < columnas2; j++)
		{
			cout << matriz3[i][j] << " ";
		}
		cout << "\n";
	}

	cout << endl;

	return 0;
}