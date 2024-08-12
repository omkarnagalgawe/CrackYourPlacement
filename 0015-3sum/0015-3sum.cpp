class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        int n=arr.size();
        vector<vector<int>> s;
    sort(arr.begin(), arr.end());  // Sort the array

    for (int i = 0; i < n; i++) {
        // Avoid duplicate `i` elements
        if (i > 0 && arr[i] == arr[i - 1]) continue;

        int j = i + 1, k = n - 1;

        while (j < k) {
            int sum = arr[i] + arr[j] + arr[k];  // Calculate the sum of the triplet

            if (sum < 0) {
                j++;  // Move `j` to the right if the sum is less than zero
            } else if (sum > 0) {
                k--;  // Move `k` to the left if the sum is greater than zero
            } else {
                // We found a triplet with sum = 0
                vector<int> temp = {arr[i], arr[j], arr[k]};
                s.push_back(temp);

                // Move both pointers to find the next unique pair
                j++;
                k--;

                // Skip duplicates for `j`
                while (j < k && arr[j] == arr[j - 1]) j++;

                // Skip duplicates for `k`
                while (j < k && arr[k] == arr[k + 1]) k--;
            }
        }
    }

    return s;
}
    };
