#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n) {
	size_t s1_len = strlen(s1);
	size_t s2_len = strlen(s2);
	char *A;
	unsigned int i;

	if (s1 == NULL) {
		s1 = "";
		s1_len = 0;
	}

	if (s2 == NULL) {
		s2 = "";
		s2_len = 0;
	}

	if (n >= s2_len) {
		n = s2_len;
	}

	A = (char *)malloc((s1_len + n + 1) * sizeof(char));

	if (A == NULL) {
		return NULL;
    }

	for (i = 0; i < s1_len; i++) {
		A[i] = s1[i];
	}

	for (i = 0; i < n; i++) {
		A[s1_len + i] = s2[i];
	}
	A[s1_len + n] = '\0';

	return A;
}
