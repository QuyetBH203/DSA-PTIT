#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N; cin >> N;

    vector<int> A(N + 1);
    for (int i = 1; i <= N; ++i)
        cin >> A[i];

    // let's solve the problem
    vector<int> decreasing; 

    pair<int, int> answer;

    // build the decreasing sequence
    decreasing.push_back(1);
    for (int i = 1; i <= N; ++i)
        if (A[i] < A[decreasing.back()])
            decreasing.push_back(i); // we work with indexes because we might have equal values

    for (int i = N; i > 0; --i) {
        while (decreasing.size() and A[decreasing.back()] < A[i]) { // while we can pair these 2
            pair<int, int> current_pair(decreasing.back(), i);
            if (current_pair.second - current_pair.first > answer.second - answer.first)
                answer = current_pair;
            decreasing.pop_back();
        }
    }

    cout << "Best pair found: (" << answer.first << ", " << answer.second << ") with values (" << A[answer.first] << ", " << A[answer.second] << ")\n";
}