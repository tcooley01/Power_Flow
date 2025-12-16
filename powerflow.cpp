#include <iostream>
#include <cmath>
#include <vector>
#include <complex>
#include "../../HPC/eigen/Eigen/Dense"
#include <complex>
using namespace std;

/*
structure notes
read in Y matrix, S in, V in, type vector, tolerance
calculate G, B matrices based on Y
in while loop, calculate jacobian
solve for mag and angle mismatches until tolerance in range
store results in vectors
*/

int main(const vector<vector<complex<float>>> &Y, const vector<complex<float>> &S_in, const vector<complex<float>> &V_in, const vector<int> &Type, const int &Tol) {

  vector<complex<float>> P = S_in;
  vector<int> Pcalc(P.size(), 0);

}
