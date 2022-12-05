#include<iostream>
using namespace std;

enum MealType{
    NO_PREF,
    VEGETERIAN,
    NON_VEG,
    LOW_FAT
};

class Passenger{
private:
    string name;
    MealType mealPref;
    bool isFreqFlyer;
    string freqFlyerNumber;
public:
    /* Default Constructor */
    Passenger();

    /* Parameterized Constructor */
    Passenger(const string &n, const MealType &mealPref, const string &ffn);

    /* Copy Constructor */
    Passenger(const Passenger &p);
};

Passenger::Passenger(){
    name = "--NO NAME--";
    mealPref = NO_PREF;
    isFreqFlyer = false;
    freqFlyerNumber = "NONE";
};

Passenger::Passenger(const string &n, const MealType &mPref, const string &ffn = "NONE"){
    name = n;
    mealPref = mPref;
    isFreqFlyer = ffn != "NONE";
    freqFlyerNumber = ffn;
}

Passenger::Passenger(const Passenger &pass){
    name = pass.name;
    mealPref = pass.mealPref;
    isFreqFlyer = pass.isFreqFlyer;
    freqFlyerNumber = pass.freqFlyerNumber;
}

int main(){
    // Default Constructor
    Passenger p1; 

    // Parameterized Constructor
    Passenger p2("John Doe", VEGETERIAN, "123456");
    Passenger p3("Jane Doe", NON_VEG);

    // Copy Constructor
    Passenger p4(p3);
    Passenger p5 = p2;

    // Dynamic initialization
    Passenger *pp1 = new Passenger();
    Passenger *pp2 = new Passenger("Snowcube Summer", NO_PREF, "876543");
    return 0;
}