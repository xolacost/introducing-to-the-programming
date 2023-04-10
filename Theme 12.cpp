#include<iostream>
#include<cmath>
#include<locale>
#include<string>

void task1();
void task2();
void task3();
void task4();
void task5();
int number();
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
	int date, number_month;
	cout << "Введите число и месяц" << endl;
	cin >> date;
	cin >> number_month;
	string arr_month[12] = {"января", "февраля", "марта", "апреля", "мая", "июня", "июля", "августа", "сентября", "октября", "ноября", "декабря"};
	switch (date) {
	case 1:
		cout << "первое " << arr_month[number_month - 1] << endl;
		break;
	case 2:
		cout << "второе" << arr_month[number_month - 1] << endl;
		break;
	case 3:
		cout << "третье " << arr_month[number_month - 1] << endl;
		break;
	case 4:
		cout << "четвертое " << arr_month[number_month - 1] << endl;
		break;
	case 5:
		cout << "пятое " << arr_month[number_month - 1] << endl;
		break;
	case 6:
		cout << "шестое " << arr_month[number_month - 1] << endl;
		break;
	case 7:
		cout << "седьмое " << arr_month[number_month - 1] << endl;
		break;
	case 8:
		cout << "восьмое " << arr_month[number_month - 1] << endl;
		break;
	case 9:
		cout << "девятое " << arr_month[number_month - 1] << endl;
		break;
	case 10:
		cout << "десятое " << arr_month[number_month - 1] << endl;
		break;
	case 11:
		cout << "одиннадцатое " << arr_month[number_month - 1] << endl;
		break;
	case 12:
		cout << "двенадцатое " << arr_month[number_month - 1] << endl;
		break;
	case 13:
		cout << "тринадцатое " << arr_month[number_month - 1] << endl;
		break;
	case 14:
		cout << "четырнадцатое " << arr_month[number_month - 1] << endl;
		break;
	case 15:
		cout << "пятнадцатое " << arr_month[number_month - 1] << endl;
		break;
	case 16:
		cout << "шестнадцатое " << arr_month[number_month - 1] << endl;
		break;
	case 17:
		cout << "семнадцатое " << arr_month[number_month - 1] << endl;
		break;
	case 18:
		cout << "восемнадцатое " << arr_month[number_month - 1] << endl;
		break;
	case 19:
		cout << "девятнадцатое " << arr_month[number_month - 1] << endl;
		break;
	case 20:
		cout << "двадцатое " << arr_month[number_month - 1] << endl;
		break;
	case 21:
		cout << "двадцать первое " << arr_month[number_month - 1] << endl;
		break;
	case 22:
		cout << "двадцать второе " << arr_month[number_month - 1] << endl;
		break;
	case 23:
		cout << "двадцать третье " << arr_month[number_month - 1] << endl;
		break;
	case 24:
		cout << "двадцать четвертое " << arr_month[number_month - 1] << endl;
		break;
	case 25:
		cout << "двадцать пятое " << arr_month[number_month - 1] << endl;
		break;
	case 26:
		cout << "двадцать шестое " << arr_month[number_month - 1] << endl;
		break;
	case 27:
		cout << "двадцать седьмое " << arr_month[number_month - 1] << endl;
		break;
	case 28:
		cout << "двадцать восьмое " << arr_month[number_month - 1] << endl;
		break;
	case 29:
		cout << "двадцать девятое " << arr_month[number_month - 1] << endl;
		break;
	case 30:
		cout << "тридцатое " << arr_month[number_month - 1] << endl;
		break;
	case 31:
		cout << "тридцать первое " << arr_month[number_month - 1] << endl;
		break;
	}
}

void task2() {
	int N;
	char C;
	cout << "Введите начальное направление робота: ";
	cin >> C;
	cout << "Введите операцию (1, 0, -1): ";
	cin >> N;

	switch (C) {
	case 'С':
		switch (N) {
		case 1:
			C = 'З';
			break;
		case 0:
			C = 'С';
			break;
		case -1:
			C = 'В';
			break;
		}
		break;
	case 'В':
		switch (N) {
		case 1:
			C = 'С';
			break;
		case 0:
			C = 'В';
			break;
		case -1:
			C = 'Ю';
			break;
		}
	case 'Ю':
		switch (N) {
		case 1:
			C = 'В';
			break;
		case 0:
			C = 'Ю';
			break;
		case -1:
			C = 'З';
			break;
		}
		break;
	case 'З':
		switch (N) {
		case 1:
			C = 'Ю';
			break;
		case 0:
			C = 'З';
			break;
		case -1:
			C = 'С';
			break;
		}
	}
	cout << C << endl;
}


