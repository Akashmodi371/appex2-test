#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, W;
        cin >> n >> W;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int p;
            cin >> p;
            v.push_back(p);
        }
        int cnt = 0;
        sort(v.begin(), v.end());
        while (v.size() > 0)
        {
            if (v[v.size() - 1] <= W)
            {
                cnt = count(v.begin(), v.end(), v[v.size() - 1]);
                break;
            }
        }
        cout << cnt<<"\n";
    }
}