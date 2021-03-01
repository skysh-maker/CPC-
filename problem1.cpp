/* Take n as input from user and write a program which works as follows:
if n is odd:evaluates and print factorial value of n
if n is even: evaluates and prints sum of all the whole numbers upto and including n*/
#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    long long result;
    if(n%2==0)
    {
        result=0;
        for(int i=1; i<=n; i++)
        {
            result=result+i;
        }
        cout<<result<<endl;
    }
    else{
    result=1;
    int i=1;
    while(i!=n+1)
    {
        result=result*i;
        i=i+1;
    }
    cout<<result<<endl;
}
}