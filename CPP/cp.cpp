#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to find subsequences
void findSubsequences(vector<int>& nums, int target, int index, vector<int> current_path) {
    // Base case: if target is reached
    if (target == 0) {
        cout << "{ ";
        for (int x : current_path) cout << x << " ";
        cout << "}" << endl;
        return;
    }

    // If target becomes negative or we run out of elements
    if (target < 0 || index >= nums.size()) {
        return;
    }

    // Choice 1: Include the current element (if it doesn't exceed target)
    if (nums[index] <= target) {
        current_path.push_back(nums[index]);
        findSubsequences(nums, target - nums[index], index + 1, current_path);
        current_path.pop_back(); // Backtrack
    }

    // Choice 2: Skip the current element
    findSubsequences(nums, target, index + 1, current_path);
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 1, 1}; // Sample input
    int target = 7;

    cout << "Subsequences that sum to " << target << ":" << endl;
    findSubsequences(nums, target, 0, {});

    return 0;
}
