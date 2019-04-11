#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include <iostream>
#include <cstdlib>
using namespace std;

#define     VALID_MARK              value>0&&value<=100
#define     NUMBER_OF_SUBJECTS      4
#define     GOOD_MARK               90
#define     FAIR_MARK               70
#define     MEDIUM_MARK             50
#define     WEAK_MARK               30

#define     INVALID_QUALIFIED       "invalid"
#define     GOOD_QUALIFIED          "good"
#define     FAIR_QUALIFIED          "fair"
#define     MEDIUM_QUALIFIED        "medium"
#define     WEAK_QUALIFIED          "weak"

typedef     long long               LONG;
struct markList
{
  double math,english,physics,chemistry;
};
class Student
{
private:
    string name;
    LONG ID;
    markList mark;
public:
    Student();
    Student(string,LONG);
    Student(string input_name,LONG input_ID,double input_math,double input_english,double input_physics,double input_chem);
    LONG getID(void)
    {
        return this->ID;
    }
    void setMathMark(double);
    void setEnglishMark(double);
    void setPhysicsMark(double);
    void setChemistryMark(double);
    string GetName(void){
        return  this->name;}
    double GetMathMark(void);
    double GetEnglishMark(void);
    double GetPhysicsMark(void);
    double GetChemistryMark(void);
    double getAverage(void);
    void displayDetail(void);
    string getQualify(void);
    void operator=(const Student&);
    bool operator > (const Student&);
    bool operator < (const Student&);
    bool operator ==(const Student&);
    bool operator <= (const Student&);
    bool operator >= (const Student&);
    friend ostream &operator<< (ostream&, const Student &);//print specific student
    friend istream &operator>> (istream&, Student &);//input a student info
};

#endif // STUDENT_H_INCLUDED
