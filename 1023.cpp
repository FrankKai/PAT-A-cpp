// 测试点5,6,7:长度为20的数字。
// long long int 最多表示长度为19的数字。

// 11/20 set版

#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
  long long int num;
  cin >> num;
  long long int doubleNum = num * 2;
  string strNum = to_string(num);
  set<char> xset;
  for (char item : strNum)
  {
    xset.insert(item);
  }
  string strDoubleNum = to_string(doubleNum);
  for (char item : strDoubleNum)
  {
    xset.erase(item);
  }
  if (xset.size() == 0 && strNum.size() == strDoubleNum.size())
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  cout << doubleNum << endl;
  return 0;
}

// 11/20 排序版
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string generateString(string str);

int main()
{
  long long int num;
  cin >> num;
  long long int doubleNum = num * 2;
  string strNum = to_string(num);
  string strDoubleNum = to_string(doubleNum);
  string sortStrNum = generateString(strNum);
  string sortStrDoubleNum = generateString(strDoubleNum);
  if (sortStrNum == sortStrDoubleNum)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  cout << strDoubleNum << endl;
  return 0;
}

string generateString(string str)
{
  vector<int> xvector;
  for (char item : str)
  {
    int num = item - '0';
    xvector.push_back(num);
  }
  sort(xvector.begin(), xvector.end());
  string result = "";
  for (int i = 0; i < xvector.size(); i++)
  {
    result += to_string(xvector[i]);
  }
  return result;
}
