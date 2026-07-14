class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int hr1 = stoi(startTime.substr(0,2));
        int min1 = stoi(startTime.substr(3,2));
        int sec1 = stoi(startTime.substr(6,2));
        int st = hr1*60*60 + min1*60 + sec1;

        int hr2 = stoi(endTime.substr(0,2));
        int min2 = stoi(endTime.substr(3,2));
        int sec2 = stoi(endTime.substr(6,2));
        int et = hr2*60*60 + min2*60 + sec2;

        return et-st;
    }
};