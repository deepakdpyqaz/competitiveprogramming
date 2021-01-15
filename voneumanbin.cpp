/*
Given a binary number ,help Von Neuman to find out its decimal representation. For eg 000111 in binary is 7 in decimal.

Input Format
The first line contains N , the number of binary numbers. Next N lines contain N integers each representing binary represenation of number.

Constraints
N<=1000 Digits in binary representation is <=16.

Output Format
N lines,each containing a decimal equivalent of the binary number.

Sample Input
4
101
1111
00110
111111
Sample Output
5
15
6
63
Explanation
For binary number fedcba , Decimal number = f * 25 + e * 24 + d * 23 + …..+ a * 20.
*/
#include <iostream>
#include <cmath>
using namespace std;
int bintodec(long int n)
{
    int dec=0;
    int ind=0;
    int rem=0;
    while(n>0)
    {
        rem=n%10;
        if(rem!=0 && rem!=1)
        {
            cout<<"Invalid binary"<<endl;
            exit(1);
        }
        dec+=rem*pow(double(2),ind);
        n/=10;
        ind++;
    }
    return dec;
}
int main()
{
   int n;
   cin>>n;
   int bins[n];
   for(int i=0;i<n;i++)
   {
       cin>>bins[i];
   }
   for(int i=0;i<n;i++)
   {
       cout<<bintodec(bins[i])<<endl;
   }
   return 0;
}