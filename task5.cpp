#include<iostream>
using namespace std;
float calculateFruitPrice(string fruit, string dayOfWeek, double quantity);

main()
{
    string fruit, dayOfWeek;
    double quantity;
    cout<<"Enter the fruit name: ";
    cin>>fruit;
    cout<<"Enter the day of the week (e.g, Monday, Sunday): ";
    cin>>dayOfWeek;
    cout<<"Enter the quantity: ";
    cin>>quantity;
    float amount = calculateFruitPrice(fruit, dayOfWeek, quantity);
    cout<<amount<<endl;
    
}
float calculateFruitPrice(string fruit, string dayOfWeek, double
quantity)
{
    if (dayOfWeek=="Sunday"||dayOfWeek=="Saturday"){
        float banana = 2.70;
        float apple = 1.25;
        float orange = 0.90;
        float grapefruit = 1.60;
        float kiwi = 3.00;
        float pinapple = 5.60;
        float grapes = 4.20;
        if (fruit=="Banana"){
            return banana*quantity;
        }
        if (fruit=="Apple"){
            return apple*quantity;
        }
        if(fruit=="Orange"){
            return orange*quantity;
        }
        if(fruit=="Grapes"){
            return grapes*quantity;
        }
        if(fruit=="Kiwi"){
            return kiwi*quantity;
        }
        if(fruit=="Pineapple"){
            return pinapple*quantity;
        }
         if(fruit=="Grapefruit"){
            return grapefruit*quantity;
        }


    }
    else if (dayOfWeek=="Monday"||dayOfWeek=="Tuesday"||dayOfWeek=="Wednesday"||dayOfWeek=="Thursday"||dayOfWeek=="Friday"){
        float banana = 2.50;
        float apple = 1.20;
        float orange = 0.85;
        float grapefruit = 1.45;
        float kiwi = 2.70;
        float pinapple = 5.50;
        float grapes = 3.85;
         if (fruit=="Banana"){
            return banana*quantity;
        }
        if (fruit=="Apple"){
            return apple*quantity;
        }
        if(fruit=="Orange"){
            return orange*quantity;
        }
        if(fruit=="Grapes"){
            return grapes*quantity;
        }
        if(fruit=="Kiwi"){
            return kiwi*quantity;
        }
        if(fruit=="Pineapple"){
            return pinapple*quantity;
        }
         if(fruit=="Grapefruit"){
            return grapefruit*quantity;
        }
    }
}