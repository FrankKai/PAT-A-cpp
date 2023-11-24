#include <iostream>
#include <map>

using namespace std;

int main()
{
  string s1, s2;
  getline(cin, s1);
  getline(cin, s2);
  map<char, bool> s2map;
  for (char item : s2)
  {
    s2map[item] = true;
  }
  string result = "";
  for (char item : s1)
  {
    if (!s2map.count(item))
    {
      result += string(1, item);
    }
  }
  cout << result << endl;
  return 0;
}
