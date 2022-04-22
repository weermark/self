// 用enumerate tuple dfs枚舉所有組合，同時計算每種解出現的次數
#include <iostream>
#include <cstdlib>
#include <vector>
#include <unordered_map>
#include <math.h>
#include <algorithm>

using namespace std;
using llint = long long int;

// <value, count>
unordered_map<llint, int> map;
vector<llint> v(1073741824, 0);
int res;
int nums;
// int subset[1073741824];     // 2^30

// isAdd用來判斷是否為空集合，避免0亂入
void dfs(llint curTotal, int i, int isEmpty){
    if(i == nums){
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
   
    dfs(curTotal, i + 1, isEmpty);          // 當次沒加(2)
    dfs(v[i] + curTotal, i + 1, isEmpty + 1);   // 當次有加(1)
}

int main(){
    int m;
    llint val;
    cin >> m;
    for(int i = 0; i < m; i++){
        res = 0;
        nums = 0;
        while(cin >> val){
            v[nums++] = val;
            if(getchar() == '\n')   break;
        }
        
        dfs(res, 0, 0);
        auto iter = min_element(map.begin(), map.end());
        cout << iter->second << " " << iter->first << endl;
        
        // ele in v will be rewrite, so don't need to clear

        map.clear();
    }
    
}