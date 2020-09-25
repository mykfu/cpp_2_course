// 05-901-project.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include "LinkedList.h"

using namespace std;

struct Student {
	char fio[50];
	int age;
	char group[7];
};

class Circle {

	// private, protected, public
private:
	double radius;
	string color;

public:
	Circle() {
		this->radius = 0.0;
		this->color = "white";
	}

	Circle(double radius, string color) {
		this->radius = radius;
		this->color = color;
	}

	double getRadius() {
		return radius;
	}

	string getColor() {
		return color;
	}

	void setRadius(double radius) {
		this->radius = radius;
	}

	void print() {
		cout << color << " circle with radius " << radius << endl;
	}

};

int main()
{
	Student ivan = { "Ivanov", 18, "05-901" };

	cout << ivan.fio << endl;
	
	Circle circle1(1, "red");

	cout << circle1.getColor() << endl;

	circle1.print();


	Node el3(3);
	Node el2(2, &el3);
	Node el1(1, &el2);
	LinkedList list(&el1);
	list.print();
	cout << endl;
	LinkedList list2(nullptr);
	list2.add(100);
	list2.print();

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
