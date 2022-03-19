#include<iostream>//problem 1281//
using namespace std;
int main(){
    int n;
    cin>>n;
int pro = 1 ;//production//
        int sum=0;
        while(n!=0){
            int digit=n%10;
            pro=pro*digit;
            sum=sum+digit;
            n=n/10;
        }
        int answer =pro-sum;
        cout<<answer;
        return answer;
}