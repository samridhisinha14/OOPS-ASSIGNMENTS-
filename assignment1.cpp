#include<iostream>
using namespace std;
int main(){
    //ques 1
    cout<<"Hello World"<<endl;
    //ques 2
    int a;
    char b;
    float c;
    cout<<"Enter an integer,character and decimal number: ";
    cin>>a>>b>>c;
    cout<<"Your entered numbers are : "<<a<<" "<<b<<" "<<c<<endl;

    // ques 3
    cout<<"Enter two numbers : ";
    int a3,b3;
    cin>>a3>>b3;
    cout<<"Sum of two numbers is : "<<a3+b3<<endl;
    cout<<"Subtraction of two numbers is : "<<a3-b3<<endl;
    cout<<"Multiplication of two numbers is : "<<a3*b3<<endl;
    cout<<"Division of two numbers is : "<<a3/b3<<endl;

    //ques 4
    float f;
    float c;
    cout<<"Enter temperature in degree Celsius:"<<endl;
    cin>>c;
    f = c*(9.0/5.0)+32;
    cout<<"Temperature in degree Fahrenheit is : "<<f<<endl;

    //ques 5
    cout<<"My name is\tSamridhi Sinha\nI study in University\tThaparr\b"<<endl;

    //ques 6
    cout<<"Enter two numbers : ";
    int a6,b6;
    cin>>a6>>b6;
    a6+=b6;
    cout<<"Sum of two numbers is : "<<a6<<endl;
    a6-=b6;
    cout<<"Subtraction of two numbers is : "<<a6<<endl;


    //ques 7

    cout<<"Enter two numbers : ";
    int a7,b7;
    cin>>a7>>b7;
    a7 = a7 ^ b7;
    b7 = a7 ^ b7;
    a7 = a7 ^ b7;
    cout << "After swapping: ";
    cout << "a = " << a7 << ", b = " << b7 << endl;

    //ques 8
    int no_of_days;
    cout<<"no. of days the member is late to return the book"<<endl;
    cin>>no_of_days;
    if(no_of_days>0&&no_of_days<=5)cout<<"Your fine is 50 paise";
    else if(no_of_days>5&&no_of_days<=10)cout<<"Your fine is 1 ruppee";
    else if (no_of_days>10&&no_of_days<=30)cout<<"Your fine is 5 ruppees";
    else cout<<"Your membership is cancelled.";

    //ques 9 switch case statement
    char choice;
    int a9,b9;
    cout<<"Enter two numbers : ";
    cin>>a9>>b9;
    cout<<"Enter the operation you wanna do on the numbers +,-,*,/";
    cin>>choice;
    switch(choice){
        case '+':
        cout<<"Your result is : "<<a9+b9;
        break;
        case '-':
        cout<<"Your result is : "<<a9-b9;
        break;
        case '/':
        cout<<"Your result is : "<<a9/b9;
        break;
        case '*' :
        cout<<"Your result is : "<<a9*b9;
        break;
        default:
        cout << "Invalid operator";

    }

    //ques 10
    int a10;
    cout<<"Enter a number : ";
    cin>>a10;
    if(a10%2==0)cout<<"It is an even number.";
    else if(a10%2!=0)cout<<"It is an odd number.";
    else cout<<"Invalid.";







    return 0;
}