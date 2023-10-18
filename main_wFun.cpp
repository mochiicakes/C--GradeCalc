#include <iostream>
using namespace std;

//functions prototype
void GetQuizGrades();
void GetExamGrades();
void GetFinalGrade();

//global variables
double quizAve;
double midtermGrade;
double finalExamGrade;
double finalProjGrade;

double mark = 0.0;
char grade;

int main()
{
    //Call the 3 functions
    GetQuizGrades();
    GetExamGrades();
    GetFinalGrade();

    //FINAL AVERAGE DISPLAY
    cout<<"Your total mark is "<< mark <<" and your grade is "<< grade <<endl;
    return 0;
}

void GetQuizGrades(){

    double quizSum;
    double quizArray[100];
    double quizMark;
    int ctr;
    int i;

    //For quiz mark inputs
    cout << "Please enter quiz grades. Once finished, input '-1'. "<< endl;
    while (quizMark != -1) //while input is not -1, accept inputs.
    {
            // Input marks and store to array
            std::cin >> quizMark;
            quizArray[ctr] = quizMark;
            ctr++;
    }

    // Find sum of quiz marks
    for(i = 0; i < (ctr - 1); i++)
    {
    quizSum += quizArray[i];
    }
    //compute for quiz raw average and display.
    quizAve = quizSum/(ctr -1);
    cout << "Your Raw Quiz Average is " << quizAve << endl;
}

void GetExamGrades(){
    //Midterm, Final exam, and Final project inputs
    cout<<"Enter your Midterm Grade: ";
    cin>>midtermGrade;

    cout<<"Enter your Final Exam: ";
    cin>>finalExamGrade;

    cout<<"Enter your Final Project: ";
    cin>>finalProjGrade;

}

void GetFinalGrade(){
    //Fin Ave of Quizzes 40%, ME 20%, FE 20%, FP 20%
    mark=(quizAve*.4)+(midtermGrade*.2)+(finalExamGrade*.2)+(finalProjGrade*.2);

    //Grade Mark and equivalents
    //A BRACKET
    if(mark>=96 && mark<=100)
        grade='A+';
    else if(mark>=90 && mark<=95)
        grade='A';
    else if(mark>=85 && mark<=89)
        grade='A-';

    //B BRACKET
    else if(mark>=80 && mark<=84)
        grade='B+';
    else if(mark>=70 && mark<=79)
        grade='B';
    else if(mark>=65 && mark<=69)
        grade='B-';

    //C BRACKET
    else if(mark>=60 && mark<=64)
        grade='C+';
    else if(mark>=41 && mark<=59)
        grade='C';
    else if(mark>=35 && mark<=40)
        grade='C-';

    //FAILING BRACKET
    else if(mark>=15 && mark<=34)
        grade='D';
    else if(mark>=0 && mark<=14)
        grade='F';

    // INPUT OUT OF BOUNDS - ERROR
    else
        cout << "Invalid input, please run the program again.";
}
