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
    if (arr[left] + arr[right] == value)
      k = k + 1;
    if (arr[left] == arr[left + 1])
      right += 1;
    if (arr[right] == arr[right + 1])
      right += 1;
    right -= 1;
  }
  return k;
}
int countPairs3(int *arr, int len, int value) {
  int left = 0, right = len - 1, middle, k = 0;
  for (int i = 0; i < len; ++i) {
    while (left <= right) {
    middle = (left + right) / 2;
    if (arr[middle] + arr[i] == value)
      break;
    if (arr[middle] > value)
      right = middle - 1;
    if (arr[middle] < value)
      left = middle + 1;
  }
  for (int i = middle; arr[i] == value; ++i) {
        k = k + 1;
        if (i == size - 1)
          break;
      }
      for (int j = middle - 1; arr[j] == value; --j) {
        k = k + 1;
        if (j == 0)
          break;
      }
  }
  return k;
}
