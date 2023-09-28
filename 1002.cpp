// 2 1 2.4 0 3.2
// 2 2 1.5 1 0.5
// 2.4 x + 3.2 + 1.5 x^2 + 0.5 x = 3 x^2 + 2.9x + 3.2

// 3 1 2.4 0 3.2 3 0.5
// 3 2 1.5 1 0.5 3 0.5

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Item
{
  int key;
  double value;
};

bool compare(Item a, Item b)
{
  return a.key > b.key;
}

int main()
{
  map<int, double> xmap;
  for (int i = 0; i < 2; i++)
  {
    int k;
    cin >> k;
    for (int j = 0; j < k; j++)
    {
      int e;
      double c;
      cin >> e >> c;
      double val = xmap[e] ? xmap[e] : 0;
      xmap[e] = val + c;
    }
  }
  vector<Item> vec;
  for (auto item : xmap)
  {
    if (item.second != 0)
    {
      Item cur = {item.first, item.second};
      vec.push_back(cur);
    }
  }
  sort(vec.begin(), vec.end(), compare);
  cout << vec.size();
  // cout.setf(ios::fixed);
  // for (int n = 0; n <= vec.size() - 1; n++)
  // {
  //   if (n == vec.size() - 1)
  //   {
  //     cout << vec[n].key << " " << fixed << setprecision(1) << vec[n].value << endl;
  //   }
  //   else
  //   {
  //     cout << vec[n].key << " " << fixed << setprecision(1) << vec[n].value << " ";
  //   }
  // }
  // cout.unsetf(ios::fixed);
  int len = vec.size() - 1;
  for (int n = 0; n <= len ; n++)
  {
    printf(" %d %.1f", vec[n].key, vec[n].value); // printf用于输出某某精度的小数更加方便
  }
  return 0;
}
