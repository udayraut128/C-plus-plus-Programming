#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;
    char grade;

public:
    // Constructor to initialize student data
    Student(string n, int a, char g)
    {
        name = n;
        age = a;
        grade = g;
    }

    // Setter for name
    void setName(string n)
    {
        name = n;
    }

    // Setter for age
    void setAge(int a)
    {
        if (a > 0)
        {
            age = a;
        }
        else
        {
            cout << "Age must be positive!" << endl;
        }
    }

    // Setter for grade
    void setGrade(char g)
    {
        if (g >= 'A' && g <= 'F')
        {
            grade = g;
        }
        else
        {
            cout << "Grade must be between A and F!" << endl;
        }
    }

    // Getter for name
    string getName() const
    {
        return name;
    }

    // Getter for age
    int getAge() const
    {
        return age;
    }

    // Getter for grade
    char getGrade() const
    {
        return grade;
    }

    // Method to display student details
    void displayInfo() const
    {
        cout << "Student Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main()
{
    // Create a Student object
    Student student("John Doe", 16, 'B');

    // Display initial student details
    student.displayInfo();

    // Update student details
    student.setName("Jane Doe");
    student.setAge(17);
    student.setGrade('A');

    // Display updated student details
    student.displayInfo();

    return 0;
}

// output
// Student Name: John Doe
// Age: 16
// Grade: B
// Student Name: Jane Doe
// Age: 17
// Grade: A