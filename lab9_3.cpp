#include <iostream>
using namespace std;

int main()
{
    int age;
    double height;
    int bounty;
    string zoro="Zoro";
    string sanji="Sanji";
    string usopp= "Usopp";
    string chopper="Chopper";
    string franky="Franky";
    string brook="Brook";
    string jinbe="Jinbe";
    cout<<"Enter your age: ";
    
    cin>>age;
    if(age<=25)
    {
        cout<<"Enter your height: ";
        cin>>height;
        if(height<100)
        {
            cout<<"Your character = "<<chopper;
        }
        else if(height<180 and height>=100)
        {
            cout<<"Your character = "<<usopp;
        }
        else
        {
            cout<<"Enter your bounty: ";
            cin>>bounty;
            if(bounty<=1100000000)
            {
                cout<<"Your character = "<<sanji;
            }
            else
            {
                cout<<"Your character = "<<zoro;
            }
        }
    }
    else if(age<=60 and age >25)
    {
        cout<<"Enter your bounty: ";
        cin>>bounty;
        if(bounty<=500000000)
        {
           cout<<"Your character = "<<franky; 
        }
        else
        {
            cout<<"Your character = "<<jinbe;
        }
    }
    else
    {
        cout<<"Your character = "<<brook;
    }
    return 0;
}