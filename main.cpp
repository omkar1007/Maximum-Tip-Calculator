#include <iostream>
#include <vector>
#include <utility> 
#include <algorithm>
using namespace std;

int main() {
	//code
	int num_tests = 0;
    cin >> num_tests;
	
	for(int i = 0; i < num_tests; ++i ){        // do this num test times
	    int N = 0;
	    int X = 0;
	    int Y = 0;
	    vector <pair<int,int> > A;
	    vector <pair<int,int> > B;
	    int total_tips = 0;
	    
	    cin >> N;
	    cin >> X;
	    cin >> Y;
	    
	    int temp = 0;
 	    for (int j = 0; j < N; ++j){            // get input N times
 	        cin >> temp;
	        A.push_back(make_pair (temp,j));
 	    }
 	    
 	    for (int k = 0; k < N; ++k){            // get input N times
 	        cin >> temp;
	        B.push_back(make_pair (temp,k));
 	    }
 	    
	    vector <pair<int,int> > sorted_A = A;
	    vector <pair<int,int> > sorted_B = B;
	    
	    sort(sorted_A.begin(),sorted_A.end());
	    sort(sorted_B.begin(),sorted_B.end());
	    for(int r = 0; r < N; ++r){
	       if((sorted_A.at(r).first > sorted_B.at(r).first) && X > 0){
	           // issue, after the first check, I will need to be able to check
	           // different indexes in the sorted arrays as I want to look for
	           // the next highest availble. 
	           // solution: delete whenever I use one, this way the highest
	           // is always at the top of the vector.
	       }
	    }
	    
	    
	}
	
	
	return 0;
}
