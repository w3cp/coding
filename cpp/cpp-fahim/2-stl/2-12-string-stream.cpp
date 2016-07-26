#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    char line[1000];
    while (gets(line)) {
        stringstream ss(line); // initialize kortesi
        int num; 
        vector< int > v;
        while (ss >> num) v.push_back(num); // :P
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++) cout << v[i] << ' '; // print routine
        cout << endl;
    }
    return 0;
}
