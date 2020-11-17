#include<iostream>
#include"Number.h"
#include"Complex.h"


using namespace std;
//
//void func(int x) {
//	cout << x;
//}
//
//void func(double x) {
//	cout << x;
//}
//
//void func(long long int x) {
//	cout << x;
//}

template<typename T> // or template<class T>
void func(T* x) {
	cout << *x;
}

template<typename T, typename U>
void func2(T t, U u) {
	
	cout << t << u;
}

template<typename T>
class NumberGeneric {
private:
	T value;

public:
	NumberGeneric(T value = 0) : value(value) {}
	T getValue() {
		return value;
	}

	void setValue(T value) {
		this->value = value;
	}
	
	template<typename U>
	void func(U param) {}
};


template<typename T>
void func2(T t) {
	NumberGeneric<T> n(t);
	cout << t << u;
}

int main() {
	setlocale(LC_ALL, "RU");
	Number* num1 = new Number(100);

	Number* num2 = new Complex(399, 12);

	cout << "num1 = " << *num1 << endl;
	cout << "num2 = " << *num2 << endl;

	func(num2);
	func(new int(123));

	NumberGeneric<int> n(123);
	NumberGeneric<double> d(123.123);
	cout << n.getValue() << endl;


}