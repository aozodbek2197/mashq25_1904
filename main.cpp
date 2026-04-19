// 1-mashq
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 6, a=0, b=1;
    for(int i=0;i<n;i++){
        cout << a << " ";
        int t = a+b;
        a = b; b = t;
    }
}
// 2-mashq
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> m = {{1,2},{3,4}};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
            cout << m[j][i] << " ";
        cout << "\n";
    }
}
