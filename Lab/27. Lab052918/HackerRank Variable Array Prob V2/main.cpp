#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int n, q;
    cin>>n>>q;
    vector<vector<int> a(n);
    for(int i=0;i<n;i++){
        int t, j;
        cin>>t;
        a[i].resize(t);
        for(j=0;j<t;j++){
            cin>>a[i][j];
        }
    }
    for(int qN=0;qN<q;qN++){
        int i, j;
        cin>>i>>j;
        cout<<a[i][j]<<endl;
    }
    return 0;
} 