#include<iostream>
//#include<ctime>
using namespace std;

#define delimiter "\n--------------------\n"

//#define MUL_1
#define MUL_2

void main()
{
	setlocale(LC_ALL, "Rus");
	#ifdef MUL_1
    #endif // MUL_1
	const int m = 3;
	const int n = 5;
	const int n2 = 4;
	int A[m][n];
	int B[n][n2];
	int C[m][n2]{};// ��������� �������� ������ A � B
	//��������� ���� �������:
	/*srand(time(NULL));*/
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			B[i][j] = rand() % 10;
		}
	}
	//����� ������ �� �����:
	cout << "������� A: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}
	cout << delimiter << endl;
	cout << "������� B: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << B[i][j] << "\t";
		}
		cout << endl;
	}
	//��������� ������
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			C[i][j] = 0;
			for (int f = 0; f < n; f++)
			{
				C[i][j] += A[i][f] * B[f][j];
			}
		}
	}
	cout << delimiter << endl;
// ����� ��������� ������
	cout << "������� C=A*B: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			cout << C[i][j] << "\t";
		}
		cout << endl;
	}
}