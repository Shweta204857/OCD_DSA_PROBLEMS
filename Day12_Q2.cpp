class Solution {
public:
int firstelement(vector<int>&nums,int target){
    int n=nums.size();
     int start=0;
     int end=n-1;
     int ans1=-1;
     int mid=start+(end-start)/2;
     while(start<=end){
        if(target==nums[mid]){
            ans1=mid;
            end=mid-1;
        }
        else if(target>nums[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
        
     }  
     return ans1; 
    }

int lastelement(vector<int>&nums,int target){
    int n=nums.size();
     int start=0;
     int end=n-1;
     int ans2=-1;
     int mid=start+(end-start)/2;
     while(start<=end){
        if(target==nums[mid]){
            ans2=mid;
            start=mid+1;
        }
        else if(target>nums[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
        
     }  
     return ans2; 
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return{firstelement(nums,target),lastelement(nums,target)};
    }
};

// TC =O(logN)
// SC =O(1)
