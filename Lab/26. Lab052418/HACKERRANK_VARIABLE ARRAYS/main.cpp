//
//
//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//
//int main() {
//    int N1;
//    int N2;
//    cin>>N1;
//    cin>>N2;
//    int arr[N1];
//    for(int i=0;i<N1;i++){
//        cin>>arr[i];
//    }
////    for(int j=0;j<N2;j++){
////        cin>>arr[j];
////    }
//    for(int i=N1-1;i>=0;--i){
//        cout<<arr[i]<<" ";
//    }
////    for(int j=N2-1;j>=0;j--){
////        cout<<arr[j]<<" ";
////    }
//    return 0;
//}


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n, q;
    cin>>n>>q;
    vector<vector<int>> a(n);
    for(int i=0;i<n;i++){
        int t, j;
        cin>>t;
        a[i].resize(t);
        for(j=0;j<t;j++){
            cin>>a[i][j];
        }
    }
    for(int qNum=0;qNum<q;qNum++){
        int i, j;
        cin>>i>>j;
        cout<<a[i][j]<<endl;
    }
    return 0;
} 
