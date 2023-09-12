#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    double a, b, c;

    cout << "Введите сторону a: ";
    cin >> a;
    cout << "Введите сторону b: ";
    cin >> b;
    cout << "Введите сторону c: ";
    cin >> c;

    double v = a * (b * c);
    double s = 2 * ((a * b) + (b * c) + (a * c));

    cout << "Объем параллелепипеда: " << v << endl;
    cout << "Площадь поверхности параллелепипеда: " << s << endl;
}