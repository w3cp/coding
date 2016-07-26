#include <iostream>
#include <queue>

using namespace std;

int main() {
    priority_queue< int > q;
    q.push(10230); // inserting 10230
    q.push(1021); // inserting 1021
    q.push(102322); // inserting 102322
    while(!q.empty()) {
        cout << q.top() << endl; // printing the top
        q.pop(); // removing that one
    }
    return 0;
}
