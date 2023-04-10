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
	cout << "Введите число A: ";
	cin >> A;
	cout << "Введите число B > A: ";
	cin >> B;
	for (A; A <= B; A++) {
		for (int i = 0; i < A; i++) {
			cout << A << " ";
		}
		cout << endl;
	}
}

void task2() {
	int A, B;
	cout << "Введите положительное число A: ";
	cin >> A;
	cout << "Введите положительное число B < A: ";
	cin >> B;
	while (A > B) {
		A = A - B;
	}
	cout << "Незанятая часть равна: " << A << endl;
}

void task3() {
	int N, K = 0 , S = 0;
	cout << "Введите целове число N: ";
	cin >> N;
	while (S <= N) {
		K++;
		S += K;
	}
	cout << "К равно: " << K << endl << "Сумма равна: " << S << endl;
}

void task4() {
	float P, Nach = 1000, K, S;
	cout << "Введите количесвто процентов: ";
	cin >> P;
	for (K = 0; Nach <= 1100; K++) {
		Nach = Nach + (Nach * P / 100);
	}
	S = Nach;
	cout << "Через " << K << " месяцев, размер вклада составит: " << S << endl;
}

void task5() {
	int A, B;
	cout << "Введите положительное число A: ";
	cin >> A;
	cout << "Введите положительное число B: ";
	cin >> B;
	while ((A != 0) && (B != 0)) {
		if (A > B) {
			A = A % B;
		}
		else {
			B = B % A;
		}
	}
	cout << "НОД равен " << A + B << endl;
}

void task6() {
	int N, F = 0 , K = 0;
	cout << "Введите число N, являющееся числом Фибоначчи: ";
	cin >> N;
	for (int i = 0; F <= N; i++) {
		F = F + i;
		K++;
	}
	cout << "Порядковый номер числа " << N << " - " << K << endl;
}