# include<iostream>
using namespace std;
int main()
{
    int large= INT_MIN;
    int k,n;
    cout<<"enter n :"<<endl;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
         cin>>k;
         if(k>large)
         {
             large =k;
         }
    }
     
cout<<large;
return 0;
}