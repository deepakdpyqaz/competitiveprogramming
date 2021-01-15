/*
Help Manmohan to print pattern of a given number. See the output pattern for given input n = 5.

Input Format
Single integer N denoting number of lines of the pattern.

Constraints
N<=1000

Output Format
Pattern.

Sample Input
5
Sample Output
1
11
202
3003
40004
Explanation
If row number is n (>1), total character is n. First and last character is n-1 and rest are 0.

*/
#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       if(i==0)
       {
           cout<<i+1<<endl;
       }
       else{
           for(int j=i;j<2*i+1;j++)
           {
               if(j==2*i)
               {
                   cout<<i<<endl;
               }
               else if(j==i)
               {
                   cout<<i;
               }
               else{
                   cout<<0;
               }
           }
       }
   }
   return 0;
}