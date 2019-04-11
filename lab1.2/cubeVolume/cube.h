#ifndef CUBE_H_INCLUDED
#define CUBE_H_INCLUDED
#include <iostream>
using namespace std;
class cube
{
private:
    double size;
public:
    cube(double);
    void setSize(double);
    double getSize(void);
    double  getVolume(void);
    void getDetail(void);
};


#endif // CUBE_H_INCLUDED
