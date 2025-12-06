#include<iostream>
using namespace std;

double add(double, double);

int main() {
    //string var = "Netra Srinivasan";
    //cout<<var.find("v", 0)<<endl;
    //cout<<var.substr(6, 5)<<endl;
    //cout<<"Variable : "<<var<<"\n"<<"Length : "<<var.length()<<endl;
    //cout<<"\nWelcome to McW, Netra Srinivasan!!"<<endl;
    //int a = 3;
    //cout<<a;
    //int x = a++;
    //int y = ++a;
    //cout<<a<<endl<<x<<endl<<y;
    int a, b;
    cout<<"Enter number 1 : ";
    cin>>a;
    cout<<"\nEnter number 2 : ";
    cin>>b;
    cout<<"\nSum : "<<add(a,b);
    return 0;
}

double add(double num1, double num2) {
    return num1+num2;
}