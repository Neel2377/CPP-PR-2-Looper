#include<iostream>
using namespace std;

int main()
{
    char alphabet='a';
    
    do
    {
        cout<<alphabet<<" "<<endl;
        alphabet=alphabet+4;
    } while (alphabet<='z');
    
    return 0;
}