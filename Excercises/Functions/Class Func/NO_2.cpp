#include<iostream>
using namespace std;

double get_grade(double mark_1, double mark_2, double mark_3);

int main(){

    double mrk_1,mrk_2,mrk_3,ret_grade;

    cout<<"Enter the mark : ";
    cin>>mrk_1>>mrk_2>>mrk_3;


    ret_grade = get_grade(mrk_1, mrk_2, mrk_3);

    cout<<"The student got a : "<<ret_grade;

}
double get_grade(double mark_1, double mark_2, double mark_3){
    
     int grade;
     double avg_marks;
     avg_marks = (mark_1 + mark_2 + mark_3) / 3;

     if (avg_marks >= 80 && avg_marks <= 100){
         grade = 65;
        return (char(grade));
     }
     else if(avg_marks >= 70 && avg_marks < 80){
       
         grade = 'B';
        return (grade);
     }
      else if(avg_marks >= 60 && avg_marks < 70){
        
         grade = 'C';
        return (grade);
     }
      else if(avg_marks >= 50 && avg_marks < 60){
       
         grade = 'D';
        return (grade);
     }
     else{
        
         grade = 'D';
        return (grade);
     }
     
}
