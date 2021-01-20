/*
Take N (number of rows), print the following pattern (for N = 4).

                       1           1
                       1 2       2 1  
                       1 2 3   3 2 1
                       1 2 3 4 3 2 1   
Input Format
Constraints
0 < N < 10

Output Format
Sample Input
4
Sample Output
1						1
1	2				2	1
1	2	3		3	2	1
1	2	3	4	3	2	1
Explanation
Each number is separated from other by a tab.

*/
#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   for(int i=1;i<n;i++)
   {
       for(int j=1;j<=i;j++)
       {
           cout<<j<<" ";
       }
       for(int j=1;j<2*(n-i);j++)
       {
           cout<<"  ";
       }
       for(int j=i;j>=1;j--)
       {
           cout<<j<<" ";
       }
       cout<<endl;
   }
   for(int i=1;i<=n;i++)
   {
       cout<<i<<" ";
   }
   for(int i=n-1;i>=1;i--)
   {
       cout<<i<<" ";
   }
   return 0;
}