# include<iostream>
# include<math.h>
using namespace std;
int main()
{
    int range;
    int digit;
    
    cin>>range;
    for(int i=1; i<=range;i++)
    {
        int sum = 0;
        int cpy_i = i;
        while(cpy_i!=0)
        {
            digit = cpy_i % 10;
            sum = sum + pow(digit,3);
            cpy_i = cpy_i/10;
        }
        if(sum==i)
        {
            cout<<i<<"  ";
        }
        
    }
    return 0;
}