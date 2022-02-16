#include<iostream>
# include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter n :"<<endl;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int lar = INT_MIN;
    for(int j=0;j<n;j++)
    {
        if(arr[j]>lar)
        {
            lar=arr[j];
        }
    }
    cout<<lar<<endl;
    return 0;
}