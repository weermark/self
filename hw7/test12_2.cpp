#include <iostream>
#include <cstdlib>
#include <map>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

using llint = long long int;

// 修改或換寫法，直接讓組合值輸入map而非先放入vector再轉到map
map<llint, llint> combination(vector<llint> &nums){
    vector<vector<llint>> res(1);
    int subSum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        int size = res.size();
        for (int j = 0; j < size; ++j) {
            res.push_back(res[j]);
            res.back().push_back(nums[i]);
        }
    }
    map<llint, llint> sum;
    for(auto i : res){
    	// 遇到空集合，不計算 
        if(i.empty())   continue;
        for(auto j : i){
            subSum += j;
        }
        sum[subSum]++;
        subSum = 0;
    }
    return sum;
}

int main(){
    llint m, val, count, min = LLONG_MAX;
    bool flag = false;
    // 接收vector放入combination後傳回的map
    map<llint, llint> posMap, negMap;
    //auto iterpos = posMap.begin();
    //auto iterneg = negMap.rbegin();
    // 接收使用者輸入的數
    vector<llint> posVec, negVec;
    cin >> m;
    for(int i = 0; i < m; i++){
        while(cin >> val){
            // 輸入為正，放入posVec
            if(val > 0)
                posVec.push_back(val);
            //輸入為負或0，放入negVec
            else
                negVec.push_back(val);
            if(getchar() == '\n')   break;
        }
        // 沒有輸入正數，則判斷negVec內的最大值並輸出，終止
        if(posVec.empty()){
            auto iter = max_element(negVec.begin(), negVec.end()); 
            cout << "1 " << *iter << endl;
            goto finish;
        }
        // 沒有輸入負數或0，則判斷posVec內的最小值並輸出，終止
        else if(negVec.empty()){
            auto iter = min_element(posVec.begin(), posVec.end()); 
            cout << "1 " << *iter << endl;
            goto finish;
        }

        posMap = combination(posVec);
        negMap = combination(negVec);
        
        // 嘗試用雙指針，然仍有問題 
        //iterpos = posMap.begin();
        //iterneg = negMap.rbegin();
        /*while(iterpos != posMap.end() && iterneg != negMap.rend()){
        	llint add = iterpos->first + iterneg->first;
            add = abs(add);
            llint time = iterpos->second > iterneg->second ? iterpos->second : iterneg->second;
            cout << "iter: " << iterpos->first << endl;
            if(min > add){
                min = add;
                count = time;
                flag = true;
            }else if(min == add)
                count += time;
            if(flag == true){
            	iterpos++;
            	flag = false;
			}
			iterneg++;
		}*/
        
        
        // 遍歷posMap和negMap，找出最小值與出現次數(這段可優化)
        for(auto i = posMap.begin(); i != posMap.end(); i++){
        	flag = false;
            for(auto j = negMap.rbegin(); j != negMap.rend(); j++){
                llint add = i->first + j->first;
                add = abs(add);
                //cout << "add: |" << i.first << "+" << j.first << "| =" <<  add << endl;
                llint time = i->second > j->second ? i->second : j->second;
                //cout << "time: " << i.second << ", " << j.second << endl;
                // 新集合數字總和較小 
                if(min > add){
                    min = add;
                    count = time;
                    flag = true;
                // 同集合數字總和再次出現 
                }else if(min == add)
                    count += time;
                // 對於negMap迭代的值相加不會更小，所以跳出換下一個posMap的值
                else if(flag == true){
                	break;
				}
            }
        }
        
        // 輸出次數與最小值
        cout << count << " " << min << endl;
        
        finish:
        flag = false;
        posMap.clear();
        negMap.clear();
        posVec.clear();
        negVec.clear();
        min = LLONG_MAX;
    }
}