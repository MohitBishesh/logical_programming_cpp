# include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n :"<<endl;
    cin>>n;
    int temp =0;
    for(int i=1;i<=n/2 ; i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            temp = temp +1;
        }
    }
    cout<<"total factor is "<<temp;
    return 0;
}






