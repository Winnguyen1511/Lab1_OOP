#include "Student.h"

Student::Student()
{
    this->name = "";
    this->ID = 0;
    this->mark.math = 0;
    this->mark.english = 0;
    this->mark.physics = 0;
    this->mark.chemistry = 0;
}
Student::Student(string name,LONG id)
{
    this->name = name;
    this->ID = id;
    this->mark.math = 0;
    this->mark.english = 0;
    this->mark.physics = 0;
    this->mark.chemistry = 0;
}
Student::Student(string name,LONG ID,double math,double english,double physics,double chemistry)
{
    this->name = name;
    this->ID = ID;
    this->mark.math = math;
    this->mark.english = english;
    this->mark.physics = physics;
    this->mark.chemistry = chemistry;
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
double Student::GetMathMark(void)
{
    return this->mark.math;
}
double Student::GetEnglishMark(void)
{
    return this->mark.english;
}
double Student::GetPhysicsMark(void)
{
    return this->mark.physics;
}
double Student::GetChemistryMark(void)
{
    return this->mark.chemistry;
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
void Student::operator=(const Student& that)
{
    this->name = that.name;
    this->ID = that.ID;
    this->mark.math = that.mark.math;
    this->mark.english = that.mark.english;
    this->mark.physics =that.mark.physics;
    this->mark.chemistry = that.mark.chemistry;
}
string Student::getQualify(void)
{
    double  avr_mark = this->getAverage();
    if(avr_mark >= GOOD_MARK)
        return GOOD_QUALIFIED;
    else if (avr_mark >= FAIR_MARK)
        return FAIR_QUALIFIED;
    else if (avr_mark >= MEDIUM_MARK)
        return MEDIUM_QUALIFIED;
    else if( avr_mark >= WEAK_MARK)
        return WEAK_QUALIFIED;
    else
        return INVALID_QUALIFIED;
}
bool Student::operator > (const Student& that)
{
    Student tmp = that;
    return this->getAverage() > tmp.getAverage();
}
bool Student::operator < (const Student& that)
{
    Student tmp = that;
    return this->getAverage() < tmp.getAverage();
}
bool Student::operator ==(const Student& that)
{
    Student tmp = that;
    return this->getAverage() == tmp.getAverage();
}
bool Student::operator <= (const Student& that)
{
    return (*this < that)||(*this == that);
}
bool Student::operator >= (const Student& that)
{
    return (*this > that) || (*this == that);
}
ostream &operator<< (ostream&out, const Student & thisStudent)//print specific student
{
    Student tmp = thisStudent;
    out<<"Here is the info of the student: \n";
    out<<"Name: "<<tmp.GetName()<<endl;
    out<<"Mark: math:"<<tmp.GetMathMark()
        <<", English:"<<tmp.GetEnglishMark()
        <<", Physics:"<<tmp.GetPhysicsMark()
        <<", Chemistry:"<<tmp.GetChemistryMark()<<endl;
    out<<"Average mark:"<<tmp.getAverage()<<"-"<<tmp.getQualify();
    return out;

}
istream &operator>> (istream& in, Student & thisStudent)//input a student info
{
    string name;
    LONG ID;
    cout<<"...Student information...\n";
    cout<<">Name: ";in>>name;
    cout<<">ID: ";in>>ID;cout<<endl;
    thisStudent = Student(name,ID);
    return in;
}
