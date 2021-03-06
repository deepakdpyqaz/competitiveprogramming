/*
Given an array S of size N , check if it is possible to split sequence into two sequences -
s1 to si and si+1 to sN such that first sequence is strictly decreasing and second is strictly increasing. Print true/false as output.

Input Format
First line contains a single integer N denoting the size of the input.
Next N lines contain a single integer each denoting the elements of the array S.

Constraints
0 < N < 1000 Each number in sequence S is > 0 and < 1000000000

Output Format
Print boolean output - "true" or "false" defining whether the sequence is increasing - decreasing or not.

Sample Input
5 
1 
2 
3 
4 
5
Sample Output
true
Explanation
Carefully read the conditions to judge which all sequences may be valid. Don't use arrays or lists.
*/

#include <iostream>
using namespace std;
int main()
{
   int n;
   bool isAscending=true,isDescending=true;
   cin>>n;
   int prev=INT_MAX;
   int curr;
   for(int i=0;i<n;i++)
   {
       cin>>curr;
       if(isDescending)
       {
           if(prev<=curr)
           {
            isDescending=false;
           }
       }
       else{
           if(prev>=curr)
            {
                isAscending=false;
            }
       }
     prev=curr;
   }
   if(isAscending) cout<<"true";
   else cout<<"false";
   return 0;
}