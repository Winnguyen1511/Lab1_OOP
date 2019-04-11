#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include <iostream>
using namespace std;
//extern double value;
#define     VALID_MARK              value>0&&value<=100
#define     NUMBER_OF_SUBJECTS      4
typedef     long long               LONG;
struct markList
{
  double math,english,physics,chemistry;
};
class Student
{
private:
    string name;
    long ID;
    markList mark;
public:
    Student(string,LONG);
    void setMathMark(double);
    void setEnglishMark(double);
    void setPhysicsMark(double);
    void setChemistryMark(double);
    double getAverage(void);
    void displayDetail(void);

};

#endif // STUDENT_H_INCLUDED
