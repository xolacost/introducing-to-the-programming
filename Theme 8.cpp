#include<iostream>
#include<cmath>
#include<locale>

void task1();
void task2();
void task3();
void task4();
void task5();
int menu();

using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	while (true) {
		switch (menu())
		{
		case 1:
			task1();
			break;
		case 2:
			task2();
			break;
		case 3:
			task3();
			break;
		case 4:
			task4();
			break;
		case 5:
			task5();
			break;
		default:
			break;
		}
	}
}

int menu() {
	int check;
	do {
		puts("1 - первое задание");
		puts("2 - второе заание");
		puts("3 - третье задание");
		puts("4 - четвертое задание");
		puts("5 - пятое задание");
		cin >> check;
	} while (!check);
	return check;
}

void task1() {
	double bite;
	cout << "Введите размер файла в байтах" << endl;
	cin >> bite;
	cout << "Размер файла " << bite << " байт равен " << bite / 1024 << " килобайт" << endl;
}

void task2() {
	int A, B;
	cout << "Введите число A: ";
	cin >> A;
	cout << "Введите число B < A: ";
	cin >> B;
	cout << "На отрезке длиной A поместится " << A / B << " отрезков B" << endl;
}

void task3() {
	int A, B;
	cout << "Введите число A: ";
	cin >> A;
	cout << "Введите число B < A: ";
	cin >> B;
	cout << "Если поместить отрезки длинны B на отрезок длиной A, останется незанятая часть, которая равна " << A % B <<  endl;
}

void task4() {
	int a;
	cout << "Введите двузначтое число a: ";
	cin >> a;
	cout << "Если переставить цифры в числе " << a << " получится: " << (a / 10) + 10 * (a % 10) << endl;
}

void task5() {
	int a;
	cout << "Введите трехзначное число a: ";
	cin >> a;
	cout << "В нем зачеркнули первую слева цифру и приписали ее справа и получилось: " << (a / 100) + (a % 100) * 10 << endl;
}