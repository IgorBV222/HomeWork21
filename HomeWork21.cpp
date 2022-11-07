#include <iostream>
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	int X, Y;
	double average;
	cout << "Задача 1. Среднее арефмитическое через указатели переменных.\nВведите число X: ";
	cin >> X;
	cout << "\nВведите число Y: ";
	cin >> Y;
	int* px = &X;
	int* py = &Y;
	average = (*px + *py) / 2.0;
	cout << "\nСреднее арифметическое " << X << " и " << Y << " равно " << average << "\n\n";

	return 0;
}