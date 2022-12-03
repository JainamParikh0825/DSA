#include<iostream>
using namespace std;

int main(){
    /* Arrays */
    int a[5];
    char b[] = {'W', 'o', 'W'};
    double c[4] = {2.3, 5.6, 7.8, 1.4};

    /* 2D Arrays */
    int m[2][4]; // row(2) x column(4)
    int n[2][3] = {
        {1, 5, 7},
        {4, 7, 20}
    };

    /* Array of Pointers */
    int *ptrs[5];

    /* Assigning value to Array Elements */
    a[0] = 33;
    a[1] = 4;

    b[1] = 'O';

    c[3] = 1.2;

    m[0][0] = 23;
    m[1][2] = 45;

    ptrs[0] = &a[0];

    /* Accessing Array Elements */
    cout << a[0] << ", " << a[1] << endl;
    cout << b[1] << endl;
    cout << c[3] << endl;

    cout << m[0][0] << ", " << m[1][2] << endl;

    cout << *ptrs[0] << ", " << ptrs[0] << endl;

    return 0;
}