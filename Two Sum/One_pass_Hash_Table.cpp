#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution{
public:
	vector<int> twoSum(vector<int>& nums, int target){
		unordered_map<int, int> hash;
		for(int i = 0; i < nums.size(); i++){
			int complement = target - nums[i];
			if(hash.find(complement) != hash.end()){
				return {hash[complement], i};
			}
			hash[nums[i]] = i;
		}
		return{};
	}
};


int main(){
	int n;
	cin >> n;

	vector<int> nums(n);
	for(int i = 0; i < n; ++i){
		cin >> nums[i];
	}

	int target;
	cin >> target;

	Solution sol;
	vector<int> result = sol.twoSum(nums, target);
	if (!result.empty()) {
        cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No two sum solution found." << endl;
    }
	return 0;
}