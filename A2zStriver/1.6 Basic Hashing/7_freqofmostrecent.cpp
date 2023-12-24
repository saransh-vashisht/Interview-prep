#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
            long long int maxFreq =0,l=0,r=0,total=0,n=nums.size();
        for(r=0;r<n;r++){
            total+=nums[r];
            if(l+1<=r && (nums[r]*(r-l+1))>total+k){
                total-=nums[l];
                l++;
            }
            maxFreq=max(maxFreq,r-l+1);
        }
        return maxFreq;
    }
};


// Other way
class Solution2 {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
            long long int maxFreq =0,l=0,r=0,total=0,n=nums.size();
        for(r=0;r<n;r++){
            total+=nums[r];
            if(l+1<=r && (nums[r]*(r-l+1))>total+k){
                total-=nums[l];
                l++;
            }
            maxFreq=max(maxFreq,r-l+1);
        }
        return maxFreq;
    }
};

// https://leetcode.com/problems/frequency-of-the-most-frequent-element/description/