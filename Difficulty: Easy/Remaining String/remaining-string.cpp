//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    string printString(string s, char ch, int count) {
        // Your code goes here
         int n = s.length();
        int cnt = 0;
        int ans = -1; // Initialize to -1 to signify "not found"

        for (int i = 0; i < n; i++) {
            if (s[i] == ch) {
                cnt++;
                if (cnt == count) {
                    ans = i;
                    break;  // Stop once we find the desired occurrence
                }
            }
        }

        // If the count is not reached or if the character doesn't appear enough times
        if (ans == -1 || ans == n-1) {
            return "";
        } else {
            return s.substr(ans + 1);  // Return the substring starting from the next character after 'ans'
        }
       }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        char ch;
        int count;

        cin >> s >> ch >> count;
        Solution ob;
        cout << ob.printString(s, ch, count) << "\n";
    }

    return 0;
}
// } Driver Code Ends