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
    /* Dynamic Memory Allocation */
    Passenger *p;
    p = new Passenger;

    cout << "Address of Passenger in memory: " << p << endl;
    p->name = "Jane Doe";
    p->mealPref = LOW_FAT;
    p->isFreqFlyer = false;
    p->freqFlyerNo = 0;

    cout << "Passenger Name (before destroying): " << p->name << endl;

    delete p;

    /* Object is deleted, so it won't print anything */
    cout << "Passenger Name (after destroying): " << p->name << endl;

    return 0;
}