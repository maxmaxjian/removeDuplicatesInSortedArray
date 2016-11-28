#include <iostream>
#include <vector>
#include <iterator>

class solution {
  public:
    // int removeDuplicates(std::vector<int> & nums) {
    //     int dist = 2;
    //     int i = 2, k = i;
    //     for (; i < nums.size();) {
    //         std::cout << "entering: i = " << i << ", k = " << k << std::endl;
    //         if (nums[k-dist] == nums[k]) {
    //             int j = i;
    //             while (j < nums.size() && nums[k] == nums[j])
    //                 j++;
    //             if (j < nums.size()) {
    //                 nums[k] = nums[j];
    //                 i = j+1;
    //                 k++;
    //             }
    //         }
    //         else {
    //             k++;
    //             i++;
    //         }
    //         std::cout << "  exiting: i = " << i << ", k = " << k << std::endl;
    //     }
    //     return k;
    // }

    int removeDuplicates(std::vector<int> & nums) {
        int dist = 2;
        int i = 2, k = i;
        for(; i < nums.size(); i++) {
            if (nums[k-dist] != nums[i]) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};
int main() {
    std::vector<int> nums{1,1,1,2,2,2,3,4,4,4,5,5,5,5};
    std::cout << "Before removing:\n";
    std::copy(nums.begin(), nums.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
    
    solution soln;
    int newlen = soln.removeDuplicates(nums);
    std::cout << "After removing:\n";
    std::copy(nums.begin(), nums.begin()+newlen, std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
}

