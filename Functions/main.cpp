#include"Functions.h"

#define delimiter "\n-----------------------------------------------------\n"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	//���������� �������
	cout << "���������� ������ int: " << endl;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(arr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(arr, n) << endl;
	cout << "�������������� ������: \n";
	Sort(arr, n);
	Print(arr, n);
	cout << delimiter<< endl;

	cout << "���������� ������ ���� double: \n";
	double brr[n];
	FillRand(brr, n);
	Print(brr, n);
	cout << "����� ��������� �������: " << Sum(brr, n) << endl;
	cout << "������� �������������� ��������� ������� :" << Avg(brr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(brr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(brr, n) << endl;
	cout << "�������������� ������: \n"; 
	Sort(brr, n);
	Print(brr, n);
	cout << delimiter << endl;

	cout << "���������� ������ ���� float: \n";
	double crr[n];
	FillRand(crr, n);
	Print(crr, n);
	cout << "����� ��������� �������: " << Sum(crr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(crr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(crr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(crr, n) << endl;
	cout << "�������������� ������: \n";
	Sort(crr, n);
	Print(crr, n);
	cout << delimiter << endl;

	cout << "���������� ������ ���� char: \n";
	char drr[n];
	FillRand(drr, n);
	Print(drr, n);
	cout << "����� ��������� �������: " << Sum(drr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(drr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(drr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(drr, n) << endl;
	cout << "�������������� ������: \n";
	Sort(drr, n);
	Print(drr, n);
	cout << delimiter << endl;

	//��������� �������
	cout << "��������� ������ ���� int: \n";
	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(arr2, ROWS, COLS) << endl;
	cout << "�������  �������������� ��������� �������: " << Avg(arr2, ROWS, COLS)<<endl;
	cout << "����������� �������� � �������: " << minValueIn(arr2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(arr2, ROWS, COLS) << endl;
	cout << "�������������� ������: \n";
	Sort(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << delimiter << endl;

	cout << "��������� ������ ���� double:\n";
	double brr2[ROWS][COLS];
	FillRand(brr2, ROWS, COLS);
	Print(brr2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(brr2, ROWS, COLS) << endl;
	cout << "�������  �������������� ��������� �������: " << Avg(brr2, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(brr2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(brr2, ROWS, COLS) << endl;
	cout << "�������������� ������: \n";
	Sort(brr2, ROWS, COLS);
	Print(brr2, ROWS, COLS);
	cout << delimiter << endl;

	cout << "��������� ������ ���� float:\n";
	float crr2[ROWS][COLS];
	FillRand(crr2, ROWS, COLS);
	Print(crr2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(crr2, ROWS, COLS) << endl;
	cout << "�������  �������������� ��������� �������: " << Avg(crr2, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(crr2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(crr2, ROWS, COLS) << endl;
	Sort(crr2, ROWS, COLS);
	Print(crr2, ROWS, COLS);
	cout << delimiter << endl;

	cout << "��������� ������ ���� char:\n";
	char drr2[ROWS][COLS];
	FillRand(drr2, ROWS, COLS);
	Print(drr2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(drr2, ROWS, COLS) << endl;
	cout << "�������  �������������� ��������� �������: " << Avg(drr2, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(drr2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(drr2, ROWS, COLS) << endl;
	Sort(drr2, ROWS, COLS);
	Print(drr2, ROWS, COLS);
	cout << delimiter << endl;
}