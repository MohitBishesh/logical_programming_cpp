# include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n :"<<endl;
    cin>>n;
    int temp = 0;
    for(int i=1; i<=n/2;i++)
    {
        if(n%i==0)
        {
            temp = temp +1;
        }
    }
    cout<<temp;
    return 0;
}
