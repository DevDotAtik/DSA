#include<iostream>
#include <vector>
#include <string>
using namespace std;
string triangleType(vector<int>& nums) {
    if(nums[0]+nums[1]>nums[2]&&nums[0]+nums[2]>nums[1]&&nums[1]+nums[2]>nums[0]){
        if(nums[0]==nums[1]&&nums[2]==nums[0]){
            return "equilateral";
        }else if(nums[0]!=nums[1]&&nums[2]!=nums[0]&&nums[1]!=nums[2]){
            return "scalene";
        }else{
            return "isosceles";
        }
    }else{
        return "none";
    }
}

int main(){
    vector<int> nums = {5,10,7};
    string res = triangleType(nums);
    cout<<res;
    return 0;
}