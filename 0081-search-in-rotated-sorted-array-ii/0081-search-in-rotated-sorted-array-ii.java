class Solution {
    public boolean search(int[] nums, int target) {
        int left = 0, right = nums.length - 1;

        while (left <= right) {
            if (nums[left] == target || nums[right] == target) { // Added condition for nums[right]
                return true;
            }

            else if (target > nums[left]) {
                while (left < right && nums[left + 1] == nums[left]) {
                    left++;
                }
                left++;
            }

            else if (target < nums[right]) { // Added missing '('
                while (left < right && nums[right - 1] == nums[right]) {
                    right--;
                }
                right--;
            }

            else {  // Corrected to a basic 'else' without a condition
                break;
            }
        }

        return false;  // Added closing brace for the class
    }
}  // Added final closing brace
