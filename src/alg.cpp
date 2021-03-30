// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  int k = 0;
  for (int i = 0; i < len; ++i) {
    for (int j = i + 1; j < len; ++j) {
      if (arr[i] + arr[j] == value)
        k = k + 1;
    }
  }
  return k;
}
int countPairs2(int *arr, int len, int value) {
  int right = len - 1, k = 0;
  for (int i = len - 1; i > -1; --i) {
    if (arr[i] > value)
      right -= 1;
    else
      break;
  }
  for (int left = 0; left < right; ++left) {
    if (arr[left] + arr[right] == value) {
      k = k + 1;
      right -= 1;
    }
    if (arr[left] == arr[left+1]) {
      ++k;
      ++left;
    }
    if (arr[right] == arr[right + 1]) {
      ++k;
      ++right;
    }
    --right;
  }
  return k;
}
int countPairs3(int *arr, int len, int value) {
  int right = len - 1, k = 0;
  for (int i = len - 1; i > -1; --i) {
    if (arr[i] > value)
      right -= 1;
    else
      break;
  }
  int l = 0, r = right;
  for (int i = 0; i < right + 1; ++i) {
    while (r > l) {
      int m = (l + r) / 2;
      if (arr[m] < (value - arr[i]))
        l = m + 1;
      else {
        if (arr[m] > (value - arr[i]))
          r = m - 1;
      } else {
        k = k + 1;
      }
    }
    return k;
  }
