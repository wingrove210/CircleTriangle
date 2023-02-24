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
        cout << "������� ������ � ���������� ������ ��� ���������� " << endl;
        cin >> r >> x >> y;
        mas[i].set_circle(r, x, y);
        float a, b, c;
        cout << "������� ������� ������������" << endl;
        cin >> a >> b >> c;
        if (mas[i].triangle_around(a, b, c)) {
            cout << "����� ������� ����������" << endl;
        }
        else {
            cout << "������ ������� ����������" << endl;
        }
        if (mas[i].triangle_in(a, b, c)) {
            cout << "����� ������� � ����������" << endl;
        }
        else {
            cout << "������ ������� � ����������" << endl;
        }
        cout << "������� ������ � ���������� ������ ��� ������ ����������" << endl;
        float R, x_cntr, y_cntr;
        cin >> R >> x_cntr >> y_cntr;
        if (mas[i].check_circle(R, x_cntr, y_cntr)) {
            cout << "���������� ������������" << endl;
        }
        else {
            cout << "���������� �� ������������" << endl;
        }
    }
    return 0;
}