

#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
// предикаты
class airplane
{
	int  pass;
	int massa;
	string number;
public:
	airplane() { pass = 0; massa = 0; number = "0empty0"; }
	airplane(int x, int y, string z) { pass = x; massa = y; number = z; }
	int get_pass()
	{
		return pass;
	}
	int get_massa()
	{
		return massa;
	}
	string get_number()
	{
		return number;
	}
	void Print()
	{
		cout << "Pass\t=\t" << pass << "\tMassa\t=" << massa << 
			"\tBort_number\t=\t" << number<<endl;
	}

	
};
bool srtairplane(airplane &x, airplane &y)
{
	return x.get_pass() > y.get_pass();
}

int main()
{   // Возможность выбора сортировки по массе и по номеру самолета
	airplane a1(2, 200, "IL2");
	airplane a2(150, 20000, "tu154");
	airplane a3(20, 100, "IL32");
	airplane a4(1500, 2000000, "tu1054");
	airplane a5(350, 30000, "Boing");
	airplane a6(750, 100000, "Airbus");
	cout << "for pass sort pres 1" << endl << "for mass sort pres 2"
		<< endl << "for bnumber sort pres 3" << endl;
	int k = 0;
	cin >> k;
	vector<airplane> a = { a1,a2,a3,a4,a5,a6 };

	vector<int>b = { 4,5,66,7,545,23,121,7676,7 };
	
	
	
	if (k == 1) 
	{
		sort(a.begin(), a.end(), [](airplane& x, airplane& y)
			{
				return x.get_pass() > y.get_pass();
			});
	}
	if (k == 2)
	{
		sort(a.begin(), a.end(), [](airplane& x, airplane& y)
			{
				return x.get_massa() > y.get_massa();
			});
	}
	if (k == 3)
	{
		sort(a.begin(), a.end(), [](airplane& x, airplane& y)
			{
				return x.get_number() < y.get_number();
			});
	}
	for (auto i : a)
		i.Print();
}

