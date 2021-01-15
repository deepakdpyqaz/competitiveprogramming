/*
Take as input a number N, print "Prime" if it is prime if not Print "Not Prime".

Input Format
Constraints
2 < N <= 1000000000

Output Format
Sample Input
3
Sample Output
Prime
Explanation
The output is case specific

*/

#include <iostream>
#include<cmath>
using namespace std;
int main()
{
   int n;
   cin>>n;
   bool is_prime=true;
   for(int i=2;i<sqrt(double(n));i++)
   {
       if(n%i==0)
       {
           cout<<"Not prime";
           is_prime=false;
           break;
       }
   }
   if(is_prime)
   {
       cout<<"Prime";
   }
   return 0;
}