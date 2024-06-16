class Solution {
    public static void main(String[] args)
    {
        int[] nums={1,2,5,6};
        int target=3;
        Solution solution = new Solution(); // Create an instance of Solution
        System.out.println(solution.searchInsert(nums,target)); // Call searchInsert using the instance
    }
    
    public int searchInsert(int[] nums, int target) {
        int start=0;
        int end=nums.length-1;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
           else if(nums[mid]<target)
            {
                start=mid+1;
            }
           else
            {
                end=mid-1;
            }
        }
        return start;  
    }
}
