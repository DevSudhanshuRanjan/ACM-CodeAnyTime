#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cout<< "Enter the string of your choice: ";
    getline(cin,s);
    // cout<<s;
    vector<char> alpha{};
    string ans;
    for (char c = 'a'; c <= 'z'; ++c)
    {
        alpha.push_back(c);
    }
    for (char c = 'A'; c <= 'Z'; ++c)
    {
        alpha.push_back(c);
    }
    alpha.push_back(' ');
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < alpha.size(); j++)
        {
            cout<<ans<<alpha[j]<<endl;
            if (s[i] == alpha[j])
            {
                ans += alpha[j];
                break;
            }
            
        }
    }

    return 0;
}