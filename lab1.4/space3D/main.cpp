#include "Point3D.h"

using namespace std;

int main()
{
    Point3D point_1 = Point3D(3,7,8);
    Point3D point_2 = Point3D(2,3,4);
    cout<<"Point 1: ";
    point_1.getDetail();
    cout<<"Point 2: ";
    point_2.getDetail();
    cout<<"Distance between point 1 and (0,0,0) is: "
        <<point_1.distanceFromCenter()<<endl;
    cout<<"Distance between point 1 and point 2 is: "
        <<point_1.distanceFrom(point_2)<<endl;
    return 0;
}
