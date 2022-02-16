 # include<iostream>
 using namespace std;
 int main()
 {
     int a;
     cout<<"enter no :"<<endl;
     cin>>a;
     int fact=1;
     for(int i =2;i<=a;i++)
     {
         fact= fact*i;
     }
     cout<<"the factorial value of "<<a<<" is "<<fact<<endl;
 }