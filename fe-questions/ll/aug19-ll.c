typedef struct node {
 char letter;
 struct node* next;
} node;

int length(node* head);

char* toCString(node * head) {
	int len = length(head);

	char* str = malloc(sizeof(char) * (len+1));

	for(int i = 0; i < len; i++) {
		str[i] = head->letter;

		head = head->next;
	}

	str[len] = '\0';

	return str;

}