#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<int> nums = {30,10,20,10,30,20,40};
    
    for(int num : nums){
        cout << num << " ";
    }
    cout << endl;

    sort(nums.begin(), nums.end());
     for(int num : nums){
        cout << num << " ";
    }

    nums.erase(unique(nums.begin(), nums.end()), nums.end());

    for(int num : nums){
        cout << num << " ";
    }
    cout << endl;

    return 0;
}