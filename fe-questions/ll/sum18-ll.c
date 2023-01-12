typedef struct node {
 int data;
 struct node* next;
} node;
int getValue(node *head) {
	if(head == NULL)
		return 0;
	return head->data + 10*getValue(head->next);

}