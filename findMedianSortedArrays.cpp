class Solution {
public:
    double findKthElement(vector<int>& nums1, int n1, vector<int>& nums2, int n2, int k)
{
	if (n1 == nums1.size())
		return nums2[n2 + k - 1];
	if (n2 == nums2.size())
		return nums1[n1 + k - 1];
	if (k == 1)
	{
		return min(nums1[n1], nums2[n2]);
	}
	if (nums1.size() <= n1)
	{
		return nums2[n2 + k];
	}
	if (nums2.size() <= n2)
	{
		return nums1[n1 + k];
	}

	int num1_right = min((int)nums1.size() - 1, n1 + k / 2 - 1);
	int num2_right = min((int)nums2.size() - 1, n2 + k / 2 - 1);

	if (nums1[num1_right] < nums2[num2_right])
	{
		return findKthElement(nums1, num1_right + 1, nums2, n2, k - num1_right + n1 - 1);
	}
	else
	{
            return findKthElement(nums1, n1, nums2, num2_right + 1, k - num2_right + n2 - 1);
        }
    }


    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        if ((nums1.size() + nums2.size()) % 2)
        {
            return findKthElement(nums1, 0, nums2, 0, (nums1.size() + nums2.size()) / 2 + 1);
        }
        else
        {
            return (findKthElement(nums1, 0, nums2, 0, (nums1.size() + nums2.size()) / 2) +
                findKthElement(nums1, 0, nums2, 0, (nums1.size() + nums2.size()) / 2 + 1)) / 2.0;
        }
    }
  