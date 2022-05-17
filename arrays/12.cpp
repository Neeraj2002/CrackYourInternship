#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int min_height = height[0];
        int max_height = height[height.size() - 1];
        int l = 0;
        int r = height.size() - 1;
        int res = 0;
        
        while(l < r){
            int area = (r - l) * std::min(height[l], height[r]);
            res = std::max(res, area);
            
            if (height[l] < height[r])
                l++;
            else
                r--;
            
        }
        return res;
    }
};