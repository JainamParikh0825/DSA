#include<iostream>
using namespace std;

class Vect{
private:
    int size;
    int *data;
public:
    Vect();
    Vect(int);
    Vect(const Vect &v){
        size = v.size;
        data = new int[v.size];
        for (int i = 0; i < size; ++i){
            data[i] = v.data[i];
        }
    }
    Vect& operator=(const Vect &v){
        if(this != &v){
            delete[] data;
            size = v.size;
            data = new int[size];

            for (int i = 0; i < size; ++i){
                data[i] = v.data[i];
            }
        }
        return *this;
    };
    void manipulateArrayElement(int index, int value){
        data[index] = value;
    }
    void printArrayElement(int index){
        cout << data[index] << endl;
    }
    ~Vect(){
        delete[] data;
    }
};

Vect::Vect(){
    size = 10;
    data = new int[10];
}

Vect::Vect(int n){
    size = n;
    data = new int[n];
}

int main(){
    Vect a(20);
    a.manipulateArrayElement(0, 111);
    a.printArrayElement(0);

    Vect b = a;
    b.manipulateArrayElement(0, 211);
    b.manipulateArrayElement(1, 212);

    b.printArrayElement(0);
    b.printArrayElement(1);

    a.printArrayElement(0);
    a.printArrayElement(1);

    Vect c;
    c = a;

    return 0;
}