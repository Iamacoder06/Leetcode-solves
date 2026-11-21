class Solution {
public:
    int search(vector<int>& nums, int target) {
        int k = 0 ;
        for (int i = 1 ;i < nums.size() ; i++){
            if (nums[i] < nums[i-1]){
                k = i;
                break;
            }
        }
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        reverse(nums.begin(),nums.end());

        int low = 0 , high = nums.size()-1, ans = -1;
        while (low <=high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target){
                ans = mid ;
                break;
            }
            else if (nums[mid] < target){
                low = mid +1 ;
            }
            else {
                high = mid - 1;
            }
        }
        if (ans != -1){
            return (ans+k)%nums.size();
        } 
        else {
            return -1;
        } 

    }
};