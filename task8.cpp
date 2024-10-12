
#include<iostream>
using namespace std;
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends);
main(){
    string yearType;
    int holidays, hometownWeekends;
    cout<<"Enter year type: ";
    cin>>yearType;
    cout<<"Enter number of holidays: ";
    cin>>holidays;
    cout<<"Enter number of weekends: ";
    cin>>hometownWeekends;
    int result = calculateVolleyballGames(yearType,holidays,hometownWeekends);
    cout<<result;
}
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{
    //num1 is playing days in sofia

    float num_1= (48-hometownWeekends)*(3.0/4.0);
    float num_2 = (holidays*(2.0/3.0));
    float final_playtime = (num_1+num_2+hometownWeekends);//adding hometown weekend because he plays Every sunday there
    if (yearType=="leap")
    {
        return (final_playtime+final_playtime*0.15);
    }
    else 
    {
        return final_playtime;
    }
}
