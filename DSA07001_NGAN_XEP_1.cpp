#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	stack<string> st;
	while(getline(cin, s)) {
        if(s.substr(0, 4) == "push") {
            st.push(s.substr(5));
		}
		if(s == "show") {
            if(st.empty()){
                cout << "empty";
            }
            else {
                stack<string>temp;
                while(!st.empty()){
                    temp.push(st.top());
                    st.pop();
                }
                while(!temp.empty()){
                    st.push(temp.top());
                    cout << temp.top() << " ";
                    temp.pop();
                }
            }
            cout << endl;
		}
		if(s == "pop") {
			if(st.empty()){
                continue;
            }
            else {
                st.pop();
            }
		}
	}
}