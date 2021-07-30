#include <iostream>
#include <cmath>
#include <conio.h>

/*
    Source by Programiz
    Modified For Learn by RK
    I.D.E : VS2019
*/

using namespace std;

int main() {
    int q;
    double x = 165.3, y = 14.7;

    double hasil = remquo(x, y, &q);
    cout << "Remainder of " << x << "/" << y << " = " << hasil << endl;
    cout << "Quotient of " << x << "/" << y << " = " << q << endl << endl;

    x = -12.5;
    hasil = remquo(x, y, &q);
    cout << "Remainder of " << x << "/" << y << " = " << hasil << endl;
    cout << "Quotient of " << x << "/" << y << " = " << q << endl << endl;

    y = 0;
    hasil = remquo(x, y, &q);
    cout << "Remainder of " << x << "/" << y << " = " << hasil << endl;
    cout << "Quotient of " << x << "/" << y << " = " << q << endl << endl;

    _getch();
    return 0;
}