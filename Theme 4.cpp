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
	int a, b;
	cout << "Введите стороны прямоугольника" << endl;
	cin >> a >> b;
	cout << "Площадь прямоугольника: " << a * b << endl << "Периметр прямоугольника: " << 2 * (a + b) << endl;
}

void task2() {
	int d;
	double pi = 3.14;
	cout << "Введите диаметр окружности" << endl;
	cin >> d;
	cout << "Длина окружности равна " << d * pi << endl;
}

void task3() {
	int a, b;
	cout << "Введите два числа для нахождения их среднего арифметического" << endl;
	cin >> a >> b;
	cout << "Среднее арифметическое чисел - " << (a + b) / 2 << endl;
}

void task4() {
	int a, b;
	cout << "Введите два ненулевых числа" << endl;
	cin >> a >> b;
	cout << "Сумма квадратов чисел: " << (pow(a, 2) + pow(b, 2)) << endl << "Разность квадратов чисел: " << (pow(a, 2) - pow(b, 2)) << endl << "Произведение квадратов чисел: " << (pow(a, 2) * pow(b, 2)) << endl << "Частное их квадратов: " << (pow(a, 2) / pow(b, 2)) << endl;
}

void task5() {
	int a, b;
	cout << "Введите два ненулевых числа" << endl;
	cin >> a >> b;
	cout << "Сумма их модулей: " << (fabs(a) + fabs(b)) << endl << "Разность их модулей: " << (fabs(a) - fabs(b)) << endl << "Произведение их модулей: " << (fabs(a) * fabs(b)) << endl << "Частное их модулей: " << (fabs(a) / fabs(b)) << endl;

}