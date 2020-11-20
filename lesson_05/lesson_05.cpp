// lesson_05.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#define NDEBUG
#include <cassert>
#define PI 3.14
#define out(X) (cout << #X << " = " << X << endl)
using namespace std;

enum Error {OK, LN, SQRT};
Error errcode;
//
//double f(double x) {// x <= 0; x > e^10 ~= 22000
//    if (x <= 0) {
//        errcode = LN;
//        return 0;
//    }
//    if (x > exp(10)) {
//        errcode = SQRT;
//        return 0;
//    }
//    errcode = OK;
//    return sqrt(10 - log(x)); 
//}

// throw string
//double f(double x) {// x <= 0; x > e^10 ~= 22000
//    if (x <= 0) throw "Logarithm undefined.";
//    if (x > exp(10)) throw "Square root undefined.";
//    return sqrt(10 - log(x)); 
//}

class LnException : public exception {
    virtual const char* what() const throw() {
        return "Logarithm undefined.";
    }
};
class SqrtException : public exception {
    virtual const char* what() const throw() {
        return "Square root undefined.";
    }
};
//
//double f(double x) {// x <= 0; x > e^10 ~= 22000
//    if (x <= 0) throw LnException();
//    if (x > exp(10)) throw SqrtException();
//    return sqrt(10 - log(x)); 
//}

double f(double x) {// x <= 0; x > e^10 ~= 22000
    if (x <= 0) throw LN;
    if (x > exp(10)) throw SQRT;
    return sqrt(10 - log(x)); 
}

int main()
{
    //out(abs(-123));
    double x, y;
    cout << "Enter x:\n";
    cin >> x;
    assert(x > 0 && x < exp(10) && "Undefined value.");

    static_assert(sizeof(int) == 4, "Size of int is not 4.");

    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;
    cout << sizeof(long long int) << endl;


    // throw string
    //try {
    //    y = f(x);
    //}
    //catch (const char* msg) {
    //    cerr << "Error: " << msg << endl;
    //    return EXIT_FAILURE;
    //}

    //cout << "y = f(x) = " << y << endl;
    //return EXIT_SUCCESS;

    // throw exception class inherite exception
    try {
        y = f(x);
    }
    catch (Error err) {
        cerr << "Error: " << err << endl;
        return EXIT_FAILURE;
    }
    //try {
    //    y = f(x);
    //}
    //catch (exception& ex) {
    //    cerr << "Error: " << ex.what() << endl;
    //    return EXIT_FAILURE;
    //}
    //// throw exception class 
    //try {
    //    y = f(x);
    //}
    //catch (LnException ex) {
    //    cerr << "Error: " << "Logarithm undefined." << endl;
    //    return EXIT_FAILURE;
    //}
    //catch (SqrtException ex) {
    //    cerr << "Error: " << "Square root undefined." << endl;
    //    return EXIT_FAILURE;
    //}

    cout << "y = f(x) = " << y << endl;
    return EXIT_SUCCESS;

    //switch (errcode)
    //{
    //case OK:
    //    cout << "y = f(x) = " << y << endl;
    //    return EXIT_SUCCESS;
    //case LN:
    //    cerr << "Logarithm undefined.\n";
    //    return EXIT_FAILURE;
    //case SQRT:
    //    cerr << "Squre root undefined.\n";
    //    return EXIT_FAILURE;
    //default:
    //    break;
    //}



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
