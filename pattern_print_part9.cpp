// A B C 
// A B C
// A B C
// A B C
// A B C
// A B C
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<3; j++)
        {
            char x = 65+j;
            cout<<x<<" ";
        }
        cout<<endl;
    }
}