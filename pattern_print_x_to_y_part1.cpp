// 3 3 3 3 3 3
// 4 4 4 4 4 4
// 5 5 5 5 5 5
// 6 6 6 6 6 6
// 7 7 7 7 7 7
// 8 8 8 8 8 8
// 9 9 9 9 9 9
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