#include <stdio.h>

int max(int a, int b) {
  if (a > b)
    return a;
  return b;
}

int knapsack(int W, int wi[], int pi[], int i, int n) {
  if (W == 0 || i == n)
    return 0;
  if (wi[i] > W)
    return knapsack(W, wi, pi, i + 1, n);

  else
    return max(pi[i] + knapsack(W - wi[i], wi, pi, i + 1, n),
               knapsack(W, wi, pi, i + 1, n));
}

int main() {
  int W = 100;
  int wi[] = {10, 20, 30, 14, 55};
  int pi[] = {10, 20, 30, 40, 50};
  int i;
  int n = sizeof(wi) / sizeof(wi[0]);

  int result = knapsack(W, wi, pi, i, n);
  printf("The value of profit is %d\n", result);

  return 0;
}