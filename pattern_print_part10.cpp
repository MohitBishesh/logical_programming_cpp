# include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n;i++)
    {
        char x =(65+i-1);
        cout<<x;
        if(i%3==0)
        {
            cout<<endl;
        }
        
        
    }
    cout<<endl;
} 

