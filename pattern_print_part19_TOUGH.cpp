//        1       
//       121
//      12321
//     1234321
//    123454321
//   12345654321
//  1234567654321
// 123456787654321
// cannot be solved using a single variable count, two variables count_b and count_f are required in this case;
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
     
    for(int i=1; i<=n; i++)
    {    
        int count_b =1;
        int count_f =i;
         
        for(int j=1 ; j<= (2*n-1); j++)
         {
            if(j>=(n-i+1) && j<=(n+i-1))
            {
                if(j>=(n-i+1) && j<=n)
                {
                    cout<<count_b;
                    count_b++;
                }
                else if( j>n && j<=(n+i-1))
                {   
                    count_f--;
                    cout<<count_f;
                    
                    
                }
            }
            else
            {
                cout<<" ";
            }

         }
         cout<<endl;
        
    }
    

    }