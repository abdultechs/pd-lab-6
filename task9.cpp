#include<iostream>
using namespace std;
string checkPointPosition(int h, int x, int y);

main()
{
    int h,x,y;
    cout << "Enter the hieght: ";
    cin >> h;
    cout << "Enter X cordinate: ";
    cin >> x;
    cout << "Enter the Y cordinate : ";
    cin >> y;
    cout << checkPointPosition(h,x,y);


}
string checkPointPosition(int h, int x, int y)
{
    if((x>=0 && x<=3*h) && (y>=0 && y<=h))
    {
        if(x%h==0 || y%h==0)
        {
            return "Border";
        }
        else
        {
            return "inside";
        }
    }
    else if((x>=h&&x<=2*h) && (y>=0&&y<=4*h))
    {
        if(x%h==0 || y%h==0)
        {
            return "Border";
        }
        else
        {
            return "inside";
        }
    }
    else if((y>h)&&(x<h || x>2*h ))
    {
        return "outside";
    }
    else if(x<0 || y<0 || x>3*h)
    {
        return "outside";
    }
}