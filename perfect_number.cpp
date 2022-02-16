#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number :"<<endl;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            sum = sum+i;
        }
        
    }   
    if (n==sum)
        {
            cout<<"\n"<<n<<" is a perfect number "<<endl;
        } 
        else
            cout<<"\nNot a perfect number "<<endl;
    return 0;

}



