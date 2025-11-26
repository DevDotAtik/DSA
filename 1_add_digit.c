 #include<stdio.h>
 
 int addDigits(int num) {
        int sum = 0 , temp = num;
        while(temp>0){
            sum += temp%10;
            temp /= 10;
        }

        if(sum>9){
            sum = addDigits(sum);
        }

        return sum;
    }
int main(){
    int res = addDigits(2333);
    printf("%d", res);
    return 0;
}