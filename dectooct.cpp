/*
Take N (number in decimal format). Write a function that converts it to octal format. Print the value returned.

Input Format
Constraints
0 < N <= 1000000000

Output Format
Sample Input
63
Sample Output
77
Explanation
Both input and output are integers
*/
#include <iostream>
using namespace std;
int dectoct(int a)
{
    int oct=0;
    int ind=1;
    while(a>0)
    {
        int rem=a%8;
        oct+=rem*ind;
        a/=8;
        ind*=10;
    }
    return oct;
}
int main()
{
   int n;
   cin>>n;
   cout<<dectoct(n);
   return 0;
}