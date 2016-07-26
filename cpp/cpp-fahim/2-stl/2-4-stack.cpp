#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack< int > st;
    st.push(100); // inserting 100
    st.push(101); // inserting 101
    st.push(102); // inserting 102
    while(!st.empty()) {
        cout << st.top() << endl; // printing the top
        st.pop(); // removing that one
    }
    return 0;
}
