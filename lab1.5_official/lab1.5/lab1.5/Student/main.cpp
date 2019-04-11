#include "ListStudent.h"
void lineFeed(void)
{
    cout<<"........................................";
    cout<<"........................................\n";
    cout<<"........................................";
    cout<<"........................................\n";
}
int main()
{
    int numStudent = 20;
    ListStudent myList = ListStudent(20);
    Student stu1 = Student("Khoa", 123160053, 90, 90, 70, 100);
    myList += stu1;
    Student stu2 = Student("Linh", 12316058, 80, 80, 70, 90);
    myList += stu2;
    Student stu3 = Student("Hien",123160046, 60, 80, 60, 70);
    myList += stu3;
    Student stu4 = Student("Co",123160050, 30, 50,30, 40);
    myList += stu4;
    Student stu5 = Student("Lam",123160057, 50, 70, 50, 60);
    myList += stu5;
    cout<<myList;
    lineFeed();
    cout<<"=>>Testing the sort function: \n";
    myList.sortList_up_to_down();
    cout<<myList;
    lineFeed();
    cout<<"=>>Testing the operator delete: \n";
    cout<<"->Delete the second student... \n";
    myList -= 1;
    cout<<"<<Deleting completed.>>\n";
    cout<<myList;
    lineFeed();
    cout<<"=>>Testing the operator add: \n";
    cin>>myList;
    cout<<"<<Adding completed.>>";
    cout<<myList;
    cout<<"%%You have to submit the score...\n";
    myList.Submit_Mark();
    cout<<"<<Submit complete.>>\n";
    cout<<myList;
    lineFeed();
    return 0;
}
