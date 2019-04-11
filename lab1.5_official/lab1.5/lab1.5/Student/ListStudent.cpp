#include "ListStudent.h"
ListStudent::ListStudent()
{
    LIST_SIZE = MAX_NUMBER_OF_STUDENT;
    List = new Student[LIST_SIZE];
    numStudent = 0;
    status = SORTED;
}
ListStudent::ListStudent(unsigned int input_number_of_student)
{
    if(MAX_NUMBER_OF_STUDENT < input_number_of_student)
        LIST_SIZE = input_number_of_student;
    else
        LIST_SIZE = input_number_of_student;
    List = new Student[LIST_SIZE];
    numStudent = 0;
    status = SORTED;
}
void ListStudent::Submit_Mark(void)
{
    cout<<"Please choose the student in the list: ";
    unsigned int num;cin>>num;
    cout<<"Please choose the subjects to submit the mark: \n";
    cout<<"1) Math. 2)English. 3)Physics. 4)Chemistry\n";
    cout<<">Choice: ";
    string char_choice;
    cin>>char_choice;
    unsigned int binary_choice = 0;
    for(int i= 0; i < char_choice.length(); i++)
    {
        unsigned int tmp = char_choice[i] - '0';
        if(1 == tmp) binary_choice |= MATH_INPUT;
        if(2 == tmp) binary_choice |= ENGLISH_INPUT;
        if(3 == tmp) binary_choice |= PHYSIC_INPUT;
        if(4 == tmp) binary_choice |= CHEM_INPUT;
    }
    this->SetStuDentMark(num,binary_choice);
}
void ListStudent::SetStuDentMark(unsigned int num, unsigned int choice)
{
    unsigned int index = num-1;
    if(choice & MATH_INPUT)
    {
        double value;
        cout<<"\n>Math: ";cin>>value;
        this->List[index].setMathMark(value);
    }
    if(choice & ENGLISH_INPUT)
    {
        double value;
        cout<<"\n>English: ";cin>>value;
        this->List[index].setEnglishMark(value);
    }
    if(choice & PHYSIC_INPUT)
    {
        double value;
        cout<<"\n>Physics: ";cin>>value;
        this->List[index].setPhysicsMark(value);
    }
    if(choice & CHEM_INPUT)
    {
        double value;
        cout<<"\n>Chemistry: ";cin>>value;
        this->List[index].setChemistryMark(value);
    }
}
void ListStudent::operator= (const ListStudent &that)
{
    this->List = that.List;
    this->numStudent = that.numStudent;
    this->LIST_SIZE = that.LIST_SIZE;
    this->status = that.status;
}

ListStudent ListStudent::operator+ (const Student&that)
{
    Student tmp = that;
    if(this->numStudent < LIST_SIZE)
        this->numStudent++;
    else
    {
        return *this;
    }
    this->List[numStudent-1] = tmp;
    this->status = UNSORTED;
    return *this;

}//add a student
void ListStudent::operator+=(const Student &that)
{
    *this = *this + that;
}
ListStudent ListStudent::operator-  (const Student& that)
{

}
ListStudent ListStudent::operator-  (LONG deleteID)
{
    /*int i;
    for (i=0; i < this->numStudent; i++)
    {
        if (this->List[i].getID())
            break;
    }
    for (int j = i; j < this->numStudent -1 ; j++)
    {
        this->List[j] = this->List[j+1];
    }
    this->numStudent--;*/
}
ListStudent ListStudent::operator-  (unsigned int index)
{
    ListStudent tmp = *this;
    for (int j = index; j < tmp.numStudent -1 ; j++)
    {
        tmp.List[j] = tmp.List[j+1];
    }
    tmp.numStudent--;
    return tmp;
}
void ListStudent::operator-=(unsigned int index )
{
    *this = *this - index;
}
void ListStudent::sortList_up_to_down(void)
{
    merge_sort(this->List, this->numStudent);
    this->status = SORTED;
}

ostream& operator<< (ostream& out, const ListStudent & thisList )//print all the list
{
    ListStudent tmp = thisList;
    out<<"The list contains "<<tmp.numStudent<<endl;
    out<<"#NUM\tName\tID\t\tMath\tEnglish\tPhysics\tChemistry\tAverage\n";
    for(int i=0; i < tmp.numStudent ; i++)
    {
        out<<i+1<<"\t"<<tmp.List[i].GetName()
                <<"\t"<<tmp.List[i].getID()
                <<"\t"<<tmp.List[i].GetMathMark()
                <<"\t"<<tmp.List[i].GetEnglishMark()
                <<"\t"<<tmp.List[i].GetPhysicsMark()
                <<"\t"<<tmp.List[i].GetChemistryMark()
                <<"\t\t"<<tmp.List[i].getAverage()<<endl;
    }
    return out;
}

    //friend operator<< (LONG   printID);
istream &operator>> (istream&in , ListStudent & thisList)//input and add new student at the end of the list
{
    Student tmp;
    in>>tmp;
    thisList = thisList + tmp;
    return in;
}

