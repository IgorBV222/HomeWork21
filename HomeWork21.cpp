#include <iostream>
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	int X, Y;
	double average;
	cout << "������ 1. ������� �������������� ����� ��������� ����������.\n������� ����� X: ";
	cin >> X;
	cout << "\n������� ����� Y: ";
	cin >> Y;
	int* px = &X;
	int* py = &Y;
	average = (*px + *py) / 2.0;
	cout << "\n������� �������������� " << X << " � " << Y << " ����� " << average << "\n\n";

	return 0;
}