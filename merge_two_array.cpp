#include<iostream>
using namespace std;
int main()
{
    int n1;
    int n2;
    cout<<"enter size of first array :"<<endl;
    cin>>n1;
    int arr1[n1];
    int arr2[n2];
    cout<<"enter elements for array :"<<endl;
    for(int i=0 ; i<n1; i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter size of second array :"<<endl;
    cin>>n2;
    cout<<"enter elements for second array :"<<endl;
    for(int j=0 ; j<n2; j++)
    {
        cin>>arr2[j];
    }
    int arr_merge[n1+n2];
    for(int k=0; k<(n1+n2);k++)
    {
        if(k<n1)
        {
            arr_merge[k]=arr1[k];
        }
        if(k>=n1)
        {
            arr_merge[k]=arr2[k-n1];
        }
    }

    cout<<"the elements after merging is :"<<endl;
    for(int l=0 ; l<n1+n2; l++)
    {
        cout<<arr_merge[l]<<"  ";
    }
    return 0;
}