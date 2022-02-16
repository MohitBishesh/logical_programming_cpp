// A B C 
// B C D
// C D E
// D E F
// E F G
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i =1;i<=n;i++)
    {
        for(int j=1; j<=3; j++)
        {
            char x = 65+j-1+i-1;
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
