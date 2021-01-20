/*
Given an integer N, print Pascal Triangle upto N rows. 

Input Format
Single integer N.

Constraints
N <= 10

Output Format
Print pascal triangle.

Sample Input
4
Sample Output
           1
         1   1
       1   2   1
     1   3   3   1
*/
#include <iostream>
using namespace std;
int factorial(int n)
{
    int i=1;
    int fact=1;
    for(int i= n;i>1;i--)
    {
        fact*=i;
    }
    return fact;
}
int combination(int n, int r)
{
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main()
{
   int n;
   cin>>n;
   for(int i=0;i<=n;i++)
   {
       for(int j=n;j>i;j--){
           cout<<"  ";
       }
       for(int j=0;j<=i;j++)
       {
           cout<<combination(i,j)<<"   ";
       }
       cout<<endl;
   }

   return 0;
}