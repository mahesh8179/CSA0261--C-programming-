#include <stdio.h>
#include <string.h>
int is_anagram(char a[], char b[]) { 
  if (strlen(a) != strlen(b)) {
    return 0;
  }

  int i = 0;
  int freq_a[26] = {0};
  int freq_b[26] = {0};

  for (i = 0; a[i] && b[i]; i++) {
    freq_a[a[i] - 97]++;
    freq_b[b[i] - 97]++;
  }

  for (i = 0; i < 26; i++) {
    if (freq_a[i] != freq_b[i]) {
      return 0;
    }
  }

  return 1;
}

int main() {
  char a[50], b[50];

  printf("Enter first string : ");
  scanf("%s", a);

  printf("Enter second string : ");
  scanf("%s", b);
  if (is_anagram(a, b) == 1) {
    printf("Two strings are an anagram to each other");
  } else {
    printf("Two strings are not an anagram to each other");
  }

  return 0;
}

