#include "csapp.h"

#define MAX_CACHE_SIZE 1049000
#define MAX_OBJECT_SIZE 102400

/* linked list node */
struct node {
	char uri[MAXLINE];
    char content[MAX_CACHE_SIZE];
	int content_size;
	int time;
	// Flag for if a node has been cached
	int cached;
};

int cache_find(char *uri);
int cache_add(char *data, int size, char *uri);
void cache_init();
void cache_destroy();

int total_size;
int global_time;

struct node *(list[5]);

pthread_mutex_t mutex;