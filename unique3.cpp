/*
QUESTION 4:
We are given an array containg n numbers. All the numbers are present thrice except for one number which is only present once. Find the unique number. Only use - bitwise operators, and no extra space.

Input Format
First line contains the number n. Second line contains n space separated number.

Constraints
N < 10^5

Output Format
Output a single line containing the unique number

Sample Input
7
1 1 1 2 2 2 3
Sample Output
3
Explanation
3 is present only once

*/

#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int num=0;
   int check=1;
   while(check<10e5){
       int sum=0;
       for(int i=0;i<n;i++)
       {
           if(check&arr[i]){
               sum+=1;
           }
       }
       if(sum%3!=0){
           num=(num^check);
       }
       check=check<<1;
   }
   cout<<num;
   return 0;
}