#ifndef POINT3D_H_INCLUDED
#define POINT3D_H_INCLUDED
#include <iostream>
#include <math.h>
using namespace std;
class Point3D
{
private :
    double x,y,z;
public:
    Point3D();
    Point3D(const Point3D&);
    Point3D(double,double,double);
    double distanceFromCenter(void);
    double  distanceFrom(double,double,double);
    double distanceFrom(const Point3D&);
    void getDetail(void);
};
#endif // POINT3D_H_INCLUDED
