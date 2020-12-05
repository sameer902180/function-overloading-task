//learner name:-Sameer zade

#include<iostream>
using namespace std;
int main()
{
    int l,b,h,r,n,area;
    cout<<"hello learner:-\n";
    cout<<"please enter your choice:\n (1)circle\n (2)rectangle\n (3)triangle\n";
    cout<<"your choice:";
    cin>>n;
    switch(n)
    {
    case 1:
        cout<<"enter radius of circle: ";
        cin>>r;
        area=3.14*r*r;
        cout<<"area of circle is "<<area;
        cout<<" sq.units.";
        break;
    case 2:
        cout<<"enter length of rectangle: ";
        cin>>l;
        cout<<"enter breadth of rectangle: ";
        cin>>b;
        area=l*b;
        cout<<"area of rectangle is area "<<area;
        cout<<" sq.units.";
        break;
    case 3:
        cout<<"enter base of triangle: ";
        cin>>b;
        cout<<"enter height of triangle: ";
        cin>>h;
        area=(b*h)/2;
        cout<<"area of triangle is "<<area;
        cout<<" sq.units.";
        break;
        default:cout<<"your enter is invalid!!!!! ";
    }
    return 0;
}
