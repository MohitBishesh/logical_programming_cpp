// 1 2 3 4 5 6 
//   2 3 4 5 6
//     3 4 5 6
//       4 5 6
//         5 6
//           6
# include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1 ; j<=n; j++)
        {
            if(j>=i)
            {
                cout<<j<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}