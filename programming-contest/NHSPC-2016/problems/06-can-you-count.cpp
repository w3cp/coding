// ac 100/100
// github.com/w3cp/
// http://algo.codemarshal.org/problems/556cb4f82251f00300a82f49

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
        set< long long int > s;
        int total_star;
        long long int num;
        cin >> total_star;
        for (i = 0; i < total_star; i++) {
            cin >> num;
            s.insert(num);
        }
        cout << "Case " << current_tc + 1 << ": " << s.size() << endl;
        current_tc++;
    }
        
    return 0;
}
