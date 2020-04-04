#include <stdio.h>
#include <stdlib.h>
#include <string.h>

inline char down_case(char c){
	return (c>='A' && c<='Z')?c+'a'-'A':c;
}

char s[200];

int main(){
	char perm[256];
	char c;
	int i, j, t;

	for (i=0;i<256;i++){
		perm[i] = i;
	}

	perm['_'] = ' ';
	scanf("%d %s\n", &t, perm + 'a');
	for (c='A';c<='Z';c++){
		perm[c] = perm[c+'a'-'A'] + 'A' - 'a';
	}


	for (;t;t--){
		scanf("%s\n", s);
		for (i=0;i<strlen(s);i++){
			printf("%c", perm[s[i]]);
		}
		printf("\n");
	}

	return 0;
}
