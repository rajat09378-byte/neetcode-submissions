
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {

        int sum = 0;
        int count = 0;

        for(int i = 0; i < k; i++) {
            sum += arr[i];
        }

        if(sum >= k * threshold) {
            count++;
        }

        int i = k;

        while(i < arr.size()) {

            sum = sum + arr[i] - arr[i-k];

            if(sum >= k * threshold) {
                count++;
            }

            i++;
        }

        return count;
    }
};
