/*

A program is required that accepts marks in three subjects and calculates the average mark. The program then assigns the student a grade based on the average mark using the grading system below.
Average Mark
Grade
80-100
A
70-80
B
60-70
C
50-60
D
0-50
E
Write a program with a function called get grade which accepts the average mark and returns the grade to the main function which then outputs it.

*/

#include <iostream>
using namespace std;

char get_grade(float averageMark);

int main()
{
    system("cls");
    float mark1, mark2, mark3, averageMark;
    char grade;
    cout << "Enter the marks: ";
    cin >> mark1 >> mark2 >> mark3;
    averageMark = (mark1 + mark2 + mark3) / 3;
    grade = get_grade(averageMark);
    cout << "Grade: " << grade << endl;
    return 0;
}
char get_grade(float averageMark)
{
    if (averageMark >= 80)
    {
        return 'A';
    }
    else if (averageMark >= 70)
    {
        return 'B';
    }
    else if (averageMark >= 60)
    {
        return 'C';
    }
    else if (averageMark >= 50)
    {
        return 'D';
    }
    else
    {
        return 'E';
    }
}
