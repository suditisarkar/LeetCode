public class Solution {

    public static void main(String[] args) {
        int[] nums = {2, 2, 3, 3};
        int val = 3;
        int newLength = removeElement(nums, val);

        // Print the modified array (optional)
        System.out.print("Modified array: ");
        for (int num : nums) {
            System.out.print(num + " ");
        }
        System.out.println(); // Newline for better readability
    }

    static int removeElement(int[] nums, int val) {
        int count = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != val) {
                nums[count] = nums[i];
                count++;
            }
        }
        return count;
    }
}

