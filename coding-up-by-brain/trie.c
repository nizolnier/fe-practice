#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct trie {
    int isWord;//0/1
    struct trie* next[26];
};


int main(void)
{
    return 0;
}

struct trie* init();
void insert(struct trie* tree, char word[], int k);
int search(struct trie* tree, char word[], int k) ;
void printAll(struct trie* tree, char cur[]) ;
struct trie* del(struct trie* root, char key[], int depth);
int isEmpty(struct trie* root);