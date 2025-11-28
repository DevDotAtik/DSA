#include <iostream>
using namespace std;
int sumOfMultiples(int n) {
        int num[n],index = 0,sum=0;
        for(int i = 1; i<=n ;i++){
            if(i%3==0||i%5==0||i%7==0){
                num[i-1]=i;
                index++;
            }else{
                num[i-1]=0;
            }
        }
        for(int j = 0 ; j<n; j++){
            sum=sum+num[j];
        }
        return sum;
    }
int main(){
    int n = 10;
    int res = sumOfMultiples(n);
    printf("%d", res);
    return 0;
}