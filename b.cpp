#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define m 1000000007 


// the below lines till 17 are for input optput as i am using sublime text.

// void file_i_o(){
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);
// 	cout.tie(0);
// 	#ifndef ONLINE_JUDGE
// 	    freopen("input.txt","r",stdin);
// 	    freopen("output.txt","w",stdout);
// 	#endif
// }

// Dhruv Gogna
// 2010990195

// write a program to sort an array based on the frequency
// and if freaquency are same sort on the basis of the key.

// key  value
// 1    6
// 2    8
// 6    3
// 9    8

// making the comparator for sorting on the basis of frequency

bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.second==b.second){
		return a.first < b.first;
	}
	else{
		return a.second < b.second;
	}
}


// sorting function that will return the vector<pair<int, int>> as output

vector<pair<int, int>> map_Sort(unordered_map<int, int>& mp){
    vector<pair<int, int>> v;

    for(auto i:mp){
    	v.push_back({i.first,i.second});
    }
    sort(v.begin(),v.end(),cmp);

    return v;
}

int main(){
	// file_i_o();
	
	// making the map
    unordered_map<int, int> mp;
    
    // taking the size and taking the input.
    int size;
    cin>>size;
    int a, b;
    for(int i=0; i<size; i++){
        cin>>a>>b;
        mp[a] = b;
    }
    
    vector<pair<int, int>> result = map_Sort(mp);

    // printing the final result after sorting
    for(auto& x: result){
        cout<<x.first<<" "<<x.second<<endl;
    }
	
    return 0;
}




