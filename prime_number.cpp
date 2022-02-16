# include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp =0;
    if(n==0 || n==1)
    {
        cout<<"neither prime nor composite :"<<endl;
    }
    else
    {
        for(int i=2; i<=n/2;i++)
        {
            if(n%i==0)
            {
                temp = temp + 1;
            }
        }
        if(temp ==0)
        {
            cout<<n<<" is a prime number "<<endl;
        }
        else
        {
            cout<<n<<" is a composite number"<<endl;
        }
    }
    return 0;

    
}