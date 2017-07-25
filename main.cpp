#include <iostream>
#include <vector>

using namespace std;

//71.62% 3ms
//time O(n)
//space O(1)
class SolutionMe1 {
public:
    int removeElement(vector<int>& nums, int val) {
        //for [0,k)
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                swap(nums[k],nums[i]);
                k++;
            }
        }
        return k;
    }
};

//1% 9ms
class SolutionME2 {
public:
    int removeElement(vector<int>& nums, int val) {
        //for [0,k)
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                if(i!=k){
                    swap(nums[k],nums[i]);
                    k++;
                }else k++;

            }
        }
        return k;
    }
};

//

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}