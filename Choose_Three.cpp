#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) 
    {
        int N, S;
        cin >> N >> S;
        int array[N];
        for (int i = 0; i < N; i++) 
        {
            cin >> array[i];
        }

        sort(array, array + N);
        bool found = false;
        for (int i = 0; i < N - 2; i++) 
        {
            int left = i + 1, right = N - 1;
            while (left < right) 
            {
                int currentSum = array[i] + array[left] + array[right];
                if (currentSum == S) 
                {
                    found = true;
                    break;
                } 
                else if (currentSum < S) 
                {
                    left++;
                } 
                else 
                {
                    right--;
                }
            }
            if (found) break;
        }
        if (found) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
