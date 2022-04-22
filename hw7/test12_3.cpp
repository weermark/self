// 用enumerate tuple dfs枚舉所有組合，同時計算每種解出現的次數
#include <iostream>
#include <cstdlib>
#include <vector>
#include <unordered_map>
#include <math.h>
#include <algorithm>
#include <climits>

using namespace std;
using llint = long long int;

// <value, count>
unordered_map<llint, int> mapp;
unordered_map<llint, int> mapn;
vector<llint> v1(INT_MAX, 0);
vector<llint> v2(INT_MAX, 0);

int res;
int nump;
int numn;
// int subset[1073741824];     // 2^30

// isEmpty use to judge is it empty subset or not
void dfsp(llint curTotal, int i, int isEmpty){
    if(i == nump){
        if(isEmpty > 0) {
            // cout << "sum:" << total << ' ' << endl;
            res = abs(curTotal);
            map[res]++;
            return;
        }
        else if(isEmpty <= 0){
            return;
        }
    }
   
    dfs(curTotal, i + 1, isEmpty);          // this ele not be add(2)
    dfs(v[i] + curTotal, i + 1, isEmpty + 1);   // this ele is added(1)
}

int main(){
    int m;
    llint val;
    cin >> m;
    for(int i = 0; i < m; i++){
        res = 0;
        nump = 0;
        numn = 0;
        while(cin >> val){
            if(val > 0)
                v1[nums++] = val;
            if(getchar() == '\n')   break;
        }
        
        dfs(res, 0, 0);
        auto iter = min_element(map.begin(), map.end());
        cout << iter->second << " " << iter->first << endl;
        
        // ele in v will be rewrite, so don't need to clear

        map.clear();
    }
    
}