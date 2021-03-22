/*QUESTION 6:
We are given an array containg n numbers. All the numbers are present twice except for two numbers which are present only once. Find the unique numbers in linear time without using any extra space. ( Hint - Use Bitwise )

Input Format
First line contains the number n. Second line contains n space separated number.

Constraints
n < 10^5

Output Format
Output a single line containing the unique numbers separated by space

Sample Input
4
3 1 2 1
Sample Output
2 3
Explanation
Smaller number comes before larger number
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
   int num1=0,num2=0,mask=0,check=1;
   int tempsum=0;
   while(check<10e5){
       tempsum=0;
       for(int i=0;i<n;i++){
           if(arr[i]&check){
               tempsum+=1;
           }
       }
       if(tempsum%3==2){
           num1=num1^check;
           num2=num2^check;
       }
       else if(tempsum%3==1){
           mask=check;
           break;
       }
       check=check<<1;
   }
   int sum1=0,sum2=0;
   while(check<10e5){
       sum1=0;
       sum2=0;
       for(int i=0;i<n;i++){
           if(arr[i]&mask){
               if(arr[i]&check){
                   sum1+=1;
               }
           }
           else{
               if(arr[i]&check){
                   sum2+=1;
               }
           }
       }
       if(sum1%3!=0){
           num1=num1^check;
       }
       if(sum2%3!=0){
           num2=num2^check;
       }
       check=check<<1;
   }
   cout<<num1<<"\t"<<num2;
   return 0;
}