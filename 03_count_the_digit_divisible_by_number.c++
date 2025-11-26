#include<iostream>

 int countDigits(int num) {
        int temp = num,count = 0, digit;
        while(temp>0){
            digit = temp % 10;
            if(num % digit == 0 )
                count++;
            temp = temp / 10;
        }
        return count;
    }
int main(){
    int res = countDigits(12);
    printf("%d", res);
    return 0;
}