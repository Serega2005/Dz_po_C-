#include"Functions.h"

#define delimiter "\n-----------------------------------------------------\n"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива:" << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива:" << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве" << maxValueIn(arr, n) << endl;
	cout << "Отсортированый массив: \n";
	Sort(arr, n);
	Print(arr, n);
	cout << delimiter<< endl;

	cout << "одномерный массив типа double: \n";
	double brr[n];
	FillRand(brr, n);
	Print(brr, n);
	cout << "Сумма элементов массива:" << Sum(brr, n) << endl;
	cout << "Среднее арифметическое элементов массива:" << Avg(brr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(brr, n) << endl;
	cout << "Максимальное значение в массиве" << maxValueIn(brr, n) << endl;
	cout << "Отсортированый массив: \n"; 
	Sort(brr, n);
	Print(brr, n);
	cout << delimiter << endl;

	cout << "Двумерный массив типа int: \n";
	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(arr2, ROWS, COLS) << endl;
	cout << "Среднее  арифметическое элементов массива: " << Avg(arr2, ROWS, COLS)<<endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr2, ROWS, COLS) << endl;
	cout << delimiter << endl;

	cout << "Двумерный массив типа double:\n";
	double brr2[ROWS][COLS];
	FillRand(brr2, ROWS, COLS);
	Print(brr2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(brr2, ROWS, COLS) << endl;
	cout << "Среднее  арифметическое элементов массива: " << Avg(brr2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(brr2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(brr2, ROWS, COLS) << endl;
	cout << delimiter << endl;

	/*FillRand(arr, n, 1000, 2000);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов: "<<Avg(arr,n) <<endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	const int m = 10;
	int brr[m];
	FillRand(brr, m,80);
	Print(brr, m);
	cout << "Сумма элементов массива: " << Sum(brr, m) << endl;
	cout << "Среднее арифметическое элементов: " << Avg(brr, m) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(brr, m) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(brr, m) << endl;

	const int SIZE_C = 12;
	int crr[SIZE_C];
	FillRand(crr, SIZE_C);
	Print(crr, SIZE_C);
	cout << "Сумма элементов массива: " << Sum(crr, SIZE_C) << endl;
	cout << "Среднее арифметическое элементов: " << Avg(crr, SIZE_C) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(crr, SIZE_C) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(crr, SIZE_C) << endl;*/
}
