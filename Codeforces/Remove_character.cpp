#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string removeChars(string string1, string string2) {
        string str;
        for(int i=0;i<string1.size();i++){
            if (string2.find(string1[i])== string::npos)
            {
                str.push_back(string1[i]);
            }
            }
            return str;
        }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string string1,string2;
        cin >> string1; 
        cin >> string2;
        Solution ob;
        cout << ob.removeChars(string1,string2) << endl;
    }
    return 0;
}