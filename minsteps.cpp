/*

The Planet Earth is under a threat from the aliens of the outer space and the Marvel Avengers team is busy fighting against them. Meanwhile, The Incredible Hulk has to defeat an enemy who is N steps above the level where he is standing (assume it as the 0th level). Hulk, because of his incredible jumping ability can take jumps in power of 2. In order to defeat the enemy as quickly as possible he has to reach the Nth step in minimum moves possible. Help Hulk to find the same and contribute in saving the Mother Earth.



Input Format
The first line contains the number of test cases T. T test cases follow: The first line of each test case contains a number N.

Constraints
1 <= T <= 10
1 <= N <= 10^5

Output Format
Output T lines, containing the minimum number of moves required by Hulk to reach the Nth step

Sample Input
3
3
4
5
Sample Output
2
1
2
Explanation
Let total steps is n, find the nearest integer which is of power 2 and less then n. let it would be k. now remaining steps to cover is n-k and result = 1 + min steps for (n-k) remaining steps.

*/
#include <iostream>
using namespace std;

int getNearestPower(int n)
{
    int num=2;
    while(num<=n)
    {
        num*=2;
    }
    return (n-num/2);
}

int main()
{
   int T;
   cin>>T;
   for(int t=0;t<T;t++)
   {
       int n;
       cin>>n;
       int steps=0;
       while(n>0){
           n=getNearestPower(n);
           steps++;
       }
       cout<<steps<<endl;
   }
   return 0;
}