void task3() {
	int number;
	cout << "Введите число в дмапазоне 10 - 40: ";
	cin >> number;
	switch (number) {
	case 10: 
		cout << "десять учебных заданий" << endl;
		break;
	case 11:
		cout << number << " - одиннадцать учебных заданий" << endl;
		break;
	case 12:
		cout << number << " - двенадцать учебных заданий" << endl;
		break;
	case 13:
		cout << number << " - тринадцатб учебных заданий" << endl;
		break;
	case 14:
		cout << number << " - четырнадцать учебных заданий" << endl;
		break;
	case 15:
		cout << number << " - пятнадцать учебных заданий" << endl;
		break;
	case 16:
		cout << number << " - шестнадцать учебных заданий" << endl;
		break;
	case 17:
		cout << number << " - семнадцать учебных заданий" << endl;
		break;
	case 18:
		cout << number << " - восемнадцать учебных заданий" << endl;
		break;
	case 19:
		cout << number << " - девятнадцать учебных заданий" << endl;
		break;
	default:
		switch (number / 10) {
		case 2:
			cout  << "- Двадцать ";
			break;
		case 3:
			cout  << "- Тридцать ";
			break;
		case 4:
			cout  << "- Сорок ";
			break;
		}
		switch (number % 10) {
		case 1:
			cout << "одно учебное задание" << endl;
			break;
		case 2:
			cout << "два учебных задания" << endl;
			break;
		case 3:
			cout  << "три учебных задания" << endl;
			break;
		case 4:
			cout  << "четыре учебных задания" << endl;
			break;
		case 5:
			cout  << "пять учебных задани1" << endl;
			break;
		case 6:
			cout << "шесть учебных заданий" << endl;
			break;
		case 7:
			cout  << "семь учебных заданий" << endl;
			break;
		case 8:
			cout  << "восемь учебных заданий" << endl;
			break;
		case 9:
			cout  << "девять учебных заданий" << endl;
			break;
		}
	}
	cout << endl;
}



void task4() {
	int number;
	cout << "Введите число в дипазоне 100 - 999: ";
	cin >> number;
	switch (number / 100) {
	case 1:
		cout << "сто ";
		break;
	case 2:
		cout << "двести ";
		break;
	case 3:
		cout << "триста ";
		break;
	case 4:
		cout << "четыреста ";
		break;
	case 5:
		cout << "пятьсот ";
		break;
	case 6:
		cout << "шестьсот ";
		break;
	case 7:
		cout << "семьсот ";
		break;
	case 8:
		cout << "восемьсот ";
		break;
	case 9:
		cout << "девятьсот ";
		break;
	}
	if ((number % 100) / 10 == 1) {
		switch (number % 100) {
		case 10:
			cout << "десять " << endl;
			break;
		case 11:
			cout << " - одиннадцать " << endl;
			break;
		case 12:
			cout << " - двенадцать " << endl;
			break;
		case 13:
			cout << " - тринадцатб " << endl;
			break;
		case 14:
			cout << " - четырнадцать " << endl;
			break;
		case 15:
			cout << " - пятнадцать " << endl;
			break;
		case 16:
			cout << " - шестнадцать " << endl;
			break;
		case 17:
			cout << " - семнадцать " << endl;
			break;
		case 18:
			cout << " - восемнадцать " << endl;
			break;
		case 19:
			cout << " - девятнадцать " << endl;
			break;
		}
	}
	else {
		switch (number % 100 / 10) {
		case 1:
			cout << "десять ";
			break;
		case 2:
			cout << "двадцать ";
			break;
		case 3:
			cout << "тридцать ";
			break;
		case 4:
			cout << "сорок ";
			break;
		case 5:
			cout << "пятьдесят ";
			break;
		case 6:
			cout << "шестьдесят ";
			break;
		case 7:
			cout << "семдесят ";
			break;
		case 8:
			cout << "восемдесят ";
			break;
		case 9:
			cout << "девяносто ";
			break;
		}
		switch ((number % 100) / 10) {
		case 1:
			cout << "один" << endl;
			break;
		case 2:
			cout << "два" << endl;
			break;
		case 3:
			cout << "три" << endl;
			break;
		case 4:
			cout << "четыре" << endl;
			break;
		case 5:
			cout << "пять" << endl;
			break;
		case 6:
			cout << "шесть" << endl;
			break;
		case 7:
			cout << "семь" << endl;
			break;
		case 8:
			cout << "восемь" << endl;
			break;
		case 9:
			cout << "девять" << endl;
			break;
		}
	}
	cout << endl;
}



void task5() {
	int year;
	cout << "Введите год больше 1984: ";
	cin >> year;
	switch (year % 10) {
	case 1:
		cout << "белая ";
		break;
	case 3:
		cout << "черная ";
		break;
	case 5:
		cout << "зеленая ";
		break;
	case 7:
		cout << "красная ";
		break;
	case 9:
		cout << "желтая ";
		break;
	}
	switch ((year + 8) % 12) {
	case 0:
		cout << "крыса";
		break;
	case 1:
		cout << "корова";
		break;
	case 2:
		cout << "тигр";
		break;
	case 3:
		cout << "зайц";
		break;
	case 4:
		cout << "дракон";
		break;
	case 5:
		cout << "змея";
		break;
	case 6:
		cout << "лошадь";
		break;
	case 7:
		cout << "овца";
		break;
	case 8:
		cout << "обезьяна";
		break;
	case 9:
		cout << "курица";
		break;
	case 10:
		cout << "собака";
		break;
	case 11:
		cout << "свинья";
		break;
	}
	cout << endl;
}