#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> cost;
vector<vector<int>> paths;
bool* visited;
int* curr_path;
long long min_cost = LLONG_MAX;
long long curr_cost = 0;

void backtrack(int i){
    for (int j = 1; j < n; j++) {
        if (!visited[j]) {
            visited[j] = true;
            curr_path[i] = j;
            curr_cost += cost[curr_path[i-1]][j];
            if (i == n - 1){
                auto total_cost = curr_cost + cost[j][0];
                if (total_cost < min_cost) {
                    paths.clear();
                    min_cost = total_cost;
                    paths.push_back(vector<int>(curr_path, curr_path + n));
                } else if (total_cost == min_cost) {
                    paths.push_back(vector<int>(curr_path, curr_path + n));
                }
            } else if (curr_cost < min_cost) {
                backtrack(i + 1);
            }
            curr_cost -= cost[curr_path[i-1]][j];
            visited[j] = false;
        }
    }
}

int main() {
    cin >> n;
    cost.resize(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> cost[i][j];
        }
    }
    visited = new bool[n];
    fill(visited, visited + n, false);
    curr_path = new int[n];

    visited[0] = true;
    curr_path[0] = 0;
    backtrack(1);
    cout << min_cost;
    if (paths.size() > 1)
        cout << ' ' << paths.size();
    cout << endl;
    for (auto path : paths) {
        for (int i = 0; i < n; i++) {
            cout << path[i] + 1 << " ";
        }
        cout << endl;
    }
}
