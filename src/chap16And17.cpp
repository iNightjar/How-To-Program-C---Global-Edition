//
// Created by inightjar on 7/9/21.
//

// create a gradeBook with a member function displayMessage
#include <bits/stdc++.h>

#include <utility>
using namespace std;

/*class gradeBook{
public: gradeBook(){
        cout<<"From inside the constructor"<<endl;
        }

public : // access specifier
    void displayMessage()const{
    cout<<"Welcome to the gradeBook!"<<endl;
    }
};
int main() {
    gradeBook mygradebook ; // creates an object called mygradebook
    mygradebook.displayMessage();
    return 0;
}*/

/*class gradeBook{
private:
    string courseName ;
public:
    // function that sets  the course name
    void setCourseName(string name)
    {
        courseName = name;
    }
    string getCourseName()const{
        return courseName;
    }
    void displayMessage()const{
        cout<<"Welcome to the grade book for\n"<<getCourseName()<<" "<<endl;
    }
};
int main(){
    string nameOfCourse;
    gradeBook myGradeBook;
    cout<<"initial course name is:  "<<myGradeBook.getCourseName();

    //cout<<"\n Please enter the course name: "<<endl;
    getline(cin,nameOfCourse);
    myGradeBook.setCourseName(nameOfCourse);
    myGradeBook.displayMessage();
}*/