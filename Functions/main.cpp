#include<iostream>
using namespace std;

const int ROWS = 8;
const int COLS = 5;

void FillRand(int arr[], const int n, int minRand=0, int maxRand=100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int arr[ROWS][COLS], const int m, const int n);
void FillRand(double arr[ROWS][COLS], const int m, const int n);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(int arr[ROWS][COLS], const int m, const int n);
void Print(double arr[ROWS][COLS], const int m, const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
int Sum(int arr[ROWS][COLS],const int m, const int n);
double Sum(double arr[ROWS][COLS],const int m, const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(int arr[ROWS][COLS],const int m, const int n);
double Avg(double arr[ROWS][COLS], const int m, const int n);

int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
int minValueIn(int arr[ROWS][COLS],const int m, const int n);
double minValueIn(double arr[ROWS][COLS], const int m, const int n);

int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
int maxValueIn(int arr[ROWS][COLS],const int m, const int n);
double maxValueIn(double arr[ROWS][COLS], const int m, const int n);

#define delimiter "\n-----------------------------------------------------\n"
void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << "����� ��������� �������:" << Sum(arr, n) << endl;
	cout << "������� �������������� ��������� �������:" << Avg(arr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(arr, n) << endl;
	cout << "������������ �������� � �������" << maxValueIn(arr, n) << endl;
	cout << "�������������� ������: \n";
	Sort(arr, n);
	Print(arr, n);
	cout << delimiter<< endl;

	cout << "���������� ������ ���� double: \n";
	double brr[n];
	FillRand(brr, n);
	Print(brr, n);
	cout << "����� ��������� �������:" << Sum(brr, n) << endl;
	cout << "������� �������������� ��������� �������:" << Avg(brr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(brr, n) << endl;
	cout << "������������ �������� � �������" << maxValueIn(brr, n) << endl;
	cout << "�������������� ������: \n"; 
	Sort(brr, n);
	Print(brr, n);
	cout << delimiter << endl;

	cout << "��������� ������ ���� int: \n";
	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(arr2, ROWS, COLS) << endl;
	cout << "�������  �������������� ��������� �������: " << Avg(arr2, ROWS, COLS)<<endl;
	cout << "����������� �������� � �������: " << minValueIn(arr2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(arr2, ROWS, COLS) << endl;
	cout << delimiter << endl;

	cout << "��������� ������ ���� double:\n";
	double brr2[ROWS][COLS];
	FillRand(brr2, ROWS, COLS);
	Print(brr2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(brr2, ROWS, COLS) << endl;
	cout << "�������  �������������� ��������� �������: " << Avg(brr2, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(brr2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(brr2, ROWS, COLS) << endl;
	cout << delimiter << endl;

	/*FillRand(arr, n, 1000, 2000);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������� �������������� ���������: "<<Avg(arr,n) <<endl;
	cout << "����������� �������� � �������: " << minValueIn(arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(arr, n) << endl;
	const int m = 10;
	int brr[m];
	FillRand(brr, m,80);
	Print(brr, m);
	cout << "����� ��������� �������: " << Sum(brr, m) << endl;
	cout << "������� �������������� ���������: " << Avg(brr, m) << endl;
	cout << "����������� �������� � �������: " << minValueIn(brr, m) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(brr, m) << endl;

	const int SIZE_C = 12;
	int crr[SIZE_C];
	FillRand(crr, SIZE_C);
	Print(crr, SIZE_C);
	cout << "����� ��������� �������: " << Sum(crr, SIZE_C) << endl;
	cout << "������� �������������� ���������: " << Avg(crr, SIZE_C) << endl;
	cout << "����������� �������� � �������: " << minValueIn(crr, SIZE_C) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(crr, SIZE_C) << endl;*/
}
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	if (maxRand < minRand)
	{
		int buffer = maxRand;
		maxRand = minRand;
		minRand = buffer;
	}
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	if (maxRand < minRand)
	{
		int buffer = maxRand;
		maxRand = minRand;
		minRand = buffer;
	}
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 10; 
	}
}
void FillRand(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = double(rand() % 10000)/10;
		}
	}
}
void Print(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
void Print(double arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer; 
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
 double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
 int Sum(int arr2[ROWS][COLS], const int m, const int n)
 {
	 int sum = 0;
	 for (int i = 0; i < m; i++)
	 {
		 for (int j = 0; j < n; j++)
		 {
			 sum += arr2[i][j];
		 }
	 }
	 return sum;
 }
 double Sum(double brr2[ROWS][COLS], const int m, const int n)
 {
	 double sum = 0;
	 for (int i = 0; i < m; i++)
	 {
		 for (int j = 0; j < n; j++)
		 {
			 sum += brr2[i][j];
		 }
	 }
	 return sum;
 }

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

double Avg(double arr[], const int n)
{
	return Sum(arr, n) / n;
}
double Avg(int arr2[ROWS][COLS], const int m, const int n)
{
	return (double)Sum(arr2, m, n) / (m*n);
}
double Avg(double brr2[ROWS][COLS], const int m, const int n)
{
	return Sum(brr2, m, n) / (m * n);
}

int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
double minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
int minValueIn(int arr2[ROWS][COLS],const int m, const int n)
{
	int min = arr2[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
		if (arr2[i][j] < min)min = arr2[i][j];
		}
	}
	return min;
}
double minValueIn(double arr2[ROWS][COLS], const int m, const int n)
{
	double min = arr2[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr2[i][j] < min)min = arr2[i][j];
		}
	}
	return min;
}

int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
double maxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
int maxValueIn(int arr2[ROWS][COLS],const int m, const int n)
{
	int max = arr2[0][0];
	for (int i = 0; i < m; i++)
	{
		for(int j=0; j<n; j++)
		{ 
		if (arr2[i][j] > max)max = arr2[i][j];
		}
	}
	return max;
}
double maxValueIn(double brr2[ROWS][COLS], const int m, const int n)
{
	double max = brr2[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (brr2[i][j] > max)max = brr2[i][j];
		}
	}
	return max;
}