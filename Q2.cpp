#include<iostream>
using namespace std;

int main()
{
    int num,count=0;
    cout<<"Enter a number: ";
    cin>>num;

    while (num!=0)
    {
        num=num/10;
        count++;
    }
    
    cout<<"The number of digits in the number is: "<<count<<endl;

    return 0;
}