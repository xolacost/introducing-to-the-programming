#include<iostream>
#include<cmath>
#include<locale>

void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
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
		cin >> check;
	} while (!check);
	return check;
}

void task1() {
	int A, B;
	cout << "Введите переменную A: ";
	cin >> A;
	cout << "Введите переменную B: ";
	cin >> B;
	if (A != B) {
		if (A > B) {
			B = A;
		}
		else {
			A = B;
		}
	}
	else {
		A = 0;
		B = 0;
	}
	cout << "A = " << A << " B = " << B << endl;
}

void task2() {
	int a, b, c;
	cout << "Введите число a: ";
	cin >> a;
	cout << "Введите число b: ";
	cin >> b;
	cout << "Введите число c: ";
	cin >> c;
	if (a > b) {
		if (b > c) {
			cout << "Большие числа: " << a << " " << b << endl;
		}
		else {
			cout << "Большие числа: " << a << " " << c << endl;
		}
	}
	else {
		if (a > c) {
			cout << "Большие числа: " << a << " " << b << endl;
		}
		else {
			cout << "Большие числа: " << b << " " << c << endl;
		}
	}
}

void task3() {
	struct Point {
		int x, y;
	};
	Point A;
	Point B;
	Point C;
	double dist;
	cout << "Введите координаты точки A: ";
	cin >> A.x;
	cin >> A.y;
	cout << "Введите координаты точки B: ";
	cin >> B.x;
	cin >> B.y;
	cout << "Введите координаты точки C: ";
	cin >> C.x;
	cin >> C.y;
	if (sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2)) > sqrt(pow(C.x - A.x, 2) + pow(C.y - A.y, 2))) {
		cout << "Точка B ближе к точке A, AB = " << sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2)) << endl;
	}
	else {
		cout << "Точка C ближе к точке A, AC = " << sqrt(pow(C.x - A.x, 2) + pow(C.y - A.y, 2)) << endl;
	}

}

void task4() {
	int x, y;
	cout << "Введите координату x (x != 0): ";
	cin >> x;
	cout << "Введите координату y (y != 0): ";
	cin >> y;
	if (y > 0) {
		if (x > 0) {
			cout << "Точка находится в 1-й четверти" << endl;
		}
		else {
			cout << "Точка находится в 2-й четверти" << endl;
		}
	}
	else {
		if (x > 0) {
			cout << "Точка находится в 4-й четверти" << endl;
		}
		else {
			cout << "Точка находится в 3-й четверти" << endl;
		}
	}
}

void task5() {
	int a;
	cout << "Введите число a: ";
	cin >> a;
	if (a > 0) {
		if (a % 2 == 0) {
			cout << "a - положительное четное число!" << endl;
		}
		else {
			cout << "a - положительное нечетное число!" << endl;
		}
	}
	else {
		if (a % 2 == 0) {
			cout << "a - отрицательно четное число!" << endl;
		}
		else {
			cout << "a - отрицательное нечетное число!" << endl;
		}
	}
	if (a == 0) {
		cout << "a - нулевое число" << endl;
	}
}

void task6() {
	int a;
	cout << "Введите a в диапазоне 1 - 999: ";
	cin >> a;
	if (a % 2 == 0) {
		if (a / 100 != 0) {
			cout << "a - четное трехзначное число!" << endl;
		}
		else {
			if (a / 10 != 0) {
				cout << "a - четное двузначное число!" << endl;
			}
			else {
				cout << "a - четное однозначное число!" << endl;
			}
		}
	}
	else {
		if (a / 100 != 0) {
			cout << "a - нечетное трехзначное число!" << endl;
		}
		else {
			if (a / 10 != 0) {
				cout << "a - нечетное двузначное число!" << endl;
			}
			else {
				cout << "a - нечетное однозначное число!" << endl;
			}
		}
	}
}
