#include <iostream>
#include <vector>
using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> nums3;
    int i = 0, j = 0, count = 0;
    while (i < nums1.size() && nums2.size())
    {
        if (nums1[i] < nums2[j])
        {
            nums3.push_back(nums1[i]);
            i++;
            count++;
        }
        else
        {
            nums3.push_back(nums2[j]);
            j++;
            count++;
        }
    }

    for (; i < nums1.size(); i++)
    {
        nums3.push_back(nums1[i]);
        count++;
    }
    for (; j < nums2.size(); j++)
    {
        nums3.push_back(nums2[j]);
        count++;
    }

    if (count % 2 != 0)
    {
        int odd = (count + 1) / 2;
        return nums3[odd];
    }
    else
    {
        int even1 = (count / 2);
        int even2 = ((count / 2) + 1);
        return (nums3[even1] + nums3[even2]) / 2;
    }
}

int main()
{
    vector<int> nums1 = {2, 4, 5, 6};
    vector<int> nums2 = {3, 5, 10, 45};
    findMedianSortedArrays(nums1, nums2);
}