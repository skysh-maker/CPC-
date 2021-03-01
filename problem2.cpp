/* Take n as input from user and write a program to
 evaluate and print sum of all the digits present in n.*/
 #include<iostream>
 using namespace std;
 int main(){
     int n,sum=0,temp;
     cin>>n;
     temp=n;
     while(temp!=0){
         sum += temp%10;
         temp=temp/10;
         
     }
    cout<<sum<<endl;
 }