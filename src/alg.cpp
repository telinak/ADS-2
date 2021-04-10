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
  int k = 0, j, middle, left, right, value2;
  for (int i = 0; i < len - 1; ++i) {
    if (arr[i] >= 0) {
      j = 0;
      left = i + 1;
      right = len;
      value2 = value-arr[i];
      while (left < right) {
        middle = left + (right - left) / 2;
        if (arr[middle] == value2) {
          while ((arr[middle-1] == value2)
                 && (middle > i+1)) --middle;
          while (arr[middle] == value2) ++middle, ++n;
          break;
        } else if (arr[middle] > value2) {
          right = middle;
        } else { left = middle + 1;
               }
      }
      k += j;
    }
  }
  return k;
}
