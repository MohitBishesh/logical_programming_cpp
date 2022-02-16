// A A A 
// B B B 
// C C C 
// D D D 
// E E E 
// F F F 
// G G G 
// H H H
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
            char x = 65+i;
            cout<<x<<" ";
        }
        cout<<endl;
    }
}