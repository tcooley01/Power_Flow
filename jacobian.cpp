#include <cmath>
#include <vector>
using namespace std;

vector<vector<float>> calculate_jacobian(int N, vector<vector<float>> G, vector<vector<float>> B, vector<float> D, vector<float>){
	vector<vector<float>> jacobian;
	
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			if (i == j){
				//exclude kth entry	
				vector<int> include;
					for (int k = 0; k < N; k++){
						if (k != i){
							include.push_back(k);
						}
					} 
				
				 
			}else{

			}
		}
	}



}


