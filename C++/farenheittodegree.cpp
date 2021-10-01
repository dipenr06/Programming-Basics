#include<bits/stdc++.h>
using namespace std;

int main()
{
    float f;
    cout<<"This code will convert farenheit to degrees celcius."<<endl;
    cout<<"Please enter a number in farenheit : ";
    cin>>f;
    float deg = (f - 32)/1.8f;
    cout<<f << " Farenheit will be " << deg << " Degree Celcius ";
}
