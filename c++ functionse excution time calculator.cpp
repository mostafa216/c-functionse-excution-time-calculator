#include <bits/stdc++.h>
#include <deque>
#include <stack>
#include<map>
#include <chrono>

using namespace std;

#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll  long long int



int main()
{
	IOS
		using std::chrono::high_resolution_clock;
	using std::chrono::duration_cast;
	using std::chrono::duration;
	using std::chrono::milliseconds;

	
		deque<int> d;
	auto t1 = high_resolution_clock::now();

	//function you want mesuar its excution time
	d.emplace_back(6);
	/////////////////////////


	auto t2 = high_resolution_clock::now();

	auto ms_int = duration_cast<milliseconds>(t2 - t1);
	duration<double, std::milli> ms_double = t2 - t1;

	cout << ms_int.count() << "ms\n";
	cout << ms_double.count() << "ms\n";

}
