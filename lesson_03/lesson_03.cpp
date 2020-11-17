// lesson_03.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


class Point {
protected:
    int x;
    int y;

public:

    Point& operator=(Point& rhs) {
        this->x = rhs.getX();
        this->y = rhs.getY();
        return (*this);
    }

    Point(int x = 0, int y = 0) : x(x), y(y) {}

    int getX() {
        return x;
    }

    int getY() {
        return y;
    }

    void setX(int x) {
        this->x = x;
    }

    void setY(int y) {
        this->y = y;
    }

    virtual void print() const {
        cout << "Point(" << x << ", " << y << ")\n";
    }
};

class MovablePoint : public Point {
private:
    int xSpeed;
    int ySpeed;
    
public:
    MovablePoint(int x, int y,
        int xSpeed = 0, int ySpeed = 0) :
        Point(x, y), xSpeed(xSpeed), ySpeed(ySpeed) {}



    int getXSpeed() {
        return xSpeed;
    }

    int getYSpeed() {
        return ySpeed;
    }

    void move() {
        Point::setX(x + xSpeed);
        Point::setY(y + ySpeed);
    }

    virtual void print() const {
        cout << "Movable";
        Point::print();
        cout << ", (" << xSpeed << ", "
            << ySpeed << ")\n";
    }
};

void lesson_03()
{
    Point p1;
    Point p2(1);
    Point p3(1, 3);
    Point *p4 = &p3;

    p1.print();
    p2.print();
    p3.print();

    Point* pPt = new Point(3, 4);

    (*pPt).print();
    pPt->print();


    MovablePoint* pMp = new MovablePoint(3, 4, 10, 0);
    pMp->print();
    cout << endl;
    pMp->move();
    pMp->print();



    Point* pPt2 = new MovablePoint(10, 20, 4, 5);
    pPt2->print();

    Point* pPt5 = pMp;
    pPt5->print();

    MovablePoint mp(123, 321, 10, 100);

    Point p5 = mp;
    p5.print();

    pMp = (MovablePoint*)pPt5;

    pMp->print();

    delete pPt;
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
