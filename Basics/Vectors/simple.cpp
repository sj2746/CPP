/* 
Operation	        Code
Add	            push_back()
Remove last	    pop_back()
Size	        v.size()
Sort	        sort(v.begin(), v.end())
Reverse	        reverse(v.begin(), v.end())
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(10);
    v.push_back(15);

    for(int x : v){
        cout << x << " ";
    }
    return 0;
}