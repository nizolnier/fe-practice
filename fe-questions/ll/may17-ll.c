int isFull(node *stack) {
	node *t = stack;
	for(int i =0; i < 20; i++) {
		if(t == NULL)
			return 0;
		t = t->next;
	}

	return 1;

}