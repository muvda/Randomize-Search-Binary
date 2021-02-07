#include <iostream>
#include <random>
using namespace std;

int main()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dis(1, 100);
	int Secret = dis(gen);
	cout << Secret << endl;
	while (true)
	{
		random_device rd;
		mt19937 gen(rd());
		int Guess = dis(gen);
			if ( Secret < Guess )
				random_device rd;
				mt19937 gen(rd());
				uniform_int_distribution<int> dist(1, Guess);
				int Guess = dist(gen); 
			if ( Secret < Guess )
				random_device rd;
				mt19937 gen(rd());
				uniform_int_distribution<int> distr(Guess, 100);
				int Guess = distr(gen);
			if ( Secret == Guess )
				break;
	}
	system("Pause");
	return 0;
}
