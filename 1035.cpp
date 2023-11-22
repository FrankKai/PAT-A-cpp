#include <iostream>
#include <map>
#include <vector>

using namespace std;

struct CStruct
{
  string id;
  string password;
};

int main()
{
  int n;
  cin >> n;
  map<char, char> replaceMap = {
      {'1', '@'},
      {'0', '%'},
      {'l', 'L'},
      {'O', 'o'},
  };
  vector<CStruct> xvector;
  for (int i = 0; i < n; i++)
  {
    string id, str;
    cin >> id >> str;
    string result = "";
    bool flag = false;
    for (int j = 0; j < str.size(); j++)
    {
      if (replaceMap.count(str[j]))
      {
        result += replaceMap[str[j]];
        flag = true;
      }
      else
      {
        result += str[j];
      }
    }
    if (flag)
    {
      xvector.push_back({id, result});
    }
  }
  if (xvector.size() == 0)
  {
    string be = n > 1 ? " are " : " is ";
    string tip = n > 1 ? " accounts" : " account";
    cout << "There" << be << n << tip << " and no account is modified" << endl;
  }
  else
  {
    cout << xvector.size() << endl;
    for (auto item : xvector)
    {
      cout << item.id << " " << item.password << endl;
    }
  }

  return 0;
}
