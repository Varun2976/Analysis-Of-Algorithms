#include <bits/stdc++.h>
using namespace std;

struct Job {
    int id, deadline, profit;
};

bool cmp(Job a, Job b) {
    return a.profit > b.profit;
}

// Function
pair<vector<int>, int> jobSequencing(vector<Job>& jobs) {
    sort(jobs.begin(), jobs.end(), cmp);

    int maxDeadline = 0;
    for (auto j : jobs)
        maxDeadline = max(maxDeadline, j.deadline);

    vector<int> slot(maxDeadline + 1, -1);
    int totalProfit = 0;

    for (auto j : jobs) {
        for (int t = j.deadline; t > 0; t--) {
            if (slot[t] == -1) {
                slot[t] = j.id;
                totalProfit += j.profit;
                break;
            }
        }
    }

    vector<int> result;
    for (int i = 1; i <= maxDeadline; i++) {
        if (slot[i] != -1)
            result.push_back(slot[i]);
    }

    return {result, totalProfit};
}

// 🔹 Main Function
int main() {
    int n;
    cout << "Enter number of jobs: ";
    cin >> n;

    vector<Job> jobs(n);

    cout << "Enter id, deadline, profit for each job:\n";
    for (int i = 0; i < n; i++) {
        cin >> jobs[i].id >> jobs[i].deadline >> jobs[i].profit;
    }

    auto ans = jobSequencing(jobs);

    cout << "\nSelected Jobs: ";
    for (int id : ans.first) {
        cout << id << " ";
    }

    cout << "\nTotal Profit: " << ans.second << endl;

    return 0;
}