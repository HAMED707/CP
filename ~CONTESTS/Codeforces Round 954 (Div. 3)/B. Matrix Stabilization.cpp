#include <iostream>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

const vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool isValid(int x, int y, int n, int m) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

bool isGreaterThanNeighbors(vector<vector<int>>& a, int x, int y) {
    int n = a.size();
    int m = a[0].size();
    for (const auto& dir : directions) {
        int nx = x + dir.first;
        int ny = y + dir.second;
        if (isValid(nx, ny, n, m) && a[x][y] <= a[nx][ny]) {
            return false;
        }
    }
    return true;
}

void stabilizeMatrix(vector<vector<int>>& a) {
    int n = a.size();
    int m = a[0].size();
    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> pq;
    
    // Insert all cells that are greater than their neighbors into the priority queue
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (isGreaterThanNeighbors(a, i, j)) {
                pq.emplace(a[i][j], i, j);
            }
        }
    }

    while (!pq.empty()) {
        auto [value, x, y] = pq.top();
        pq.pop();
        
        // Only process the current maximum element
        if (!isGreaterThanNeighbors(a, x, y)) continue;
        
        // Decrease the element by 1
        a[x][y]--;
        
        // Check its neighbors
        for (const auto& dir : directions) {
            int nx = x + dir.first;
            int ny = y + dir.second;
            if (isValid(nx, ny, n, m) && isGreaterThanNeighbors(a, nx, ny)) {
                pq.emplace(a[nx][ny], nx, ny);
            }
        }
        
        // Recheck the current element after decreasing it
        if (isGreaterThanNeighbors(a, x, y)) {
            pq.emplace(a[x][y], x, y);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> a[i][j];
            }
        }
        
        stabilizeMatrix(a);
        
        for (const auto& row : a) {
            for (int val : row) {
                cout << val << " ";
            }
            cout << "\n";
        }
    }
    
    return 0;
}
