#include<iostream>
using namespace std;

enum MealType{
    NO_PREF,
    REGULAR,
    LOW_FAT,
    VEGETERIAN
};

struct Passenger{
    string name;
    MealType mealPref;
    bool isFreqFlyer;
    long freqFlyerNo;
};

void print(short y){
    cout << y << endl;
}

void print(int x){
    cout << x << endl;
}

void print(const Passenger &pass){
    cout << pass.name << ", " << pass.freqFlyerNo << endl;
}

bool operator==(const Passenger &x, const Passenger &y){
    return (x.name == y.name 
            && x.mealPref == y.mealPref 
            && x.isFreqFlyer == y.isFreqFlyer 
            && x.freqFlyerNo == y.freqFlyerNo
    );
}

int main(){
    /* Overloading */
    int a = 10;
    Passenger p1 = {"John Doe", VEGETERIAN, true, 123456};
    Passenger p2 = {"Jane Doe", LOW_FAT, true, 987654};
    Passenger p3 = {"John Doe", VEGETERIAN, true, 123456};

    /* Function Overloading */
    print(45);
    print(p1);

    /* Operator Overloading */
    if(p1 == p2) cout << "Both passengers are equal." << endl;
    else cout << "Both passengers are not equal." << endl;

    if(p1 == p3) cout << "Both passengers are equal." << endl;
    else cout << "Both passengers are not equal." << endl;

    return 0;
}