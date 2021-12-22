#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

vector<int> uniqueElements(vector<int> &vecIn) {

	if (vecIn.size() == 0) {
		return vecIn;
	}

	vector<int> vecOut;

	vecOut.push_back(1);

	for (int i = 1; i < vecIn.size(); i++) {

		if (vecIn[i] != vecIn[i - 1]) {

			vecOut.push_back(1);
			continue;
		}

		vecOut[vecOut.size() - 1]++;

	}

	return vecOut;

}

int main() {

	vector <int> test = { 1,1,2,3,5,5,5,5 };

	vector <int> sol = uniqueElements(test);

	for (int x : sol) {

		cout << x << endl;
	}

}