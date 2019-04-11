#include "Student.h"

Student::Student(string name,LONG id)
{
    this->name = name;
    this->ID = id;
}
void Student::setMathMark(double value)
{
    if (VALID_MARK)
        (this->mark).math = value;
}
void Student::setEnglishMark(double value)
{
    if(VALID_MARK)
        (this->mark).english = value;
}
void Student::setPhysicsMark(double value)
{
    if(VALID_MARK)
        (this->mark).physics = value;
}
void Student::setChemistryMark(double value)
{
    if(VALID_MARK)
        (this->mark).chemistry = value;
}
double Student::getAverage(void)
{
    double results = 0;
    results = (mark.math + mark.english + mark.physics + mark.chemistry)/NUMBER_OF_SUBJECTS;
    return results;
}
void Student::displayDetail(void)
{
    cout<<"Name: "<<this->name;
    cout<<"; ID: "<<this->ID;
    cout<<"; average : "<<this->getAverage()<<endl;
}
