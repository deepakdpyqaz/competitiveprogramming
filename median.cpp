/*
We are given two sorted arrays of same size n. Find the median of an array formed after merging these two sorted arrays.

Input Format
First line contains the input n. Second and Third line contains n space separated integers.

Constraints
N < 1000

Output Format
Print the median in a single line.

Sample Input
5
1 3 5 7 9
2 4 6 8 10
Sample Output
5
Explanation
Merged Array: [ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10] So the median element is 5
*/
#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n],b[n],c[2*n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   for(int i=0;i<n;i++){
       cin>>b[i];
   }
   int i=0,j=0,k=0;
   for(k=0;i<n && j<n;k++){
       if(a[i]<b[j]){
           c[k]=a[i];
           i++;
       }
       else{
           c[k]=b[j];
           j++;
       }
   }
   if(i==n){
       for (;j<n;j++,k++){
           c[k]=b[j];
       }
   }
   else{
       for(;i<n;i++,k++){
           c[k]=a[i];
       }
   }
   cout<<c[n-1];
   return 0;
}