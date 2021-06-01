#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.size();
        stack<char> st;
        st.push(s[0]);
        for(int i=1;i<n;i++){
            if(!st.empty()){
                if(st.top() == s[i]){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
        }
        s.clear();
        
        while(!st.empty()){
            s += st.top();
            st.pop();
        }
        reverse(s.begin(), s.end());
        return s;
    }
};