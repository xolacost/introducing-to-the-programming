#include<iostream>
#include<cmath>
#include<locale>

void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7();
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
		case 6:
			task6();
			break;
		case 7 :
			task7();
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
		puts("6 - шестое задание");
		puts("7 - седьмое задание");
		cin >> check;
	} while (!check);
	return check;
}

void task1() {
	int a, b, c;
	cout << "Введите два числа" << endl << "A = ";
	cin >> a;
	cout << "B = ";
	cin >> b;
	cout << "Числа будут поменяны местами" << endl;
	c = a;
	a = b;
	b = c;
	cout << "Число A = " << a << endl << "Число B = " << b << endl;
}

void task2() {
	int a, b, c, x, y;
	cout << "Введите три числа" << endl << "A = ";
	cin >> a;
	cout << "B = ";
	cin >> b;
	cout << "C = ";
	cin >> c;
	x = a;
	a = c;
	y = b;
	b = x;
	c = y;
	cout << "Число A = " << a << endl << "Число B = " << b << endl << "Число C = " << c << endl;

}

void task3() {
	int a, b, c, x, y;
	cout << "Введите три числа" << endl << "A = ";
	cin >> a;
	cout << "B = ";
	cin >> b;
	cout << "C = ";
	cin >> c;
	x = c;
	c = a;
	y = b;
	a = y;
	b = x;
	cout << "Число A = " << a << endl << "Число B = " << b << endl << "Число C = " << c << endl;

}

void task4() {
	cout << "Введите X для нахождения функции y=3*x^6 - 6*x^2 - 7" << endl;
	int x, y;
	cin >> x;
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	cout << "Значение функции при X = " << x << ": " << y << endl;
}

void task5() {
	cout << "Введите X для нахождения функции y=4*(x-3)^6 - 7*(x-3)^3 + 2" << endl;
	int x, y;
	cin >> x;
	y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
	cout << "Значение функции при X = " << x << ": " << y << endl;
}

void task6() {
	int A, help;
	cout << "Введите число A" << endl;
	cin >> A;
	help = 2;
	A = pow(A, help * help * help);
	cout << "A^8 = " << A << endl;
}

void task7() {
	int A, help1, help2;
	cout << "Введите число A" << endl;
	cin >> A;
	help1 = 3;
	help2 = pow(A, help1) * pow(A, help1) * pow(A, help1) * pow(A, help1) * pow(A, help1);
	A = help2;
	cout << "A^15 = " << A << endl;
}