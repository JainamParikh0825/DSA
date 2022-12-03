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

int main(){
    Passenger p1 = {"John Smith", REGULAR, true, 123456};
    p1.mealPref = VEGETERIAN;
    cout << p1.name << ", " << p1.freqFlyerNo << endl;
    return 0;
}