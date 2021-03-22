/*
QUESTION 5:
Take as input x and n, two numbers. Write a function to calculate x raise to power n. Target complexity is O(logn). NOTE: Try both recursive and bitmasking approach.

Input Format
Enter the number N and its power P

Constraints
None

Output Format
Display N^P

Sample Input
2
3
Sample Output
8

*/
#include <iostream>
using namespace std;
int power_recursion(int a,int b){
    if(b==0){
        return 1;
    }
    else{
        return a*power_recursion(a,b-1);
    }
}
int power_bitmasking(int a,int b)
{
    int ans=1;
    while(b>0){
        if(b&1){
            ans*=a;
        }
        a=a*a;
        b=b>>1;
    }
    return ans;
}
int main()
{
   cout<<power_recursion(3,5)<<endl;
   cout<<power_bitmasking(3,5);
   return 0;
}