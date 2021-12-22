#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int levelUpGame(int startLevel, int N) {

	srand(time(NULL));

	for (int i = 0; i < N; i++) {

		double flip = double(rand()) / double(RAND_MAX);

		double prob = 0.5 / startLevel;

		if (flip > prob) {
			if (startLevel == 1) {

				continue;
			}
			else {

				startLevel--;
			}
		}
		else {
			if (startLevel == 10) {

				continue;
			}
			else {

				startLevel++;

			}
		}

	}

	return startLevel;

}


int main() {

	int answer = levelUpGame(1, 201);

	cout << answer;


	return 0;
}