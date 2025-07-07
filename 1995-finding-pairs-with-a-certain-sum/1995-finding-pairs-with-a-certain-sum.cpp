#include <bits/stdc++.h>
using namespace std;

class FindSumPairs {
private:
    vector<int> nums1;
    vector<int> nums2;
    unordered_map<int, int> freq2;

public:
    FindSumPairs(vector<int>& n1, vector<int>& n2) {
        nums1 = n1;
        nums2 = n2;
        for (int num : nums2) {
            freq2[num]++;
        }
    }

    void add(int index, int val) {
        int oldVal = nums2[index];
        freq2[oldVal]--;
        if (freq2[oldVal] == 0) {
            freq2.erase(oldVal); // clean up to avoid useless entries
        }

        nums2[index] += val;
        freq2[nums2[index]]++;
    }

    int count(int tot) {
        int result = 0;
        for (int num1 : nums1) {
            int complement = tot - num1;
            if (freq2.count(complement)) {
                result += freq2[complement];
            }
        }
        return result;
    }
};
