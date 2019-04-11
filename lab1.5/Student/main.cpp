#include "Student.h"

int main()
{
    Student stu = Student("Khoa", 123160053);
    stu.setChemistryMark(98);
    stu.setEnglishMark(88);
    stu.setPhysicsMark(78);
    stu.setMathMark(100);
    stu.displayDetail();
    return 0;
}
