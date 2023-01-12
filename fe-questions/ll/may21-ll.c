struct node* make_circle(struct node* head) {
	if(head == NULL)
		return NULL;
		
	struct node *t = head;

	while(t->next != NULL)
		t = t->next;
	
	t->next = head;

	return head;

}