
#include <stdio.h>
#include "shapes.h"

int main( void ) {

    // complete the structure definition in the header file first
    // code in main to test the structures and functions
    Rectangle r1;
    Point p1 = {0,0};
    r1 = makeRectangle(p1, 10, 20);
    printf("%f", area(r1));
    return 0;
}

Rectangle makeRectangle( Point p, float width, float height ){
    Rectangle r;
    r.point = p;
    r.width = width;
    r.height = height;
    return r;
}

float area( Rectangle r ) {
    float a = 0.0;
    a = r.width * r.height;
    return a;
}

void shiftRectangle( Rectangle *r, Point dp ) {

    return;
}

void scaleRectangle( Rectangle *r, float scale ) {
    r->width = r->width * scale;
    r->height = r->height * scale;
    return;
}
