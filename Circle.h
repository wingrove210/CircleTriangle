#pragma once

class circle {
private:
    float radius, x_center, y_center;

public:
    bool triangle_around(float a, float b, float c);
    float square(float a, float b, float c);
    void set_circle(float r, float x, float y);
    bool triangle_in(float a, float b, float c);
    bool check_circle(float r, float x_cntr, float y_cntr);
    circle();
};
