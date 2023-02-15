#include <iostream>
using namespace std; 

class Student {
  private:
    string name;
    int age;
    int marks[3];
  public:
    // constructor to initialize name, age and marks of 3 subjects
      Student(string n, int a, int m1, int m2, int m3) {
        name = n;
        age = a;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
      }
      double averageMarks() {
        return (marks[0] + marks[1] + marks[2]) / 3;
    }
    // function to get the name of student
    string getName() {
        return name;
    }
    // function to get the age of student
    int getAge() {
        return age;
    }
    // function to get the marks of student
    int* getMarks() {
        return marks;
    }
};

int main(){
    Student s2("Alex", 23, 80, 85, 90);
    cout << "Enter the name of 1st student: ";
    cin >> Student.name();
    

}
