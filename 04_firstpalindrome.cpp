#include<iostream>
#include<string>
#include<vector>
using namespace std;
string firstPalindrome(vector<string>& words) {

    for(int i = 0; i < size(words); i++){
        string word = words[i];
        string reverseword = words[i];
        int k = 0;
        for(int j = size(word)-1; j >= 0 ; j-- ){
            reverseword[k] = word[j];
            k++;
        }   
        if(reverseword == word)
            return word;

    }
    return "";
}

int main(){
    vector<string> words = {"abc","car","ada","racecar","cool"};
    string res = firstPalindrome(words);
    cout<<res;
    return 0;
}   