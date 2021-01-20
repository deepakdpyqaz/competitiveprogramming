/*
Take the following as input.

A number (N1)
A number (N2)
Write a function which returns the GCD of N1 and N2. Print the value returned.



Input Format
Two integers seperated by a new line.

Constraints
0 < N1 < 1000000000
0 < N2 < 1000000000

Output Format
Output a single integer which is the GCD of the given integers.

Sample Input
16 
24
Sample Output
8
Explanation
The largest number that divides both N1 and N2 is called the GCD of N1 and N2.

*/
#include <iostream>
using namespace std;
int gcd(int m,int n)
{
    int i=1;
    for(i=min(m,n);i>0;i--)
    {
        if(m%i==0 && n%i==0) break;
    }
    return i;
}
int main()
{
    int m, n;
    cin >> m >> n;
    

    cout<<gcd(m,n);
    return 0;
}