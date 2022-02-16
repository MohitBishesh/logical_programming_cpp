# include<iostream>
using namespace std;
int main()
{
    int range;
    cin>>range;
    for(int i=1 ; i<=range ; i++)
    {
        cout<<"Table of "<<i<<" is :"<<endl;
        for(int j=1; j<=10; j++)
        {
            cout<< i<<" * "<<j<<" = "<<i*j<<endl;
        }
    }
    return 0;
}