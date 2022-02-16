// 2
// 8
// 1 2 3 4 5 6 
// 1 2 3 4 5 6
// 1 2 3 4 5 6
// 1 2 3 4 5 6
// 1 2 3 4 5 6
// 1 2 3 4 5 6 
// 1 2 3 4 5 6
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    for(int i=x; i<=y;i++)
    {
        for(int j =1 ; j<=(y-x);j++)
        {
            cout<<j <<" ";
        }
        cout<<endl;
    }
}