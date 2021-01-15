/*
Given number of rows N, you have to print a Hollow Rhombus. See the output for corresponding given input.

Input Format
Single integer N.

Constraints
N <= 20

Output Format
Print pattern.

Sample Input
5
Sample Output
    *****
   *   *
  *   *
 *   *
*****
Explanation
For any input N. First line contains 4 space and then 5 {*} and then the second line contains according to the output format.
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<n;j++)
        {
            if(j==n-1) cout<<"*"<<endl;
            else if(j==0) cout<<"*";
            else{
                if(i==0||i==n-1)
                {
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            
        }
        cout<<endl;
    }
   
   return 0;
}