#ifndef LISTSTUDENT_H_INCLUDED
#define LISTSTUDENT_H_INCLUDED
#include "Student.h"
#include "sorting.h"

#define     SORTED      true
#define     UNSORTED    false
#define     MAX_NUMBER_OF_STUDENT       100
#define     MATH_INPUT      0x01
#define     ENGLISH_INPUT   0x02
#define     PHYSIC_INPUT    0x04
#define     CHEM_INPUT      0x08

class ListStudent
{
private:
    Student *List;
    unsigned int numStudent;
    unsigned int LIST_SIZE;
    bool status;
public:
    ListStudent();
    ListStudent(unsigned int);
    void Submit_Mark(void);
    void SetStuDentMark(unsigned int num, unsigned int choice);
    void operator= (const ListStudent &);

    ListStudent operator+ (const Student&);//add a student
    void operator+= (const Student&);
    ListStudent operator-  (const Student&);
    ListStudent operator-  (LONG deleteID);
    ListStudent operator-  (unsigned int index);
    void operator-= (unsigned int index);
    void sortList_up_to_down(void);
    friend ostream &operator<< (ostream&, const ListStudent & );//print all the list
    //friend operator<< (LONG   printID);
    friend istream &operator>> (istream&, ListStudent &);//input and add new student at the end of the list



};
#endif // LISTSTUDENT_H_INCLUDED
