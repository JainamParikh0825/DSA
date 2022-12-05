#include<iostream>
using namespace std;

class Counter{
public:
    Counter();
    int getCount();
    void increaseBy(int);
private:
    int count;
};

Counter::Counter(){
    count = 0;
}

int Counter::getCount(){
    return count;
}

void Counter::increaseBy(int x){
    count += x;
}

int main(){
    Counter c;
    
    cout << c.getCount() << endl;
    c.increaseBy(3);

    cout << c.getCount() << endl;
    c.increaseBy(6);

    cout << c.getCount() << endl;
    return 0;
}