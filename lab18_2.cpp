#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect* r1, Rect* r2) {
    double r1_left = r1->x;
    double r1_right = r1->x + r1->w;
    double r2_left = r2->x;
    double r2_right = r2->x + r2->w;

    double x_overlap = max(0.0, min(r1_right, r2_right) - max(r1_left, r2_left));

    double r1_top = r1->y;
    double r1_bottom = r1->y - r1->h;
    double r2_top = r2->y;
    double r2_bottom = r2->y - r2->h;

    double y_overlap = max(0.0, min(r1_top, r2_top) - max(r1_bottom, r2_bottom));

    return x_overlap * y_overlap;
}