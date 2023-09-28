// 2 1 2.4 0 3.2
// 2 2 1.5 1 0.5
// 2.4 x + 3.2 + 1.5 x^2 + 0.5 x = 3 x^2 + 2.9x + 3.2

// 3 1 2.4 0 3.2 3 0.5
// 3 2 1.5 1 0.5 3 0.5

#include <iostream>
#include <map>

using namespace std;

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
      if (xmap[e] == 0)
      {
        xmap.erase(e);
      }
    }
  }
  cout << xmap.size();
  // map天然升序排列，从尾部开始遍历即可得到降序
  map<int, double>::iterator it = xmap.end();
  while (it != xmap.begin())
  {
    it--;                                      // xmap.end()的值为xmap的尾部边界地址，访问最后一项时，需要向前移动一位
    printf(" %d %.1f", it->first, it->second); // printf用于输出某某精度的小数更加方便
  }
  return 0;
}
