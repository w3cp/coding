// ac 100/100
// github.com/w3cp/
// http://algo.codemarshal.org/problems/556cc74b7b4cec0300d4abca

#include <iostream>
#include <set>

using namespace std;

int main() {
    //freopen("/sdcard/coding/anwar/oj/in.txt", "rt", stdin);
    //freopen("/sdcard/coding/anwar/oj/out.txt", "wt", stdout);
    
    int tc;
    int current_tc = 0;
    
    cin >> tc;
    
    while (current_tc < tc) {
        int i;
        set< string > s;
        int total;
        string word;
        cin >> total;
        for (i = 0; i < total; i++) {
            cin >> word;
            s.insert(word);
        }
        cout << s.size() << endl;
        current_tc++;
    }
        
    return 0;
}
