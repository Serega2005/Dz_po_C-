#include"Functions.h"

#define delimiter "\n-----------------------------------------------------\n"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	//одномерные массивы
	cout << "одномерный массив int: " << endl;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	cout << "Отсортированый массив: \n";
	Sort(arr, n);
	Print(arr, n);
	cout << delimiter<< endl;

	cout << "одномерный массив типа double: \n";
	double brr[n];
	FillRand(brr, n);
	Print(brr, n);
	cout << "Сумма элементов массива: " << Sum(brr, n) << endl;
	cout << "Среднее арифметическое элементов массива :" << Avg(brr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(brr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(brr, n) << endl;
	cout << "Отсортированый массив: \n"; 
	Sort(brr, n);
	Print(brr, n);
	cout << delimiter << endl;

	cout << "одномерный массив типа float: \n";
	double crr[n];
	FillRand(crr, n);
	Print(crr, n);
	cout << "Сумма элементов массива: " << Sum(crr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(crr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(crr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(crr, n) << endl;
	cout << "Отсортированый массив: \n";
	Sort(crr, n);
	Print(crr, n);
	cout << delimiter << endl;

	cout << "одномерный массив типа char: \n";
	char drr[n];
	FillRand(drr, n);
	Print(drr, n);
	cout << "Сумма элементов массива: " << Sum(drr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(drr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(drr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(drr, n) << endl;
	cout << "Отсортированый массив: \n";
	Sort(drr, n);
	Print(drr, n);
	cout << delimiter << endl;

	//двумерные массивы
	cout << "Двумерный массив типа int: \n";
	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(arr2, ROWS, COLS) << endl;
	cout << "Среднее  арифметическое элементов массива: " << Avg(arr2, ROWS, COLS)<<endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr2, ROWS, COLS) << endl;
	cout << "Отсортированый массив: \n";
	Sort(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << delimiter << endl;

	cout << "Двумерный массив типа double:\n";
	double brr2[ROWS][COLS];
	FillRand(brr2, ROWS, COLS);
	Print(brr2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(brr2, ROWS, COLS) << endl;
	cout << "Среднее  арифметическое элементов массива: " << Avg(brr2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(brr2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(brr2, ROWS, COLS) << endl;
	cout << "Отсортированый массив: \n";
	Sort(brr2, ROWS, COLS);
	Print(brr2, ROWS, COLS);
	cout << delimiter << endl;

	cout << "Двумерный массив типа float:\n";
	float crr2[ROWS][COLS];
	FillRand(crr2, ROWS, COLS);
	Print(crr2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(crr2, ROWS, COLS) << endl;
	cout << "Среднее  арифметическое элементов массива: " << Avg(crr2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(crr2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(crr2, ROWS, COLS) << endl;
	Sort(crr2, ROWS, COLS);
	Print(crr2, ROWS, COLS);
	cout << delimiter << endl;

	cout << "Двумерный массив типа char:\n";
	char drr2[ROWS][COLS];
	FillRand(drr2, ROWS, COLS);
	Print(drr2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(drr2, ROWS, COLS) << endl;
	cout << "Среднее  арифметическое элементов массива: " << Avg(drr2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(drr2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(drr2, ROWS, COLS) << endl;
	Sort(drr2, ROWS, COLS);
	Print(drr2, ROWS, COLS);
	cout << delimiter << endl;
}