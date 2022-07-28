#include <iostream>
using namespace std;
  
int main()
{

  int n, m, i, j, k;
  n = 3; 
  m = 3;
  int alloc[5][3] = { { 0, 1, 0 }, 
                     { 2, 1, 0 }, 
                     { 1, 1, 1 } };
  
  int req[5][3] = { { 2, 1, 2 }, 
                   { 4, 0, 0 },
                   { 3, 1, 1 } }; 
  
  int avail[3] = { 3, 1, 2 };
  
  int f[n], ans[n], ind = 0;
  for (k = 0; k < n; k++) {
    f[k] = 0;
  }
  int y = 0;
  for (k = 0; k < 5; k++) {
    for (i = 0; i < n; i++) {
      if (f[i] == 0) {
  
        int flag = 0;
        for (j = 0; j < m; j++) {
          if (req[i][j] > avail[j]){
            flag = 1;
            break;
          }
        }
  
        if (flag == 0) {
          ans[ind++] = i;
          for (y = 0; y < m; y++)
            avail[y] += alloc[i][y];
          f[i] = 1;
        }
      }
    }
  }
  
  cout << "Following is the SAFE Sequence" << endl;
  for (i = 0; i < n - 1; i++)
    cout << " P" << ans[i] << " ->";
  cout << " P" << ans[n - 1] <<endl;
  
    return (0);
}
