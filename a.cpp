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

// write a program that uses 2 vectors one for names and one for grades

int main(){
	// file_i_o();
	
	// taking the input of number of users and grades
	int n;
	cin>>n;

	vector<string> names(n);

	vector<long long > grades(n);


// taking the names as input
	for(int i=0;i<n;i++){
		cin>>names[i];

	}

	// taking the grades as input

	for(int i=0;i<n;i++){
		cin>>grades[i];

	}

// finding the value of mean

	int mean=0;
	for(int i=0;i<n;i++){
		mean+=grades[i];
	}

	mean=mean/n;

	// printing the value of mean here

	cout<<"Mean of grades are "<<mean<<endl;

	// finding the value median here

	int median=0;
	vector<long long> new_grades=grades;
	sort(new_grades.begin(),new_grades.end());
	if(n%2==0){
		median=(new_grades[n/2]+new_grades[n/2+1])/2;
	}
	else{
		median=new_grades[n/2];
	}

// printing the value of median here

	cout<<"Median of grades are "<<median<<endl;

	// finding the value of mode

	int mode=((3*median)-mean)/2;

	// printing the value of mode

	cout<<"Mode of grades are "<<mode<<endl;

// finding the names whose grades are same as mode
	cout<<"the names of the students having that mode are"<<endl;
	for(int i=0;i<n;i++){
		if(grades[i]==mode){
			cout<<names[i]<<" ";
		}
	}
	cout<<endl;

	
	
    return 0;
}