#include <bits/stdc++.h>

using namespace std;

string trim(string);
vector<string> splitString(string);

string trim(string str)
{
    if (str.empty())
        return str;

    size_t firstscan = str.find_first_not_of(" ");
    size_t first = firstscan == string::npos ? str.length() : firstscan;
    size_t last = str.find_last_not_of(" ");
    return str.substr(first, last - first + 1);
}

vector<string> splitString(string input_string)
{
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char &x, const char &y)
                                      { return x == y and x == ' '; });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ')
    {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos)
    {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}



int minSegments(int N, vector<vector<long>> A)
{
    // Stores the start and end points

    __gnu_cxx::__normal_iterator<long *, std::vector<long, std::allocator<long>>> startPoints[N];
    __gnu_cxx::__normal_iterator<long *, std::vector<long, std::allocator<long>>> endPoints[N];
    // auto startPoints[N], endPoints[N];

    // Traverse segments and fill the
    // startPoints and endPoints
    for (int i = 0; i < N; i++)
    {
        startPoints[i] = A[i].begin();
        endPoints[i] = A[i].end();
    }

    // Sort the startPoints
    sort(startPoints, startPoints + N);

    // Sort the startPoints
    sort(endPoints, endPoints + N);

    // Store the minimum number of
    // deletions required and
    // initialize with (N - 1)
    int ans = N - 1;

    // Traverse the array segments[]
    for (int i = 0; i < N; i++)
    {

        // Store the starting point
        __gnu_cxx::__normal_iterator<long *, std::vector<long, std::allocator<long>>> f = A[i].begin();

        // cout << f << endl;

        // Store the ending point
        __gnu_cxx::__normal_iterator<long *, std::vector<long, std::allocator<long>>> s = A[i].end();

        // cout << s << endl;

        // Store the number of segments
        // satisfying the first condition
        // of non-intersection
        int leftDelete = lower_bound(endPoints,
                                     endPoints + N, f) -
                         endPoints;

        // Store the number of segments
        // satisfying the second condition
        // of non-intersection
        int rightDelete = max(
            0, N - (int)(upper_bound(startPoints,
                                     startPoints + N, s) -
                         startPoints));

        // Update answer
        ans = min(ans,
                  leftDelete + rightDelete);
    }

    // Print the answer
    cout << ans << endl;
}

int main()
{
    ios ::sync_with_stdio(0);
    string inputline;

    getline(cin, inputline);
    int N = stoi(trim(inputline));

    vector<vector<long>> A(N, vector<long>(2));

    for (int i = 0; i < N; i++)
    {
        getline(cin, inputline);
        vector<string> inputLineArr = splitString(trim(inputline));
        for (int j = 0; j < 2; j++)
        {
            A[i][j] = stol(inputLineArr[j]);
        }
    }
    int result = minSegments(N, A);

    cout << result << "\n";
    return 0;
}

