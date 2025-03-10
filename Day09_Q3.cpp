class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
        int n=arr.size();
        int mx=INT_MIN;
        for(int i=1;i<n;i++){
            mx=max(mx,arr[i-1]+arr[i]);
        }
        return mx;
    }
};


// TC = O(n)
// SC = O(1)
