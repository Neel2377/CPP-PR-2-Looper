#include<iostream>
using namespace std;

int main()
{
    int num,firstdigit=0,lastdigit=0;
    cout<<"Enter a number: ";
    cin>>num;
    
    lastdigit=num%10;
    
    while (num>=10)
    {
        num=num/10;
    }
    firstdigit=num;
    
    cout<<"The sum of the first and last digit of the number is: "<<firstdigit + lastdigit<<endl;
    
    return 0;
}