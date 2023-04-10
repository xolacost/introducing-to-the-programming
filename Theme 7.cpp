#define _USE_MATH_DEFINES

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
	cout << "Введите значение угла в градусах ( 0 < a < 360)" << endl;
	double corner, rad;
	cin >> corner;
	rad = fabs(corner) * M_PI / 180;
	cout << "Значение угла " << corner << " в радианах равно " << rad << endl;
}

void task2() {
	cout << "Введите значение угла в радианах ( 0 < a < 2*π)" << endl;
	double corner, rad;
	cin >> rad;
	corner = rad * 180 / M_PI;
	cout << "Значение угла в радианах " << rad << " в градусах равно " << corner << endl;
}

void task3() {
	cout << "X кг конфет стоят A рублей. Сколько стоят 1 кг и Y кг конфет?" << endl;
	double X, A, Y;
	cout << "Введите цену (A > 0) конфет за X кг : ";
	cin >> A;
	cout << "Введите X (X > 0) кг конфет за цену " << fabs(A) << ": ";
	cin >> X;
	cout << "Введите сколько Y кг конфет, сколько вы хотите: ";
	cin >> Y;
	cout << "За 1 кг конфет вы заплатите: " << (fabs(A) / fabs(X)) << endl;
	cout << "За " << Y << " кг конфет вы заплатите: " << (fabs(A) / fabs(X)) * Y << endl;
}

void task4() {
	double V1, V2, S, T, dist;
	cout << "Введите скорость первого автомобиля" << endl;
	cin >> V1;
	cout << "Введите скорость второго автомобиля" << endl;
	cin >> V2;
	cout << "Введите расстояние между ними" << endl;
	cin >> S;
	cout << "Введите время их удаления друг от друга в часах" << endl;
	cin >> T;
	dist = (V1 * T) + (V2 * T) + S;
	cout << "Через " << T << " часов между ними будет " << dist << " километров" << endl;
}

void task5() {
	double A, B, x;
	cout << "Перед вами уравнение A*x + B = 0" << endl;
	cout << "Введите коэффициент A, не равный нулю" << endl;
	cin >> A;
	cout << "Введите коэффициент B" << endl;
	cin >> B;
	x = -B / A;
	cout << "Корень уравнения равен " << x << endl;

}

void task6() {
	struct equation {
		double A, B, C;
	};
	double x, y, gl_opr, opr_x, opr_y;
	cout << "Перед вами система уравнений A1*x + B1*y = C1 и A2*x + B2*y = C2" << endl;
	equation first;
	equation second;
	cout << "Введите коэффициент A1" << endl;
	cin >> first.A;
	cout << "Введите коэффициент B1" << endl;
	cin >> first.B;
	cout << "Введите коэффициент C1" << endl;
	cin >> first.C;
	cout << "Введите коэффициент A2" << endl;
	cin >> second.A;
	cout << "Введите коэффициент B2" << endl;
	cin >> second.B;
	cout << "Введите коэффициент C2" << endl;
	cin >> second.C;
	gl_opr = (first.A * second.B) - (second.A * first.B); // определитель
	opr_x = (first.C * second.B) - (first.B * second.C); // определитель x
	opr_y = (first.A * second.C) - (first.C * second.A); // определитель y
	x = opr_x / gl_opr;
	y = opr_y / gl_opr;
	cout << "Корни уравнения: " << "x = " << x << " y = " << y << endl;

}