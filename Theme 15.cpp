#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>
#include<locale>

float PowerA3(int A, float B);
int SignX(float x);
float RingS(int R1, int R2);
int Quater(int x, int y);
float Fact2(int N);
int menu();

using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	while (true) {
		switch (menu())
		{
		case 1:
		{
			int arr[5];
			float B = 0;
			cout << "Введите 5 чисел: ";
			for (int i = 0; i < 5; i++) {
				cin >> arr[i];
				cout << PowerA3(arr[i], B) << endl;;
			}
		}
			break;
			{
		case 2:
			float A, B;
			cout << "Введите число A: ";
			cin >> A;
			cout << "Введите число B: ";
			cin >> B;
			cout << SignX(A) + SignX(B) << endl;
			break;
			}
			{
		case 3:
			int R1, R2;
			cout << "Введите радиусы R1 и R2 (R1 > R2) " << endl;
			cin >> R1 >> R2;
			RingS(R1, R2);
			break;
			}
			{
		case 4:
			struct point {
				int x, y;
			};
			cout << "Введите координаты точки" << endl;
			point first;
			point second;
			point third;
			cin >> first.x >> first.y;
			Quater(first.x, first.y);
			cin >> second.x >> second.y;
			Quater(second.x, second.y);
			cin >> third.x >>  third.y;
			Quater(third.x, third.y);
			break;
			}
			{
		case 5:
			int N;
			cout << "Введите число N: ";
			cin >> N;
			cout << Fact2(N) << endl;;
			break;
			}
			{
		default:
			break;
			}
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

float PowerA3(int A,float B) {
	B = pow(A, 3);
	return B;
}

int SignX(float x) {
	if (x < 0) {
		return -1;
	}
	else {
		if (x == 0) {
			return 0;
		}
		else {
			return 1;
		}
	}
}

float RingS(int R1, int R2) {
	float radius = (R1 + R2) / 2;
	float S1, S2, S3;
	S1 = pow(R1, 2) * M_PI;
	S2 = pow(R2, 2) * M_PI;
	S3 = pow(radius, 2) * M_PI;
	cout << "Радиус большего круга: " << S1 << endl;
	cout << "Радиус меньшего круга: " << S2 << endl;
	cout << "Радиус среднего круга: " << S3 << endl;
	return 0;
}

int Quater(int x, int y) {
	if (x < 0) {
		if (y < 0) {
			cout << "3-я четверть" << endl << "Again" << endl;
		}
		else {
			cout << "2-я четверть" << endl << "Again" << endl;
		}
	}
	else {
		if (y < 0) {
			cout << "4-я четверть" << endl << "Again" << endl;
		}
		else {
			cout << "1-я четверть" << endl << "Again" << endl;
		}
	}
	return 0;
}

float Fact2(int N) {
	int bebra = 1;
	if (N % 2 != 0) {
		for (int i = 1; i <= N; i+= 2) {
			bebra *= i;
		}
	}
	else {
		for (int i = 2; i <= N; i+=2) {
			bebra *= i;
		}
	}
	return bebra;
}