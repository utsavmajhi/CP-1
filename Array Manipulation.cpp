#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


long long arrayManipulation(int n, vector<vector<long long>> queries) {
    long long arr[n]={0};
    long long max=0;
    for(long long i=0; i<queries.size();i++){
        for(long long j= (queries[i][0]-1);j<queries[i][1];j++){
            arr[j]+= queries[i][2];
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max= arr[i];
        }
    }
    return max;
}

int main(){
    int n,m;
    cin>>n>>m;
  vector<vector<long long>> queries(m);
    for (int i = 0; i < m; i++) {


        for (int j = 0; j < 3; j++) {
            cin >> queries[i][j];
        }

        long long result = arrayManipulation(n, queries);
        cout<<result;
    }
}
