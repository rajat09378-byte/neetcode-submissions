class Solution {
    public:
        vector<int> sortedSquares(vector<int>& nums) {

                int n = nums.size();

                        vector<int> ans(n);

                                int left = 0;
                                        int right = n - 1;

                                                int index = n - 1;

                                                        while(left <= right) {

                                                                    int a = nums[left] * nums[left];
                                                                                int b = nums[right] * nums[right];

                                                                                            if(a > b) {
                                                                                                            ans[index] = a;
                                                                                                                            left++;
                                                                                                                                        }
                                                                                                                                                    else {
                                                                                                                                                                    ans[index] = b;
                                                                                                                                                                                    right--;
                                                                                                                                                                                                }

                                                                                                                                                                                                            index--;
                                                                                                                                                                                                                    }

                                                                                                                                                                                                                            return ans;
                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                };
