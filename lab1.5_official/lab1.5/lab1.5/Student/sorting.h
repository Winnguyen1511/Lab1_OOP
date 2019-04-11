#ifndef SORTING_H_INCLUDED
#define SORTING_H_INCLUDED
#include "Student.h"
#define     MAX_SIZE    100
void merge (Student*, Student*,int,int,int);
void merge_pass(Student*, Student*, int, int);
void merge_sort(Student*,int);

#endif // SORTING_H_INCLUDED
