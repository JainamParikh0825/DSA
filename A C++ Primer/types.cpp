#include<iostream>
using namespace std;

int main(){
    /* Fundamental Types */
    bool isMarried = false;
    char gender = 'M';
    short age = 23;
    int salary = 1000000;
    long mobileNo = 1234567890;
    float weight = 60.5f;
    double speed = 23.43956245;

    /* Enums */
    enum Day{ SUN, MON, TUE, WED, THU, FRI, SAT };
    enum Mood{ HAPPY = 3, SAD = 1, ANXIOUS = 4, SLEEPY = 2 };

    Day today = THU;
    Mood myMood = SLEEPY;

    cout << "Today is: " << today << endl;
    cout << "My mood right now: " << myMood << endl;
}