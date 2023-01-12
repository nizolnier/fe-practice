typedef struct dllnode {
 int value;
 struct dllnode* prev;
 struct dllnode* next;
} dllnode;

dllnode* moveFrontToBack(dllnode* front) {
	if(front == NULL)
		return NULL;
	
	if(front->next == NULL)
		return front;

	dllnode* t = front;

	while(t->next != NULL)
		t = t->next;
	
	t->next = front;
	front->prev = t;

	front->next->prev = NULL;

	return front->next;

}