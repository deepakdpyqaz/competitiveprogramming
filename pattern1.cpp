/*
Question 1)
Take N (number of rows), print the following pattern (for N = 5)
1
2 2
3 0 3
4 0 0 4
5 0 0 0 5

Input Format
There will be an integer in input.

Constraints
0 < N < 100

Output Format
Print the pattern.

Sample Input
5
Sample Output
1  
2	2  
3	0	3    
4	0	0	4  
5	0	0	0	5
Explanation
Each number is separated from other by a tab.If row number is n (>1), total character is n. First and last character is n and rest are 0.

*/
#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   for(int i=0;i<=n;i++)
   {
       for(int j=0;j<i;j++)
       {
           if(j==i-1)
           {
               cout<<i<<endl;
           }
           else if(j==0)
           {
               cout<<i<<"\t";
           }
           else{
               cout<<0<<"\t";
           }
       }
   }
   return 0;
}