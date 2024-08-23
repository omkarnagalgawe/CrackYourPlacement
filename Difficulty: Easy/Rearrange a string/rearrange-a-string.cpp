//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
    string arrangeString(string str)
    {
        //code here.
        int n=str.length();
        int sum=0;
        vector<char> alphabets;
        for(char ch :str){
            if(isalpha(ch)){
            alphabets.push_back(ch);}
         else if(isdigit(ch)){
            sum+=ch-'0';
        }}
         sort(alphabets.begin(), alphabets.end());
        string result(alphabets.begin(),alphabets.end());
        if(sum>0){
            result+=to_string(sum);
        }
        return result;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.arrangeString(s) << endl;
    }
return 0;
}


// } Driver Code Ends