#include <iostream>
#include <cstdlib>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    vector<int> nums{1,3,5};
    vector<vector<int>> res(1);
    vector<int> sum;
    int subSum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        int size = res.size();
        for (int j = 0; j < size; ++j) {
            res.push_back(res[j]);
            res.back().push_back(nums[i]);
        }
    }
    for(auto i : res){
        for(auto j : i){
            //cout << j << " ";
            subSum += j;
        }
        //cout << endl;
        sum.push_back(subSum);
        subSum = 0;
    }
    /*for(auto i : sum){
        cout << i << " ";
    }*/
}