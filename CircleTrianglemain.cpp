#include <iostream> 
#include <locale> 
#include "Circle.h"
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    circle mas[3];
    for (int i = 0; i < 3; i++) {
        float r, x, y;
        cout << "Введите радиус и координаты центра для окружности " << endl;
        cin >> r >> x >> y;
        mas[i].set_circle(r, x, y);
        float a, b, c;
        cout << "Введите стороны треугольника" << endl;
        cin >> a >> b >> c;
        if (mas[i].triangle_around(a, b, c)) {
            cout << "Можно описать окружность" << endl;
        }
        else {
            cout << "Нельзя описать окружность" << endl;
        }
        if (mas[i].triangle_in(a, b, c)) {
            cout << "Можно вписать в окружность" << endl;
        }
        else {
            cout << "Нельзя вписать в окружность" << endl;
        }
        cout << "Введите радиус и координаты центра для второй окружности" << endl;
        float R, x_cntr, y_cntr;
        cin >> R >> x_cntr >> y_cntr;
        if (mas[i].check_circle(R, x_cntr, y_cntr)) {
            cout << "Окружности пересекаются" << endl;
        }
        else {
            cout << "Окружности не пересекаются" << endl;
        }
    }
    return 0;
}