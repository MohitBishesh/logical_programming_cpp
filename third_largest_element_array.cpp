//To find out the third largest number of an array
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array :"<<endl;
    cin>>n;
    cout<<"enter elements of array :"<<endl;
    int arr[n];
    int third_largest = 0;
    int second_largest = 0;
    int largest = 0;
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    } 
    for(int j=0; j<n; j++)
    {
        if(arr[j]>largest)
        {
            third_largest = second_largest;
            second_largest = largest;
            largest = arr[j];
        }
        else if(arr[j]>second_largest)
        {
            third_largest=second_largest;
            second_largest = arr[j];
        }
        else if(arr[j]>third_largest)
        {
            third_largest = arr[j];
        }
    }

    cout<<"The third largest value is "<<third_largest;
    return 0;
}