#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> xvector;
  unordered_map<int, int> umap;
  for (int i = 0; i < n; i++)
  {
    int num;
    cin >> num;
    xvector.push_back(num);
  }
  for (int i = xvector.size() - 1; i >= 0; i--)
  {
    umap[xvector[i]] = umap.count(xvector[i]) ? ++umap[xvector[i]] : 1;
  }
  bool flag = false;
  for (auto pair : umap)
  {
    if (pair.second == 1)
    {
      cout << pair.first << endl;
      flag = true;
      break;
    }
  }
  if (!flag)
  {
    cout << "None" << endl;
  }
  return 0;
}
