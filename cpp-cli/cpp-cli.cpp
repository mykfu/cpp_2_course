#include "pch.h"
#include <iostream>
using namespace System;

class NClass {
private:
    int v;

public:
    NClass() {
    }

    NClass(int v) {
        this->v = v;
    }

    int getV() {
        return v;
    }

};

ref class RClass {
private:    
    Int32 v;
    array<double>^ arr;

public:

    RClass() {

    }

    RClass(Int32 v) {
        this->v = v;
        arr = gcnew array<double>(v);
    }

    property double default[int] {
        double get(int index) {
            return arr[index];
        }
    }

    property double even[int] {
        double get(int index) {
            return arr[index * 2];
        }
    }

    property int V {
        int get() {
            return v;
        }

        void set(int v) {
            this->v = v;
        }
    }


    Int32 getV() {
        return v;
    }

};

value class VClass {
private:
    Int32 v;
public:
    VClass(int v) {
        this->v = v;
    }

    Int32 getV() {
        return v;
    }

};


int main()
{
    Console::WriteLine("hello world");

    std::cout << "native hello world\n";
    Boolean b; // bool
    Double d; // double
    Single f; // float

    Int32 i; // int
    Int64 l; // long int

    UInt32 k; // unsigned int

    NClass nc;

    NClass* ncP = new NClass();

    RClass^ rcl = gcnew RClass(10);

    System::Console::WriteLine("native getter=" + rcl->getV());
    System::Console::WriteLine("property=" + rcl->V);

    rcl->V = 100;
    System::Console::WriteLine("property after set=" + rcl->V);
    System::Console::WriteLine("[1]" + rcl[1]);
    System::Console::WriteLine("default[1]" + rcl->default[1]);
    System::Console::WriteLine("even[1]" + rcl->even[1]);

    VClass vcl(100);
    VClass vcl2;

    int length = 10;
    array<double>^ arr = gcnew array<double>(length);
    for (int i = 0; i < length; i++)
    {
        arr[i] = 10;
    }

    for each (double current in arr) {
        Console::Write(current + " ");
    }
    Console::WriteLine();





    return 0;
}
