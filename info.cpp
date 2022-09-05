// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to find the minimum number
// of segments required to be deleted
void minSegments(vector<vector<long> > segments,
                 int n)
{
    // Stores the start and end points
    int startPoints[n], endPoints[n];

    // Traverse segments and fill the
    // startPoints and endPoints
    for (int i = 0; i < n; i++)
    {
        startPoints[i] = segments[i].first;
        endPoints[i] = segments[i].second;
    }

    // Sort the startPoints
    sort(startPoints, startPoints + n);

    // Sort the startPoints
    sort(endPoints, endPoints + n);

    // Store the minimum number of
    // deletions required and
    // initialize with (N - 1)
    int ans = n - 1;

    // Traverse the array segments[]
    for (int i = 0; i < n; i++)
    {

        // Store the starting point
        int f = segments[i].first;

        cout << f << endl;

        // Store the ending point
        int s = segments[i].second;

        cout << s << endl;

        // Store the number of segments
        // satisfying the first condition
        // of non-intersection
        int leftDelete = lower_bound(endPoints,
                                     endPoints + n, f) -
                         endPoints;

        // Store the number of segments
        // satisfying the second condition
        // of non-intersection
        int rightDelete = max(
            0, n - (int)(upper_bound(startPoints,
                                     startPoints + n, s) -
                         startPoints));

        // Update answer
        ans = min(ans,
                  leftDelete + rightDelete);
    }

    // Print the answer
    cout << ans << endl;
}

// Driver Code
int main()
{
    vector< vector <long>> arr()
    pair<int, int> arr[] = {
        {0, 1}, {2, 5}};
    int N = sizeof(arr) / sizeof(arr[0]);

    // Function Call
    minSegments(arr, N);

    return 0;
}