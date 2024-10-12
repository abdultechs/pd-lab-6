#include<iostream>
using namespace std;
string studio(string month, int numberOfStays);
string appartment(string month, int numberOfStays);


main()
{
    string month;
    int numberOfStay;
    cout << "Enter the month(May, june ..): ";
    cin >> month;
    cout << "enter number of days:  ";
    cin >> numberOfStay;
    string appartment_price = studio(month,numberOfStay);
    cout << appartment_price<<endl;
    string studio_price = appartment(month,numberOfStay);
    cout <<studio_price;

}
string studio(string month, int numberOfStays)
{
    float total;
    if(month == "May"||month == "October")
    {
        total = 50.0*numberOfStays;
        if(numberOfStays>7&& numberOfStays<=14)
        {
            total = (total-(total*0.05));      
        }
        if(numberOfStays>14)
        {
            total = total-(total*0.3);
        }
        return "Studio: "+to_string(total) + "$";

    }
    else if(month == "September" || month=="June" )
    {
        if(numberOfStays>14)
        {
            total=total-(total*0.2);
        }
        else
        { total = 75.2*numberOfStays;}
        return "Studio: "+to_string(total) + "$";   
    }
    else if(month == "July" || month == "August" )
    {
        total = 76.0*numberOfStays;
        return "Studio: "+to_string(total) + "$"; 
    }
    


}
string appartment(string month, int numberOfStays)
{
    float total;
    if(month == "May"||month == "October")
    {
        total = 65.0*numberOfStays;

    }
    else if(month == "September" || month=="June" )
    {
        total = 68.7*numberOfStays;  
    }
    else if(month == "July" || month == "August" )
    {
        total = 77.0*numberOfStays;
    }
     if(numberOfStays>14)
     {
        total = total-(total*0.1);
        return "Appartment: " + to_string(total) + "$";
     }
     else if (numberOfStays<=14)
     {
        return "Appartment: " + to_string(total) + "$";
     }



}


