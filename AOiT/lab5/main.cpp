#include <iostream>

using namespace std;

int main() {
  int n, m, i, j, kol = 0, sum = 0;
  float sred = 0;

  cout << "vvedite razmer massiva n*m" << endl;
  cin >> n >> m;
  int** a = new int* [n];
  for (i = 0; i < n; i++) {
    a[i] = new int[m];
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      printf("%d\t ", a[i][j]);
    }
    printf("\n");
  }
  for (j = 0; j < m; j++) {
    sum += a[3][j];
  }
  for (i = 0; i < n; i++) {
    sred += a[i][2];
    kol += 1;
  }
  cout << "summa 4 stroki=" << sum << endl;
  cout << "srednee 3 stolbika=" << sred / kol;
////////////////////////////////////////////////////////////
  int* ed = new int[m];
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      if (a[i][j] == 0)
        ed[i] = 0;
      if (a[i][j] == 0)
        break;
      else
        ed[i] = 1;
    }
  }
  cout << "massiv 0 i 1:\n";
  for (i = 0; i < n; i++) {
    cout << ed[i] << " ";
  }
  delete[] a;
  delete[] ed;
  return 0;
}