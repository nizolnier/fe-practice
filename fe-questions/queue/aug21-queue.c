int enqueue(cQueue* thisQ, int item) {
	if(size < 20) {
		int index = (thisQ->front + thisQ->size)%20;

		thisQ->values[index] = item;

		thisQ->size++;
		return 1;
		
	} else {
		return 0;
	}

}

int dequeue(struct queue * q) {
	if(q == NULL)
		return 0;
	if(q->num_elements == 0)
		return 0;

	int val = q->array[q->front];

	q->front = (q->front + 1)%q->capacity;

	q->num_elements--;

	return val;	

}