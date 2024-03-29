#include<stdio.h>
struct test{
    int marks_scored;
    int total_marks;
    float percentage;
    char grade;
    //the function below will give an error as it is not supported.
    void calculate_percentage(){ 
    //no way to find that percentage belong to the same struct as the function.
        percentage=((float)marks_scored/(float)total_marks)*100;
    }
};

int main(){
// creating a variable of structure test called maths
struct test maths; 
maths.percentage=20; //percentage is a varible of maths
// calculate_percentage() is a varible of math 
//varible inside the function may or may not be varible of maths
maths.calculate_percentage();

}