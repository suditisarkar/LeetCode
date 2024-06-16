class Solution {
    public static void main(String[] args) {
        int nums[] = {1, 1, 2};
        int uniqueCount = removeDuplicates(nums);  // Call the method and store the result
        System.out.println(uniqueCount);  // Print the count of unique elements
    }

    public static int removeDuplicates(int[] nums) {  // Added "static" keyword
        int count = 0;
        for (int i = 0; i < nums.length; i++) {
            if (i < nums.length - 1 && nums[i] == nums[i + 1]) {
                continue;
            } else {
                nums[count] = nums[i];
                count++;
            }
        }
        return count;
    }
}
