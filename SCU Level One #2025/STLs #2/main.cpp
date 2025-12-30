#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> tickets(n);
    vector<int> customers(m);

    // Read the ticket prices
    for (int i = 0; i < n; i++) {
        cin >> tickets[i];
    }

    // Read the customers' maximum prices
    for (int i = 0; i < m; i++) {
        cin >> customers[i];
    }

    // Insert all ticket prices into a multiset, which keeps them sorted
    multiset<int> ticket_set(tickets.begin(), tickets.end());

    // Process each customer
    for (int i = 0; i < m; i++) {
        int max_price = customers[i];

        // Find the largest ticket that is less than or equal to max_price
        auto it = ticket_set.upper_bound(max_price);
        if (it == ticket_set.begin()) {
            // No valid ticket was found
            cout << -1 << endl;
        } else {
            // We need the largest ticket <= max_price, so go back one step
            it--;
            cout << *it << endl;
            ticket_set.erase(it);  // Remove the sold ticket
        }
    }

    return 0;
}
