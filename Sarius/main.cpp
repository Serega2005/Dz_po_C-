#include<iostream>
using namespace std;
const int m = 3;
const int n = 3;

void FillRand(int arr[m][n], const int m, const int n);
void Print(int arr[m][n], const int m, const int n);

void main()
{
	setlocale(LC_ALL, "");
	int A[n][n];
	FillRand(A, n, n);
	Print(A, n, n);

	int B[n][n * 2]{}; //расширенная матрица
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			B[i][j] = B[i][j + n] = A[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			cout << B[i][j] << "\t";
		}
		cout << endl;
	}

	//вычисление определителя:
	//1) вычисление главной диагонали:
	int multiply;
	int sum_diag_main = 0;
	for (int i = 0; i < n; i++)
	{
		multiply = 1;
		for (int j = 0; j < n; j++)
		{
			multiply *= B[j][j + i];
		}
		sum_diag_main += multiply;
	}
	cout << "сумма произведения элементов главной диагонали: " << sum_diag_main << endl;			

	//2) вычисление вспомогательной диагонали:

	int sum_diag_aux = 0;
	for (int i = 0; i < n; i++)
	{
		multiply = 1;
		for (int j = 0; j < n; j++)
		{
			multiply *= B[n - j - 1][j + i];
		}
		sum_diag_aux += multiply;
	}
	cout << "сумма произведения элементов вспомогательной диагонали: " << sum_diag_aux << endl;
	cout << sum_diag_main - sum_diag_aux << endl;
}

void FillRand(int arr[m][n], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
}
void Print(int arr[m][n], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}