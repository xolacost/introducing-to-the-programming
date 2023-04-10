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
	struct Point {
		double y;
		double x;
	};
	Point first;
	Point second;
	int lenght;
	cout << "Введите координаты первой точки " << endl;
	cin >> first.x >> first.y;
	cout << "Введите координаты второй точки " << endl;
	cin >> second.x >> second.y;
	lenght = sqrt(pow((second.x - first.x), 2) - pow((second.y - second.x), 2));
	cout << "Расстояние между точками равно " << lenght << endl;

}

void task2() {
	struct Point {
		double x;
		double y;
	};
	Point A;
	Point B;
	Point C;
	cout << "Введите координаты точки A " << endl;
	cin >> A.x >> A.y;
	cout << "Введите координаты точки B " << endl;
	cin >> B.x >> B.y;
	cout << "Введите координаты точки C " << endl;
	cin >> C.x >> C.y;
	int ac = (sqrt(pow((C.x - A.x), 2) + pow((C.y - A.y), 2)));
	int bc = (sqrt(pow((C.x - B.x), 2) + pow((C.y - B.y), 2)));
	cout << "Длина отрезка AC - " << ac << endl;
	cout << "Длина отрезка BC - " << bc << endl;
	cout << "Сумма длин отрезков AC и BC - " << ac + bc << endl;

}

void task3() {
	struct Point {
		double x;
		double y;
	};
	Point A;
	Point B;
	Point C;
	cout << "Введите координаты точки A " << endl;
	cin >> A.x >> A.y;
	cout << "Введите координаты точки B " << endl;
	cin >> B.x >> B.y;
	C.x = (A.x + B.x) / 2;
	C.y = (A.y + B.y) / 2;
	int ac, bc, ab;
	ab = sqrt(pow((B.x - A.x), 2) + pow((B.y - A.y), 2));
	ac = bc = sqrt(pow((B.x - A.x), 2) + pow((B.y - A.y), 2)) / 2;
	cout << "Длина отрезка AC - " << ac << endl;
	cout << "Длина отрезка BC - " << bc << endl;
	cout << "Произведение длин отрезков AC и BC - " << ac * bc << endl;

}

void task4() {
	struct Point {
		double x;
		double y;
	};
	Point A;
	Point B;
	Point C;
	Point D;
	int P, S, ab, bc;
	cout << "Введите координаты точки A " << endl;
	cin >> A.x >> A.y;
	cout << "Введите координаты точки C " << endl;
	cin >> C.x >> C.y;
	B.x = C.x;
	B.y = A.y;
	D.x = A.x;
	D.y = C.y;
	ab = (B.x - A.x);
	bc = (C.y - B.y);
	P = 2 * (ab + bc);
	S = ab * bc;
	cout << "Периметр прямоугольника равен - " << P << endl;
	cout << "Площадь прямоугольника равна - " << S << endl;
	
}

void task5() {
	struct Point {
		double x;
		double y;
	};
	Point A;
	Point B;
	Point C;
	double ab, ac, bc, P, S, pol;
	cout << "Введите координаты вершины A" << endl;
	cin >> A.x >> A.y;
	cout << "Введите координаты вершины B" << endl;
	cin >> B.x >> B.y;
	cout << "Введите координаты вершины C" << endl;
	cin >> C.x >> C.y;
	ab = sqrt(pow((B.x - A.x), 2) + pow((B.y - A.y), 2));
	ac = sqrt(pow((C.x - A.x), 2) + pow((C.y - A.y), 2));
	bc = sqrt(pow((C.x - B.x), 2) + pow((C.y - B.y), 2));
	P = ab + bc + ac;
	pol = P / 2;
	S = sqrt(pol * (pol - ab) * (pol - bc) * (pol - ac));
	cout << "Периметр треугольника - " << P << endl;
	cout << "Площадь треугольника - " << S << endl;

}