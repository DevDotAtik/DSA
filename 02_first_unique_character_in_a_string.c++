#include<iostream>
#include<string>
 using namespace std; 
int firstUniqChar(string s) {
        int length = size(s);
        for(int i = 0;i<length;i++){
           char current = s[i],count = 0;
            for (int j = 0;j<length;j++){
                if(current == s[j] && i!=j)
                {
                    count++;
                    break;
                }
            }
            if(count == 0)
                return i;
            
        }
        return -1;
        


    }
int main(){
    int res = firstUniqChar("loovely");
    printf("%d", res);
    return 0;
}