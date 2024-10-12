#include<iostream>
using namespace std;
string checkStudentStatus(int examHour, int examMinute, int 
studentHour, int studentMinute);
main()
{
    int examHour,examMinute,studentHour,studentMinute;
    cout << "Enter the exam starting time(Hours): ";
    cin >> examHour;
    cout << "Enter the exam starting time(mints): ";
    cin >> examMinute;
    cout << "Enter the exam arvival time(Hours): ";
    cin >> studentHour;
    cout << "Enter the exam arival time(Hours): ";
    cin >> studentMinute;
    cout <<checkStudentStatus(examHour,examMinute,studentHour,studentMinute);
    

}
string checkStudentStatus(int examHour, int examMinute, int 
studentHour, int studentMinute) 
{
    int time_diffrence_in_mints =(examHour*60+examMinute)-(studentHour*60+studentMinute);
    if(time_diffrence_in_mints>0 && time_diffrence_in_mints<=30)
    {
        return "On Time";
    }
    else if(time_diffrence_in_mints>30)
    {
        int hours,mints;
        if(time_diffrence_in_mints>59)
        {
            hours = time_diffrence_in_mints/60;
            mints = time_diffrence_in_mints%60;
        }

        return "Early \n" + to_string(hours) + ":" + to_string(mints) + " before the exam";
    }
    else if(time_diffrence_in_mints<0)
    {
        time_diffrence_in_mints = abs(time_diffrence_in_mints);
        //abs() means absolute it is uesd to return absolute value
       int hours,mints;
        if(time_diffrence_in_mints>59)
        {
            hours = time_diffrence_in_mints/60;
            mints = time_diffrence_in_mints%60;
        }

        return "Early \n" + to_string(hours) + ":" + to_string(mints) + "  after the exam";
    }
}