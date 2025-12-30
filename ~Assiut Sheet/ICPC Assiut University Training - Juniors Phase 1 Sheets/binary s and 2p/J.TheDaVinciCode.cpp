#include <iostream>
#include <vector>

int solve_riddle(int N, int X, const std::vector<int>& arr) {
    // Compute prefix sum array
    std::vector<int> prefix_sum(N + 1, 0);
    for (int i = 0; i < N; ++i) {
        prefix_sum[i + 1] = prefix_sum[i] + arr[i];
    }

    // Initialize answer and binary search bounds
    int ans = -1;
    int left = 0, right = N;

    // Binary search on prefix sums
    while (left <= right) {
        int mid = (left + right) / 2;
        bool valid = false;

        // Check if there exists a subarray of length mid with sum <= X
        for (int i = 0; i <= N - mid; ++i) {
            int subarray_sum = prefix_sum[i + mid] - prefix_sum[i];
            if (subarray_sum <= X) {
                valid = true;
                break;
            }
        }

        if (valid) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return ans;
}

int main() {
    int N, X;
    std::cin >> N >> X;
    std::vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> arr[i];
    }

    int result = solve_riddle(N, X, arr);
    std::cout << result << std::endl;

    return 0;
}
