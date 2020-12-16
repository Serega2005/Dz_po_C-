#include"Functions.h"

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
void FillRand(float crr[], const int n, int minRand, int maxRand)
{
	if (maxRand < minRand)
	{
		int buffer = maxRand;
		maxRand = minRand;
		minRand = buffer;
	}
	for (int i = 0; i < n; i++)
	{
		crr[i] = rand() % (maxRand - minRand) + minRand;
		crr[i] /= 10;
	}
}
void FillRand(char drr[], const int n, int minRand, int maxRand)
{
	if (maxRand < minRand)
	{
		int buffer = maxRand;
		maxRand = minRand;
		minRand = buffer;
	}
	for (int i = 0; i < n; i++)
	{
		drr[i] = rand() % (maxRand - minRand) + minRand;
		drr[i] /= 10;
	}
}
void FillRand(int arr2[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr2[i][j] = rand() % 100;
		}
	}
}
void FillRand(double brr2[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			brr2[i][j] = double(rand() % 1000) / 10;
		}
	}
}
void FillRand(float crr2[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			crr2[i][j] = double(rand() % 1000) / 10;
		}
	}
}
void FillRand(char drr2[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			drr2[i][j] = double(rand() % 1000) / 10;
		}
	}
}

void Print(int arr2[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr2[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
void Print(double brr2[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << brr2[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
void Print(float crr2[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << crr2[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
void Print(char drr2[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << drr2[i][j] << "\t";
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
void Print(float crr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << crr[i] << "\t";
	}
	cout << endl;
}
void Print(char drr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << drr[i] << "\t";
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
void Sort(float crr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (crr[j] < crr[i])
			{
				float buffer = crr[i];
				crr[i] = crr[j];
				crr[j] = buffer;
			}
		}
	}
}
void Sort(char drr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (drr[j] < drr[i])
			{
				char buffer = drr[i];
				drr[i] = drr[j];
				drr[j] = buffer;
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
float Sum(float crr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += crr[i];
	}
	return sum;
}
char Sum(char drr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += drr[i];
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
float Sum(float crr2[ROWS][COLS], const int m, const int n)
{
	double sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += crr2[i][j];
		}
	}
	return sum;
}
int Sum(char drr2[ROWS][COLS], const int m, const int n)
{
	double sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += drr2[i][j];
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
double Avg(float crr[], const int n)
{
	return Sum(crr, n) / n;
}
double Avg(char drr[], const int n)
{
	return Sum(drr, n) / n;
}
double Avg(int arr2[ROWS][COLS], const int m, const int n)
{
	return (double)Sum(arr2, m, n) / (m * n);
}
double Avg(double brr2[ROWS][COLS], const int m, const int n)
{
	return Sum(brr2, m, n) / (m * n);
}
double Avg(float crr2[ROWS][COLS], const int m, const int n)
{
	return Sum(crr2, m, n) / (m * n);
}
double Avg(char drr2[ROWS][COLS], const int m, const int n)
{
	return Sum(drr2, m, n) / (m * n);
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
float minValueIn(float crr[], const int n)
{
	double min = crr[0];
	for (int i = 0; i < n; i++)
	{
		if (crr[i] < min)min = crr[i];
	}
	return min;
}
char minValueIn(char drr[], const int n)
{
	double min = drr[0];
	for (int i = 0; i < n; i++)
	{
		if (drr[i] < min)min = drr[i];
	}
	return min;
}
int minValueIn(int arr2[ROWS][COLS], const int m, const int n)
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
double minValueIn(double brr2[ROWS][COLS], const int m, const int n)
{
	double min = brr2[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (brr2[i][j] < min)min = brr2[i][j];
		}
	}
	return min;
}
float minValueIn(float crr2[ROWS][COLS], const int m, const int n)
{
	float min = crr2[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (crr2[i][j] < min)min = crr2[i][j];
		}
	}
	return min;
}
int minValueIn(char drr2[ROWS][COLS], const int m, const int n)
{
	float min = drr2[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (drr2[i][j] < min)min = drr2[i][j];
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
float maxValueIn(float crr[], const int n)
{
	double max = crr[0];
	for (int i = 0; i < n; i++)
	{
		if (crr[i] > max)max = crr[i];
	}
	return max;
}
char maxValueIn(char drr[], const int n)
{
	double max = drr[0];
	for (int i = 0; i < n; i++)
	{
		if (drr[i] > max)max = drr[i];
	}
	return max;
}
int maxValueIn(int arr2[ROWS][COLS], const int m, const int n)
{
	int max = arr2[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
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
float maxValueIn(float crr2[ROWS][COLS], const int m, const int n)
{
	double max = crr2[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (crr2[i][j] > max)max = crr2[i][j];
		}
	}
	return max;
}
int maxValueIn(char drr2[ROWS][COLS], const int m, const int n)
{
	double max = drr2[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (drr2[i][j] > max)max = drr2[i][j];
		}
	}
	return max;
}