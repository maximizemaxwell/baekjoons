#include <iostream>
#include <queue>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, K;
    cin >> N >> K;
    queue<int> q;

    for (int i = 1; i <= N; i++) {
        q.push(i);
    }
    cout << '<';
    while (q.size() > 1) { 
        for (int k = 0; k < K - 1; k++) {
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << ", ";
        q.pop();
    }
    cout << q.front() << '>'; 
    return 0;
}
