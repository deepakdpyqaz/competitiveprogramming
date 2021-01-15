/*
Take N (number in binary format). Write a function that converts it to decimal format and Print the value returned.

Input Format
Constraints
0 < N <= 1000000000

Output Format
Sample Input
101010
Sample Output
42
Explanation
For binary number fedcba , Decimal number = f * 25 + e * 24 + d * 23 + …..+ a * 20.

*/
#include <iostream>
#include <cmath>
using namespace std;

int bintodec(long int x)
{
    int num=0;
    int ind=0;
    while(x!=0){
        int rem=x%10;
        if(rem!=0&&rem!=1)
        {
            cout<<"Invalid binary"<<endl;
            exit(1);
        }
        num+=rem*pow(float(2),float(ind));
        ind++;
        x/=10;
    }
    return num;
}
int main()
{
   long int n;
   cin>>n;
   cout<<bintodec(n);
   return 0;
}