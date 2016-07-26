#include <cstdio>
#include <vector>

using namespace std;

int main() {
    vector< int > v; v.push_back(1); v.push_back(2); v.push_back(3);
    vector< int > :: iterator i;
    for (i = v.begin(); i < v.end(); i++) {
        printf("%d\n", *i);
        // ei khane gola kato!
    }
    return 0;
}
