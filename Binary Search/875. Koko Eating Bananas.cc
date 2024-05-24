class Solution {
public:
    int minEatingSpeed(vector<int>& a, int h) {
        int n = a.size();
        sort(begin(a), end(a));

        int l = 1, r = a[n - 1], m;
        while (l <= r) {
            m = l + r >> 1;
            long long sum = 0;
            for (int i = n - 1; i >= 0; --i) {
                if (a[i] <= m) {
                    sum += (i + 1);
                    break;
                } else
                    sum += (a[i] + m - 1) / m;
            }
            if (sum <= h) {
                r = m - 1;
            }
            else {
                l = m + 1;
            }
        }
        return l;
    }
};