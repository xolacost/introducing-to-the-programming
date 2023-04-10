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
	int N;
	cout << "Введите количество скунд, прошедшее с начала суток: ";
	cin >> N;
	cout << "Количество секунд прошедших с начала последней минуты: " << N % 60 << endl;
}

void task2() {
	int K;
	cout << "Введите номер дня (1 - 365) в году ";
	cin >> K;
	cout << "Номер дня " << K % 7 << endl;
}

void task3() {
	int N, K;
	cout << "Введите номер дня недели, которому соответствует 1-е января ";
	cin >> N;
	cout << "Введите номер дня (1 - 365) ";
	cin >> K;
	cout << "Номером для " << K << "-го дня недели является " << (K + N) % 7 - 1<< endl;

}

void task4(){
	int A, B, C;
	cout << "Введите стороны прямоугольника" << endl << "A: ";
	cin >> A;
	cout << "B: ";
	cin >> B;
	cout << "Введите сторону квадрата: ";
	cin >> C;
	if ((C > A) || (C > B)) {
		cout << "На таком прямоугольнике не разместится ни один квадрат" << endl;
	}
	else {
		cout << "На прямоугольнике с сторонами " << A << " " << B << " разместится " << A / C * A / B << " квадратов" << endl;
		cout << "Площадь незанятой части = " << (A * B) - (A / C * A / B) * pow(C, 2) << endl;
	}
	
}

void task5() {
	int year;
	cout << "Введите год: ";
	cin >> year;
	if (year % 10 == 1) {
		cout << "Год соответствует " << year / 100 + 1 << "-му столетию" << endl;
	}
	else {
		cout << "Год соответствует " << year / 100 << "-му столетию" << endl;
	}
	
}