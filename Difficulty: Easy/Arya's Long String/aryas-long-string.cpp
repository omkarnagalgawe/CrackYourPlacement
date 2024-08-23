//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int fun(string s, int k, int n, char c) {
    // code here
    
    int cnt=0;
    int len=s.length();
    for(char a:s){
        if(a==c){
            cnt++;
        }
    }
    int fullstring=n/len;
    int totalcnt=fullstring*cnt;
    int remainingstr=n%len;
    
    for(int i=0;i<remainingstr;i++){
        if(s[i]==c){
        totalcnt+=1;}
    }
    return totalcnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t, i, n, k;
    char c;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cin >> k >> n >> c;
        Solution ob;
        cout << ob.fun(s, k, n, c) << endl;
    }
    return 0;
}

// } Driver Code Ends