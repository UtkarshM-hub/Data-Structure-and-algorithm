#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> hash;
        vector<int>result;
        for(int i=0;i<nums1.size();i++){
            if(hash.find(nums1[i])!=hash.end()){
                hash[nums1[i]]++;
                continue;
            }
            hash.insert(pair<int,int>(nums1[i],1));
        }
        for(int j=0;j<nums2.size();j++){
            if(hash[nums2[j]]!=0){
                result.push_back(nums2[j]);
                hash[nums2[j]]--;
            }
        }
        return result;
    }
};

int main(){
    
}