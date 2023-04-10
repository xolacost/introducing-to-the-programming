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
	float price;
	double i = 0.1;
	cout << "Введите цену за 1 кг конфет: ";
	cin >> price;
	while (i < 1) {
		cout << "Цена за " << i << " кг конфет" << " равна " << price * i << endl;
		i += 0.1;
	}
}

void task2() {
	int N;
	double result = 1;
	cout << "Введите целое число N: ";
	cin >> N;
	for (double i = 1.1; i < N; i = i + 0.1) {
		result = result * i;
		cout << "Произведение 1.1 * 1.2 * 1.3 * ... * N равно: " << result << endl;
	}
}

void task3() {
	int N, result = 0;
	cout << "Введите целое число N: ";
	cin >> N;
	cout << "Найдем квадрат числа N с помощью формулы" << endl;
	for (int i = 1; i <= (2 * N - 1); i += 2) {
		result = result + i;
		cout << "Сумма равна: " << result << endl;
	}
	cout << "Квадрат числа N равен: " << result << endl;
}

void task4() {
	float A;
	int N;
	float result = 1;
	cout << "Введите число A: ";
	cin >> A;
	cout << "Введите степень: ";
	cin >> N;
	for (int i = 1; i <= N; i++) {
		result = result + pow(A, i);
		cout << result << endl;
	}
}

void task5() {
	float A;
	int N;
	cout << "Введите число A: ";
	cin >> A;
	cout << "Введите степень: ";
	cin >> N;
	int result = 1, z = -1;
	for (int i = 1; i <= N; i++) {
		result = result + pow(A, i) * z;
		z = -1 * z;
		cout << result << endl;
	}
}