/*
Take N (number of rows), print the following pattern (for N = 5).

     * * * * *
     * *   * *
     *       *
     * *   * *
     * * * * *
Input Format
Constraints
0 < N < 10 (where N is an odd number)

Output Format
Sample Input
5
Sample Output
*	*	*       *      *		  
*	*	        *      *
* 	                       *
* 	*               *      *
* 	*	*       *      *	
Explanation
Each '*' is separated from other by a tab.
*/

#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int m=n/2+1;
   for(int i=0;i<n;i++)
   {
       cout<<"* ";
   }
   cout<<endl;
   for(int i=1;i<m;i++)
   {
       for(int j=0;j<(m-(2*i+1)/2);j++)
       {
           cout<<"* ";
       }
       for(int j=0;j<(2*i-1);j++)
       {
           cout<<"  ";
       }
       for(int j=0;j<(m-(2*i+1)/2);j++)
       {
           cout<<"* ";
       }
       cout<<endl;
   }
   m=n/2;
   for(int i=1;i<m;i++)
   {
       for(int j=0;j<(n-2*(m-i)+1)/2;j++)
       {
           cout<<"* ";
       }
       for(int j=0;j<2*(m-i)-1;j++)
       {
           cout<<"  ";
       }
       for(int j=0;j<(n-2*(m-i)+1)/2;j++)
       {
           cout<<"* ";
       }
       cout<<endl;
   }
   for(int i=0;i<n;i++)
   {
       cout<<"* ";
   }
   return 0;
}
