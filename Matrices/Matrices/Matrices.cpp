#include <iostream>

using namespace std;

int main()
{
	int A[3][3] = { 0 }, B[3][3] = { 0 }, C[3][3] = { 0 }, i = 0, j = 0, k = 0;

	cout << "Matriz A" << endl;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << "Incertar nuemro: " << endl;
			cin >> A[i][j];

		}

	}

	cout << "\n";

	cout << "Matriz B" << endl;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << "Incertar nuemro: " << endl;
			cin >> B[i][j];

		}

	}

	cout << "Matriz A" << endl,

		cout << "\n";

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << A[i][j] << " ";

		}
		cout << "\n";
	}

	cout << "\n";

	cout << "Matriz B" << endl;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << B[i][j] << " ";

		}
		cout << "\n";
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 3; k++)
			{

				C[i][j] = C[i][j] + (A[i][k] * B[k][j]);

			}

		}

	}

	cout << "\n";

	cout << "Matriz C = A x B" << endl;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << C[i][j] << " ";

		}
		cout << "\n";
	}

	return 0;
}
