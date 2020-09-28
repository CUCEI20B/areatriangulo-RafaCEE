#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int a, b;
    float area;

    cout << "Ingresa la base del triangulo: ";
    cin >> a;
    cout << "Ingresa la altura del triangulo: ";
    cin >> b;
    area = float(a*b)/2;

    cout << "El area del triangulo es "<<area;

    getch();

    return 0;
}