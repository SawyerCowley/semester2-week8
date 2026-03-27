
#include <stdbool.h>
#include <math.h>

#include "shapes.h"

Point makePoint( float x, float y ) {
    Point new;
    // implementation
    new.x = x;
    new.y = y;
    return new;
}

Line makeLine( Point p1, Point p2){
    Line new;
    new.p[0] = p1;
    new.p[1] = p2;
    return new;
}

Triangle makeTriangle( Point p1, Point p2, Point p3){
    Triangle New
    new.p[0] = p1;
    new.p[1] = p2;
    new.p[2] = p3;
    return new;
}

lineLength( Line l){
    float temp = pow((l.p[0].x - l.p[1].x), 2) + pow((l.p[0].y - l.p[1].y), 2);
    temp = sqrt(temp);
    return fabs(temp);
}

triangleArea( Triangle t){
    float area = 0.5(fabs((t.p[0].x*(t.p[1].y - t.p[2].y)) + (t.p[1].x*(t.p[2].y - t.p[0].y)) + (t.p[2].x*(t.p[0].y - t.p[1].y)));
    return are;
}

samePoint( Point p1, Point p2){
    if((lineLength(makeLine(Point p1, Point p2))) < 1.0e-6){
        return true;
    }
    else{
        return false;
    }
}

pointInLine( Point p, Line l){
    return samePoint(Point p, l.p[0]) || samePoint(Point p, l.p[1]);
}

pointInTriangle( Point p, Triangle t){
    return samePoint(Point p, t.p[0]) || samePoint(Point p, t.p[1]) || samePoint(Point p, t.p[2]);
}

// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()
