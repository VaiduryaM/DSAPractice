//33. Search in Rotated Sorted Array

class Solution {
public:
    int search(vector<int>& nums, int target) {

        //s30
        if(nums.size() == 0) return -1;
        int low = 0, high = nums.size()-1;
        
        while(low <= high){
            int mid = low+(high - low)/2;

            if(nums[mid] == target) return mid;
            if(nums[low] <= nums[mid]){
                if(nums[low] <= target && nums[mid] > target) high = mid - 1;
                else low = mid + 1;
            }
            else{
                if(nums[mid] < target && nums[high] >= target)  low = mid + 1;
                else high = mid - 1; 
            }
            
        }
        
        return -1;

        /*
        int l= 0;
        int r = nums.size()-1;
        int mid;

        while(l<=r){
            mid = l+(r-l)/2; 
            if(nums[mid] == target) return mid;

            //left side is already sorted
            if(nums[l]<=nums[mid]){
                if(nums[l] <= target && target < nums[mid]) r = mid-1;                
                else l = mid+1;
            }
            //right side are sorted
            else{
                if(nums[mid] < target && target <= nums[r]) l = mid+1;
                else r = mid -1;
            }
        }
        
        return -1;
        */
        
    }
};