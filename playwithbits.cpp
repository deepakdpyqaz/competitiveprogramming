/*
Prateek Bhayia likes to play with bits. One day Prateek bhayia decides to assign a task to his student Sanya. You have help Sanya to complete this task. Task is as follows - Prateek Bhayia gives Q queries each query containing two integers a and b. Your task is to count the no of set-bits in for all numbers between a and b (both inclusive)

Input Format
Read Q - No of Queries, Followed by Q lines containing 2 integers a and b.

Constraints
Q,a,b are integers.

Output Format
Q lines, each containing an output for your query.

Sample Input
2
1 1
10 15
Sample Output
1
17

*/

#include <iostream>
using namespace std;
long long dectobin(int n)
{
    long long bin=0;
    int rem=0;
    int ind=1;
    while(n!=0)
    {
        rem=n%2;
        bin=rem*ind+bin;
        ind*=10;
        n/=2;
    }
    return bin;
}
int sumdigit(long long n)
{
    int sum=0;
    while(n!=0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
   int q;
   cin>>q;
   for(int i=0;i<q;i++)
   {
       int a,b;
       cin>>a>>b;
       int sum=0;
       for(int j=a;j<=b;j++)
       {
           sum+=sumdigit(dectobin(j));
       }
       cout<<sum;
   }
   return 0;
}