#include<iostream>
using namespace std;
string decideActivity(string temp, string humidity);

main()
{
    string temp, humidity;
    cout << "Temperature: ";
    cin >> temp;
    cout << "Humidity: ";
    cin >> humidity;
    cout << decideActivity(temp,humidity);

}
string decideActivity(string temp, string humidity)
{
    if(temp == "warm" && humidity == "dry")
    {
        return "play tenis";
    }
    else if(temp == "warm" && humidity == "humid")
    {
        return "swim";
    }
    else if(temp == "cold" && humidity == "dry")
    {
        return "Play Bsketball";   
    }
    else if(temp == "cold" && humidity == "humid")
    {
        return "Watch TV";
    }




}