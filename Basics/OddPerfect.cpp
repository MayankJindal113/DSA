#include<iostream>
using namespace std;

int oddPerfect (int num){

        int sum=0;
        // Calculating the sum of the factors if the number num :
        for (int i = 1; i<num; i++){
            if(num%i ==0){
                sum+=i;
            }
        }
        if(num == sum){return num;}

        // cout << sum<<endl;
        return oddPerfect(num+2);
}

int main()
{
    int n=1;
    cout<<oddPerfect(n);
}