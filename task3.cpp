#include<iostream>
using namespace std;
string findZodiacSign(int day, string month)
{
     if((day<=21&&day<=31&&month=="March")||((day>=1&&day<=19)&&(month=="April"))){
        return "Aries";
    }
    else if ((day<=20&&day<=31&&month=="April")||((day>=1&&day<=20)&&(month=="May"))){
        return "Taurus";
    }
    else if ((day<=21&&day<=31&&month=="May")||((day>=1&&day<=20)&&(month=="June"))){
        return "Gemini";
    }
    else if ((day<=21&&day<=31&&month=="June")||((day>=1&&day<=22)&&(month=="July"))){
        return "Cancer";
    }
    else if ((day<=23&&day<=31&&month=="July")||((day>=1&&day<=22)&&(month=="August"))){
        return "Leo";
    }
    else if((day<=23&&day<=31&&month=="August")||((day>=1&&day<=22)&&(month=="September"))){
        return "Virgo";
    }
    else if((day<=23&&day<=31&&month=="September")||((day>=1&&day<=22)&&(month=="October"))){
        return "Libra";
    }
    else if ((day<=23&&day<=31&&month=="October")||((day>=1&&day<=21)&&(month=="November"))){
        return "Scorpio";
    }
    else if((day<=22&&day<=31&&month=="November")||((day>=1&&day<=21)&&(month=="December"))){
        return "Sagittarius";
    }
    else if ((day<=22&&day<=31&&month=="December")||((day>=1&&day<=19)&&(month=="January"))){
        return "Capricorn";
    }
    else if ((day<=20&&day<=31&&month=="January")||((day>=1&&day<=18)&&(month=="February"))){
        return "Aquarius";
    }
    else if((day<=19&&day<=31&&month=="February")||((day>=1&&day<=20)&&(month=="March"))){
        return "Pisces";
    }
}

main()
{
    int day;
    string month;
    cout << "Enter the day of birth: ";
    cin >> day;
    cout << "Enter the month of birth:";
    cin >> month;
    cout<<findZodiacSign(day,month);

}