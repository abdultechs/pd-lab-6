#include<iostream>
using namespace std;
float calculateAverage(float marksEnglish, float marksMaths, float 
marksChemistry, float marksSocialScience, float marksBiology)
{
  float avg = (marksEnglish+marksMaths+marksChemistry+marksSocialScience+marksBiology)/5.0;
  return avg;
}

string calculateGrade(float average)
{
    if (average>90 && average <=100)
    {
        return "A+";
    }
    else if (average>80 && average <=90)
    {
        return "A";
    }
    if (average>70 && average <=80)
    {
        return "B+";
    }
    if (average>60 && average <=70)
    {
        return "B";
    }
    if (average>50 && average <=60)
    {
        return "C";
    }
    if (average>40 && average <=50)
    {
        return "D";
    }
    if (average<40)
    {
        return "F";
    }



}

main()
{
    string name;
   float marksEnglish,marksMaths,marksChemistry,marksSocialScience,marksBiology;
   cout <<"Enter Student name: ";
   cin >> name;
   cout << "Enter your marks in English: ";
   cin >> marksEnglish;
   cout << "Enter your marks in Maths: ";
   cin >> marksMaths;
   cout << "Enter your marks in CHemistry: ";
   cin >> marksChemistry;
   cout << "Enter your marks in Social Science: ";
   cin >> marksSocialScience;
   cout << "Enter marks in Biology: ";
   cin >> marksBiology;
   float average = calculateAverage(marksEnglish,marksMaths,marksChemistry,marksSocialScience,marksBiology);
   cout << "Student Name: " << name <<endl; 
   cout << average <<"%" <<endl;
   cout << "Grade: " << calculateGrade(average);


}