#include <iostream>
#include <vector>
#include <utility> 
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
	    
	    for(int l = 0; l < N; ++l){
	        cout << A.at(l).first << ", " << A.at(l).second << endl;
	    }
	    
	    
	}
	
	
	return 0;
}
