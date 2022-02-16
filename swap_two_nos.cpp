// // using temp variable
// # include<iostream>
// using namespace std;
// int main()
// {
//     int a, b;
//     cin>>a>>b;
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     cout<<"the value of a is "<< a<<" and of b is "<<b;
//     return 0;
// }

// // without using temp variable (subtracting / adding)
// # include <iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     a=  a+b;
//     b= a-b;
//     a = a-b;
//     cout<<a <<" "<<b;
// }

// without using temp variable (multipliying / dividing)
# include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    a=  a*b;
    b=  a/b;
    a =  a/b;
    cout<<a <<" "<<b;
}