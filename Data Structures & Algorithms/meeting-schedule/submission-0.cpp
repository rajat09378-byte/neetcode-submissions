/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
    public:
        bool canAttendMeetings(vector<vector<int>>& intervals) {

                sort(intervals.begin(), intervals.end());

                        for(int i = 1; i < intervals.size(); i++) {

                                    if(intervals[i][0] < intervals[i-1][1]) {
                                                    return false;
                                                                }
                                                                        }

                                                                                return true;
                                                                                    }
                                                                                    };

