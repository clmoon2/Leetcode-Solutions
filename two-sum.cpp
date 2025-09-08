using namespace std;
#include<vector>
#include<unordered_map>
#include<iostream>


class Solution {
	public:
		vector<int> twoSum(vector<int>& nums, int target) {
	 		//input 
			
			unordered_map<int,int> hashTable;


			//the ds we're going to use
			for(int i = 0; i < nums.size(); ++i) {
				int complement = target - nums[i];
		
					if(hashTable.count(complement)) {
					//output	
						return{hashTable[complement], i};
			}
			
			hashTable[nums[i]] = i;
			//what to do with the data
			}
			return{};

			//output
			//
	}

};	
