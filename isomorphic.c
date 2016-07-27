#include<iostream>
using namespace std;
#define MAX 256
bool Isomorphic(string str1, string str2)
{
 int m = str1.length(), n = str2.length();
 if (m != n)
      return false;
  bool marked[MAX] = {false};
  int map[MAX];
   memset(map, -1, sizeof(map));
   for (int i = 0; i < n; i++)
    {
        if (map[str1[i]] == -1)
        {
            
            if (marked[str2[i]] == true)
                return false;
             marked[str2[i]] = true;
             map[str1[i]] = str2[i];
        }
 else if (map[str1[i]] != str2[i])
            return false;
    }
return true;
}
 int main()
{
   cout << Isomorphic("add", "egg") << endl;
   cout << Isomorphic("sub", "xxx") << endl;
   return 0;
}
