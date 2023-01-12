typedef struct node {
 int value;
 struct node* next;
} node;

int aboveThreshold(node* front, int limit) {
	if(front == NULL)
		return 0;

	int count = 0;

	if(front->data > limit)
		count++;

	return count + aboveThreshold(front->next, limit);

}