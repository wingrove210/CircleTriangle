#include <iostream>
#include <cmath>
#include "Circle.h"
using namespace std;


void circle::set_circle(float r, float x, float y) {
        radius = r;
        x_center = x;
        y_center = y;
}
float circle::square(float a, float b, float c) {
    double p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}
circle::circle() {

}
bool circle::triangle_around(float a, float b, float c) {
    return(radius == (a * b * c) / (4 * square(a, b, c)));
}
bool circle::triangle_in(float a, float b, float c) {
    return(radius == square(a, b, c) * (a + b + c));
}
bool circle::check_circle(float r, float x_cntr, float y_cntr) {
    return(sqrt(pow(x_cntr - x_center, 2) + pow(y_cntr - y_center, 2)) <= r + radius);
}



