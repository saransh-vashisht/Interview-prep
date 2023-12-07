#include<bits/stdc++.h>
using namespace std;

vector<int> countFrequency(int n, int x, vector<int> &nums){
 vector<int> hash(n,0);
for(int i=0;i<n;i++){
    hash[nums[i]-1]++;
}
// int q=1;
// vector<int> result(n,0);
// while(q<=n){
//   result[q-1]=hash[q];
//   q++;
// }
return hash;
}

// https://www.codingninjas.com/studio/problems/count-frequency-in-a-range_8365446?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM