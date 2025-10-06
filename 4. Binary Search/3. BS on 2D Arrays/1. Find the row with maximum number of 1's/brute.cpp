// Link : https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1

// Time Complexity : O(m*n)
// Space Complexity : O(1)

// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
    int ans=-1,maxCount=0;
    int m=arr.size();
    int n=arr[0].size();
    for(int i=0;i<m;i++){
      int count=0;
      for(int j=0;j<n;j++){
        if(arr[i][j]==1) count++;
      }
      if(count>maxCount){
        maxCount=count;
        ans=i;
      }
        }
        return ans;
    }
};
Brute Force Approach