//153. Find Minimum in Rotated Sorted Array

class Solution {
public:
    int findMin(vector<int>& nums) {
       
       //s30

        int low = 0, high = nums.size()-1;
        while(low<=high){
            if(nums[low] <= nums[high]) return nums[low];

            int mid = low + (high-low)/2;

            if((mid == 0 || nums[mid] < nums[mid-1] ) && (mid == nums.size()-1 || nums[mid] < nums[mid+1]))
            return nums[mid];
            else if(nums[low] <= nums[mid]) low = mid+1;
            else high = mid -1;
        }

        return INT_MAX;

       /*
       int l = 0;
       int r = nums.size()-1;
       int mid;

       while(l<r){
           mid = (l+r)/2;

           if(nums[mid] < nums[r]) r = mid;
           else l = mid+1;
       }

       return nums[l];
       */
       
        /*
        //Solution n
        sort(nums.begin(), nums.end());
        return nums[0];
        */
    }
};