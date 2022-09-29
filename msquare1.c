#include <stdio.h>
int main()
{
  int a, sum = 0, di1 = 0, di2 = 0, t1 = 0, t2 = 0, count = 0;
  scanf("%d", &a);
  int x[a][a];
  int r[a], c[a];
  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < a; j++)
    {
      scanf("%d", &x[i][j]);
    }
  }
  for (int i = 0; i < a; i++)
  {
    sum = 0;
    for (int j = 0; j < a; j++)
    {
      {
        sum = sum + x[i][j];
      }
    }
    r[i] = sum;
  }
  for (int i = 0; i < a; i++)
  {
    sum = 0;
    for (int j = 0; j < a; j++)
    {
      {
        sum = sum + x[j][i];
      }
    }
    c[i] = sum;
  }
  for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < a; j++)
    {
      if (i == j)
      {
        t1 = t1 + x[i][j];
      }
      if ((i + j) == a - 1)
      {
        t2 = t2 + x[i][j];
      }
    }
  }
  if (t1 == t2)
  {
    for (int i = 0; i < a; i < i++)
    {
      if (r[i] != t1)
      {
        count++;
      }
      if (c[i] != t1)
      {
        count++;
      }
    }
  }
  else
  {
    count++;
  }
  if (count == 0)
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }

  return 0;
}