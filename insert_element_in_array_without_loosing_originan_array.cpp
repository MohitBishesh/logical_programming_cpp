#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter size of array :"<<endl;
    cin>>size;
    int index;
    int element;
    int arr[size];
    int arr2[size+1];
    cout<<"enter "<<size<<" elements :"<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the index  at which you want to insert the element : "<<endl;
    cin>>index;
    cout<<"enter the element which you want to insert : " <<endl;
    cin>>element;
    for(int j=size; j>=index; j-- )
    {
        arr2[j+1]=arr[j];
    }
    arr2[index]=element;
    for(int k=0; k<index;k++)
    {
        arr2[k]=arr[k];
    }
    for(int l=0; l<size+1; l++)
    {
        cout<<arr2[l]<<" "<<endl;
    }
    return 0;
}