#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

int main()
{
	//pair<int, int> p = make_pair(4, 6);
	//cout << p.first << " " << p.second << endl;

	//vector<pair<string, int>> v;
	//v.push_back(make_pair("Peasant", 50));
	//v.push_back(make_pair("Footman", 100));
	//v.push_back(make_pair("Griffon", 120));

	//for (int i = 0; i < v.size(); i++)
	//{
	//	cout << v[i].first << " " << v[i].second << endl;
	//}

	/*map<string, int> m;
	m["Gosho"] = 100;

	cout << "Age of Gosho is " << m["Gosho"] << endl;

	map<string, int> shop;

	shop["Agility potion"] = 100;
	shop["Health potion"] = 150;
	shop["Mana potion"] = 200;

	for (auto it = shop.begin(); it != shop.end(); it++)
	{
		cout << it->first << " " << it->second << endl;
	}

	map<string, int> balance;
	balance["copper"];
	balance["silver"];
	balance["gold"];

	balance["gold"] = 100;

	for (auto it = balance.begin(); it != balance.end(); it++)
	{
		cout << it->first << " " << it->second << endl;
	}*/

	vector<int> v;
	v.push_back(1);
	v.push_back(1);
	v.push_back(2);
	v.push_back(5);
	v.push_back(1);
	v.push_back(7);
	v.push_back(1);

	map<int, int> m;

	for (int i = 0; i < v.size(); i++)
	{
		m[v[i]]++;
	}

	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << it->first << " is repeating " << it->second << " times" << endl;
	}



	system("pause");
} 