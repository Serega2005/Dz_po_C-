#pragma once
#include<iostream>
using namespace std;

const int ROWS = 8;
const int COLS = 5;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(float crr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char drr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int arr2[ROWS][COLS], const int m, const int n);
void FillRand(double brr2[ROWS][COLS], const int m, const int n);
void FillRand(float crr2[ROWS][COLS], const int m, const int n);
void FillRand(char drr2[ROWS][COLS], const int m, const int n);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(float crr[], const int n);
void Print(char drr[], const int n);
void Print(int arr2[ROWS][COLS], const int m, const int n);
void Print(double brr2[ROWS][COLS], const int m, const int n);
void Print(float crr2[ROWS][COLS], const int m, const int n);
void Print(char drr2[ROWS][COLS], const int m, const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(float crr[], const int n);
void Sort(char drr[], const int n);
void Sort(int arr2[ROWS][COLS], const int m, const int n);
void Sort(double brr2[ROWS][COLS], const int m, const int n);
void Sort(float crr2[ROWS][COLS], const int m, const int n);
void Sort(char drr2[ROWS][COLS], const int m, const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
float Sum(float crr[], const int n);
char Sum(char drr[], const int n);
int Sum(int arr2[ROWS][COLS], const int m, const int n);
double Sum(double brr2[ROWS][COLS], const int m, const int n);
float Sum(float crr2[ROWS][COLS], const int m, const int n);
char Sum(char drr2[ROWS][COLS], const int m, const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(float crr[], const int n);
double Avg(char drr[], const int n);
double Avg(int arr2[ROWS][COLS], const int m, const int n);
double Avg(double brr2[ROWS][COLS], const int m, const int n);
double Avg(float crr2[ROWS][COLS], const int m, const int n);
double Avg(char drr2[ROWS][COLS], const int m, const int n);

int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
float minValueIn(float crr[], const int n);
char minValueIn(char drr[], const int n);
int minValueIn(int arr2[ROWS][COLS], const int m, const int n);
double minValueIn(double brr2[ROWS][COLS], const int m, const int n);
float minValueIn(float crr2[ROWS][COLS], const int m, const int n);
char minValueIn(char drr2[ROWS][COLS], const int m, const int n);

int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
float maxValueIn(float crr[], const int n);
char maxValueIn(char drr[], const int n);
int maxValueIn(int arr2[ROWS][COLS], const int m, const int n);
double maxValueIn(double brr2[ROWS][COLS], const int m, const int n);
float maxValueIn(float crr2[ROWS][COLS], const int m, const int n);
char maxValueIn(char drr2[ROWS][COLS], const int m, const int n);
