#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int lastGoodIndexPosition = nums.size() - 1;
        for(int i=nums.size()-1; i>=0; i--){
            if (i + nums[i] >= lastGoodIndexPosition){
                lastGoodIndexPosition = i;
            }
        }
        return lastGoodIndexPosition == 0;
    }
};