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
	int N, count = 1;
	cout << "Введите целое число N:";
	cin >> N;
	int* arr = new int [N];
	for (int i = 0; i < N; i++) {
		arr[i] = count;
		count += 2;
	}
	for (int i = 0; i < N; i++) cout << arr[i] << endl;
}

void task2() {
	int N, A, D;
	cout << "Введите целое число N:";
	cin >> N;
	cout << "Введите первый член геометрической прогрессии: ";
	cin >> A;
	cout << "Введите знаменатель D геометрической проресии: ";
	cin >> D;
	int* arr = new int[N];
	for (int i = 0; i < N; i++) arr[i] = A * pow(D, i);
	for (int i = 0; i < N; i++) cout << arr[i] << " ";
	cout << endl;
}

void task3() {
	int N, A, B;
	cout << "Введите число N > 2: ";
	cin >> N;
	cout << "Введите первый элемент массива: ";
	cin >> A;
	cout << "Введите второй элемент массива:";
	cin >> B;
	int* arr = new int[N];
	arr[0] = A;
	arr[1] = B;
	int new_el = A + B;
	for (int i = 2; i < N; i++) arr[i] = new_el = new_el * 2;
	for (int i = 0; i < N; i++) cout << arr[i] << " ";
	cout << endl;
}

void task4() {
	int N;
	cout << "Введите число N: ";
	cin >> N;
	int* A = new int[N];
	cout << "Заполните массив размера " << N << endl;
	for (int i = 0; i < N; i++) cin >> A[i];
	for (int i = 0; i < N; i++) {
		cout << A[i] << " " << A[N - i - 1] << " ";
	}
	cout << endl;
}

void task5() {
	int N;
	cout << "Введите число N: ";
	cin >> N;
	int* A = new int[N];
	cout << "Заполните массив размера " << N << endl;
	for (int i = 0; i < N; i++) cin >> A[i];
	for (int i = 0; i < N; i++) {
		if (i % 2 != 0) cout << A[i] << " ";
	}
	cout << endl;
	for (int i = N; i >= 0; i--) {
		if (i % 2 == 0) cout << A[i] << " ";
	}
	cout << endl;
}