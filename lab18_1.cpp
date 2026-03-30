#include<iostream>
using namespace std;

struct Rect{
    double x, y, w, h;
};

double overlap(Rect r1, Rect r2){
    double x_left = max(r1.x, r2.x);
    double x_right = min(r1.x + r1.w, r2.x + r2.w);
    double overlap_w = x_right - x_left;

    double y_top = min(r1.y, r2.y);
    double y_bottom = max(r1.y - r1.h, r2.y - r2.h);
    double overlap_h = y_top - y_bottom;

    if(overlap_w <= 0 || overlap_h <= 0) return 0;
    return overlap_w * overlap_h;
}