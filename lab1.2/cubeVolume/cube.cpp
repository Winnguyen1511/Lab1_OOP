#include "cube.h"

cube::cube(double s)
{
    if(s >0) size = s;
}
void cube::setSize(double s)
{
    if(s > 0) size = s;
}
double cube::getSize(void)
{
    return size;
}
double cube::getVolume(void)
{
    return size*size*size;
}
void cube::getDetail(void)
{
    cout<<"\nThe details of the cube: \n";
    cout<<"Size = "<<size<<endl;
    cout<<"Volume = "<<this->getVolume()<<endl;
}
