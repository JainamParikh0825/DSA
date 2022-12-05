#include<iostream>
using namespace std;

class Vect{
private:
    int *data;
    int size;
public:
    Vect(int n){
        cout << "Constructor called!" << endl;
        size = n;
        data = new int[n];
    };

    ~Vect(){
        cout << "Destructor called!" << endl;
        delete[] data;
    }
};

int main(){
    Vect v(5);
    return 0;
}