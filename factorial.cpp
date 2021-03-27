/*
Andrew was attempting a mathematics test where he needed to solve problems with factorials. One such problem had an answer which equaled MAXLIMIT! ,He wondered what would this number look like. He tried to calculate MAXLIMIT! On his scientific calculator but failed to get a correct answer. Can you write a code to help Andrew calculate factorials of such large numbers?

Input Format
a single lined integer N

Constraints
1 < = N < = 500

Output Format
Print the factorial of N

Sample Input
5
Sample Output
120
Explanation
for factorial of 5 we have 5 x 4 x 3 x 2 x 1 = 120

*/

#include <iostream>
using namespace std;
# define MAXLIMIT 1000

/*Works well upto 65*/
// unsigned long long factorial(int n){
//     unsigned long long ans=1;
//     while(n>1){
//         ans*=n;
//         n--;
//     }
//     return ans;
// }

class Bignumber{
    private:
        unsigned int num[MAXLIMIT];
    public:
        Bignumber(){
            for(int i=0;i<MAXLIMIT;i++){
                num[i]=0;
            }
        }
        Bignumber(int arr[],int n){
            if(n>MAXLIMIT){
                cout<<"\nLimit exceeded"<<endl;
                exit(1);
            }
            for(int i=0;i<MAXLIMIT;i++){
                num[i]=0;
            }
            for(int i=0;i<n;i++){
                num[i]=arr[i];
            }
        }

        void setNumber(int arr[],int n){
            if (n > MAXLIMIT)
            {
                cout << "\nLimit exceeded" << endl;
                exit(1);
            }
            for(int i=0;i<MAXLIMIT;i++){
                num[i]=0;
            }
            for (int i = 0; i < n; i++)
            {
                num[i] = arr[i];
            }
        }

        void displayNumber(){
            bool started=false;
            for(int i=99;i>=0;i--){
                if(started){
                    cout<<num[i];
                }
                else{
                    if(num[i]){
                        started=true;
                        cout<<num[i];
                    }
                }
            }
        }
        Bignumber operator + (Bignumber& number){
            Bignumber ans;
            int carry=0;
            int temp=0;
            for(int i=0;i<MAXLIMIT;i++){
                temp= num[i] + number.num[i]+carry;
                if(temp>10e5){
                    carry=1;
                    temp-=10e5;
                }
                ans.num[i]=temp;
            }
            return ans;
        }
        Bignumber operator * (int number){
            long long temp=0;
            int rem=0,carry=0;
            for(int i=0;i<MAXLIMIT;i++){
                temp=num[i]*number+carry;
                rem=temp%(int(10e5));
                carry=temp/(int(10e5));
                num[i]=rem;
            }
            return *(this);
        }
        Bignumber operator * (Bignumber& number){
            Bignumber ans;
            long long temp=0;
            int rem=0,carry=0;
            for(int i=0;i<MAXLIMIT;i++){
                ans = (*(this)) *int(number.num[i]);
                for(int j=0;j<i;j++){
                    ans=ans*(int(10e6));
                }
                *(this)=*(this)+ans;
            }
            return *(this);
        }
        
};
Bignumber factorial(int n){
        int one[]={1};
        Bignumber ans(one,1);
        cout<<endl;
        while(n>1){
            ans=ans*n;
            n--;
        }
        return ans;
}
int main()
{
   int n;
   cin>>n;
   Bignumber ans=factorial(n);
   ans.displayNumber();
   return 0;
}

