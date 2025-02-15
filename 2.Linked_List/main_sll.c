#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/* Linked list node struct */
typedef struct Node {
	int data;
	struct Node *next;
}node;


/* Function Declarations */
void disp_recursive(node *ptr);
void disp_node(node *ptr);
void disp_reverse(node *ptr);
int count_nodes(node *ptr);
int count_recursive(node *ptr);
int sum_of_nodes(node *ptr);
int sum_of_nodes_recursive(node *ptr);
int maxin_list(node *ptr);
int maxin_list_r(node *ptr);

node *search_node(node *ptr, int key);
node * search_node_r (node *ptr, int key);

/* Insert begin, Insert last, insert middle */
void add_begin(node **ptr, int data);
void add_middle(node **ptr, int data);

void delete_begin(node **ptr);
int delete_node(node **ptr, int pos);

int isSorted(node *ptr);
void remove_duplicates(node **ptr);

/*
 * Reversing links or revrsing elements
 * */
void reveresing_ll(node **ptr);

int main()
{
	node *head = NULL;

	add_begin(&head, 10);
	add_begin(&head, 20);
	add_begin(&head, 130);
	add_begin(&head, 40);
	add_begin(&head, 60);
	add_begin(&head, 90);

	disp_node(head);
	printf("\n");
	disp_recursive(head);
	printf("\n");
	disp_reverse(head);
	printf("\n");

	printf("Number of nodes:%d\n", count_nodes(head));
	printf("Number of nodes:%d\n", count_recursive(head));

	printf("Length  : %d\n", count_nodes(head));
	printf("Length_r: %d\n", count_recursive(head));

	printf("sum_r:%d\n", sum_of_nodes_recursive(head));
	printf("sum  :%d\n", sum_of_nodes(head));

	printf("Maximum: %d\n", maxin_list(head));
	printf("Maximum: %d\n", maxin_list_r(head));

	printf("Searching node:\n");
	node *found = search_node(head, 60);

	if(found) printf("Found the node, data:%d\n", found->data);

	found = search_node_r(head, 90);
	if(found) printf("Found the node, data:%d\n", found->data);

	add_middle(&head, 50);
	add_middle(&head, 100);
	add_middle(&head, 150);
	//add_middle(&head, 5);
	add_middle(&head, 10);
	add_middle(&head, 20);
	add_middle(&head, 5);


	disp_node(head);
	printf("\n");
#if 0
	delete_begin(&head);
	disp_node(head);
	printf("\n");

	printf("deleted data:%d\n",delete_node(&head,3));
	disp_node(head);
	printf("\n");

	if(isSorted(head)) printf("Sorted\n");
	else printf("Not sorted\n");

	remove_duplicates(&head);
	disp_node(head);
	printf("\n");

#endif
	reveresing_ll(&head);

	disp_node(head);
	printf("\n");
	return 0;
}

/* sliding pointers */
void reveresing_ll(node **ptr)
{
	node *p = *ptr;
	node *q = NULL;
	node *r = NULL;

	while(p!=NULL) {
		r = q;
		q = p;
		p = p->next;
		q->next = r;
	}
	*ptr = q;
}

/*Only remove the dupicates from sorted list*/
void remove_duplicates(node **ptr)
{
	node *first, *last;

	first = *ptr;
	last = (*ptr)->next;

	while(last != NULL)
	{
		if(first->data != last->data)
		{
			first = last;
			last = last->next;
		}
		else
		{
			first->next = last->next;
			free(last);
			last = first->next;
		}
	}
}

int isSorted(node *ptr)
{
	int x = INT_MAX;
	while(ptr!=NULL)
	{
		if(ptr->data < x) return 0;
		x = ptr->data;
		ptr = ptr->next;
	}

	return 1;
}
	
void delete_begin(node **ptr)
{
	node *temp = *ptr;
	*ptr = (*ptr)->next;
	free(temp);
}

int delete_node(node **ptr, int pos)
{
	node *first, *last;
	int x, i;

	first = *ptr;
	last = NULL;

	if(pos < 1 || pos > count_nodes(*ptr)) return -1;
	if(pos == 1 )
	{
		last = first;
		x = first->data;
		first = first->next;
		free(last);
		return x;
	}
	else
	{
		for(i=0; i <pos-1; i++)
		{
			last = first;
			first = first->next;
		}

		last->next = first->next;
		x = first->data;
		free(first);
		return x;
	}
}

void add_begin(node **ptr, int data)
{
	node *temp = (struct Node *) malloc(sizeof(struct Node));
	temp->data = data;

	temp->next = *ptr;
	*ptr = temp;
}

void add_middle(node **ptr, int data)
{
	node *temp = (node *) malloc (sizeof(node));
	temp->data = data;

	if(*ptr == NULL || temp->data < (*ptr)->data )
	{
		temp->next = (*ptr);
		*ptr = temp;
	}
	else
	{
		node *last = *ptr;
		while(last->next != NULL && last->next->data < temp->data )
			last = last->next;

		temp->next = last->next;
		last->next = temp;
	}
}

node * search_node_r (node *ptr, int key)
{
	if(ptr == NULL) return NULL;

	if(ptr->data == key) return ptr;
	
	return search_node_r (ptr->next, key);
}

node *search_node(node *ptr, int key)
{
	while(ptr != NULL)
	{
		if(ptr->data == key) return ptr;
		ptr = ptr->next;
	}
	return NULL;
}

int maxin_list_r(node *ptr)
{
	int max = 0;
	if(ptr == NULL) return INT_MIN;
	max = maxin_list_r(ptr->next);
	if(max > ptr->data) return max;
	else return ptr->data;
}

int maxin_list(node *ptr)
{
	int max = INT_MIN;
	while(ptr)
	{
		if(ptr->data > max) max = ptr->data;
		ptr = ptr->next;
	}
	return max;
}

int sum_of_nodes_recursive(node *ptr)
{
	if(ptr == NULL) return 0;
	else return ptr->data + sum_of_nodes_recursive(ptr->next);	
}

int sum_of_nodes(node *ptr)
{
	int sum = 0;
	while(ptr != NULL)
	{
		sum = sum + ptr->data;
		ptr = ptr->next;
	}
	return sum;
}

int count_nodes(node *ptr)
{
	int count = 0;
	while(ptr != NULL)
	{
		count++;
		ptr=ptr->next;
	}

	return count;
}

int count_recursive(node *ptr)
{
	if (ptr == NULL) return 0;
	else return 1+count_recursive(ptr->next);
}


void disp_node(node *ptr)
{
	while(ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->next;
	}
}

void disp_recursive(node *ptr)
{
	if(ptr != NULL)
	{
		printf("%d ", ptr->data);
		disp_recursive(ptr->next);
	}
}

void disp_reverse(node *ptr)
{
	if(ptr != NULL)
	{
		disp_reverse(ptr->next);
		printf("%d ", ptr->data);
	}
}
