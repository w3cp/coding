#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector< int > v, t;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    
    t = v; // copying
    
    for (int i = 0; i < v.size(); i++) cout << t[i] << endl;
    
    return 0;
}
