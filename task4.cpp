#include<iostream>
using namespace std;
string serviceCharges(char service_code, char time_period, float mints);

main()
{
    char service_code,time_period;
    float mints;
    cout << "Enter the service code (P/p for premium, R/r for regular): ";
    cin >> service_code;
    cout <<"Enter the number of minutes used: ";
    cin >> mints;
    if(service_code == 'P' || service_code == 'P' )
    {
        cout << "Service Type: Premium" << endl;
    }
    else
    {
        cout << "Service Type: Normal" << endl;
    }
    cout << "Total minutes used " <<mints <<" minutes"<<endl;
    cout << serviceCharges(service_code,time_period,mints);
}
string serviceCharges(char service_code, char time_period, float mints)
{
    float charges;
    if(service_code == 'P' || service_code == 'p' || service_code == 'R' || service_code == 'r')
    {
        if(service_code == 'R' || service_code == 'r')
        {
            charges = 10.0;
            if(mints>50)
            {
                charges = charges+((mints-50)*0.2) ;  
            }

        }
        else
        {
            cout << "Enter the of the call(D/d for day , N/n for night): ";
            cin >> time_period;
            charges = 25.0;
            if((time_period == 'D' || time_period== 'd') && mints>75)
            {
                charges = charges+((mints-75)*0.10);   
            }
            if((time_period == 'N' || time_period== 'n') && mints>75)
            {
                charges = charges+((mints-100)*0.05);
            }


        }

    return "Amount Dues: " +to_string(charges) +"$";
    }
    else
    {
        return "Error!";
    }

}



