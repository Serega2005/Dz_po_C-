#include<iostream>
using namespace std;

int division(int a, int b);//�������� �������(Function declaration - ���������� �������)
int sum(int a, int b);
int dif(int a, int b);
int prod(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int c = sum(2, 3);//����� ������� (Function call)
	cout << c << endl;
	cout << dif(8, 3) << endl;
	cout << prod(5, 3) << endl;
	cout << division(15, 8) << endl;
}
int sum(int a, int b)//���������� �������(Function definitio - ����������� �������)
{
	int c = a + b;
	return c;
}

int dif(int a, int b)
{
	return a - b;
}

int prod(int a, int b)
{
	return a * b;
}

int division(int a, int b)
{
	return a / b;
}