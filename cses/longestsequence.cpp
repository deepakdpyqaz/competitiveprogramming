/*
You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

Input

The only input line contains a string of n characters.

Output

Print one integer: the length of the longest repetition.

Constraints
1≤n≤106
Example

Input:
ATTCGGGA

Output:
3
*/

#include <iostream>
using namespace std;
int main()
{
   char prev='\0';
   char curr='\0';
   int temp_len=1;
   int max_len=0;
   do{
       scanf("%c",&curr);
       if(prev==curr){
           temp_len++;
       }
       else{
           if(temp_len>max_len){
               max_len=temp_len;
           }
           temp_len=1;
       }
       prev=curr;
   }while(curr!='\n' && curr!='\0');
   cout<<max_len;
   return 0;
}