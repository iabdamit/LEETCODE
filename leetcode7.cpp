#include<iostream>//leetcode no. 7//
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans =0;//answer;
    while (n!=0)
    {
        int digit=n%10;
        if ((ans>INT_MAX/10)||(ans<INT_MIN))
        {
            return 0;
        }
        
        ans=((ans*10)+digit);
        n=n/10;
        cout<<ans<<endl;
    }
    return ans;
}