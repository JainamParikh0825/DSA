#include<iostream>
using namespace std;

int main(){
    /* Pointers */
    char ch = 'G';
    char *p = NULL;
    p = &ch;

    cout << "Address of ch variable:" << endl;
    cout << (void *) &ch << endl;
    cout << (void *) p << endl;

    cout << "Value in ch variable:" << endl;
    cout << ch << endl;
    cout << *p << endl;

    cout << "Manipulating value of ch variable using ch:" << endl;
    ch = 'K';
    cout << ch << endl;
    cout << *p << endl;

    cout << "Manipulating value of ch variable using pointer:" << endl;
    *p = 'T';
    cout << ch << endl;
    cout << *p << endl;

    return 0;
}