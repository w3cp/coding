#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue< int > q;
    q.push(100); // inserting 100
    q.push(101); // inserting 101
    q.push(102); // inserting 102
    while(!q.empty()) {
        cout << q.front() << endl; // printing the front
        q.pop(); // removing that one
    }
    return 0;
}
