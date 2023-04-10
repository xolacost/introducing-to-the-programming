#include<iostream>
#include<cmath>
#include<locale>

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
		case 7:
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
	int A, B;
	cout << "Введите A: ";
	cin >> A;
	cout << "Введите B: ";
	cin >> B;
	if ((A > 2) && (B <= 3)) {
		cout << "Неравенства A > 2 и B <= 3 справедливы" << endl;
	}
	else {
		cout << "Неравенства A > 2 и B <= 3 не справедливы" << endl;
	}
}

void task2() {
	int A, B, C;
	cout << "Введите A: ";
	cin >> A;
	cout << "Введите B: ";
	cin >> B;
	cout << "Введите C: ";
	cin >> C;
	if ((A < B) && (B < C)) {
		cout << "Двойное неравенство A<B<C справедливо!" << endl;
	}
	else {
		cout << "Двойное неравенство A<B<C не справедливо!" << endl;
	}
}

void task3() {
	int num;
	cout << "Введите число: ";
	cin >> num;
	if (((num / 10) > 0) && ((num % 2) == 0)) {
		cout << "Данное число является четным двузначным!" << endl;
	}
	else {
		cout << "Данное число не является четным двузначным!" << endl;
	}
}

void task4() {
	int num;
	cout << "Введите трехзначное число: ";
	cin >> num;
	if ((((num / 100) > ((num % 100) / 10)) && (((num % 100) / 10) > (num % 10))) || (((num / 100) < ((num % 100) / 10)) && (((num % 100) / 10) < (num % 10)))) {
		cout << "Цифры данного числа образуют возрастающую или убывающую последовательность" << endl;
	}
	else {
		cout << "Цифры данного числа НЕ образуют возрастающую или убывающую последовательность" << endl;
	}
}

void task5() {
	int num;
	cout << "Введите четырехзначное число: ";
	cin >> num;
	if ((num / 1000 == num % 10) && ((num % 1000) / 100) == (num % 100) / 10) {
		cout << "Данное число читается одинаково слева направо и справа налево!" << endl;
	}
	else {
		cout << "Данное число НЕ читается одинаково слева направо и справа налево" << endl;
	}
}

void task6() {
	int a, b, c;
	cout << "Введите сторону a треугольника: ";
	cin >> a;
	cout << "Введите сторону b треугольника: ";
	cin >> b;
	cout << "Введите сторону c треугольника: ";
	cin >> c;
	if (((pow(a, 2) + pow(b, 2) == pow(c, 2))) || (pow(a, 2) + pow(c, 2) == pow(b, 2)) || (pow(b, 2) + pow(c, 2) == pow(a, 2))) {
		cout << "Треугольник со сторонами a, b, c является прямоугольным" << endl;
	}
	else {
		cout << "Треугольник со сторонами a, b, c НЕ является прямоугольным" << endl;
	}
}

void task7() {
	int a, b, c;
	cout << "Введите сторону a треугольника: ";
	cin >> a;
	cout << "Введите сторону b треугольника: ";
	cin >> b;
	cout << "Введите сторону c треугольника: ";
	cin >> c;
	if ((a + b > c) || (a + c > b) || (c + b > a)) {
		cout << "Треугольник со сторонами a, b, c НЕ существует" << endl;
	}
	else {
		cout << "Существует треугольник со сторонами a, b, c" << endl;
	}
}
