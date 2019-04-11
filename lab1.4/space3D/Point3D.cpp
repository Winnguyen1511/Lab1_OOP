#include "Point3D.h"

Point3D::Point3D()
{
    x = y = z = 0;
}
Point3D::Point3D(const Point3D& that)
{
    this->x = that.x;
    this->y = that.y;
    this->z = that.z;
}
Point3D::Point3D(double tmpx, double tmpy, double tmpz)
{
    this->x = tmpx;
    this->y = tmpy;
    this->z = tmpz;
}
double Point3D::distanceFromCenter(void)
{
    return this->distanceFrom(0,0,0);
}
double  Point3D::distanceFrom(double x0,double y0,double z0)
{
    double distance_power_2 = pow(this->x - x0,2)
                            + pow(this->y - y0,2)
                            + pow(this->z - z0,2);
    return sqrt(distance_power_2);
}
double Point3D::distanceFrom(const Point3D& that)
{
    double distance_power_2 = pow(this->x - that.x,2)
                            + pow(this->y - that.y,2)
                            + pow(this->z - that.z,2);
    return sqrt(distance_power_2);
}
void Point3D::getDetail(void)
{
    cout<<"The coordinates are :\n";
    cout<<"x = "<<this->x<<", y = "<<this->y<<", z = "<<this->z<<endl;
}
