#include <stdlib.h>
#include <stdio.h>
#include "xmemutils.h"

/**
 * A malloc wrapper. Exits if no memory.
 *
 * @1 Ammount of memory to allocate
 *
 * Returns: Pointer to freshly allocated memory
 */
inline void *xmalloc(size_t size) {
	void *ptr;
	ptr = malloc(size);
	if (ptr == NULL) {
		fprintf(stderr, "MALLOC FAILURE!\n");
		exit(127);
	}
	return ptr;
}

/**
 * A realloc wrapper. Exits if no memory.
 *
 * @1 Old pointer
 * @2 Ammount of memory to allocate
 *
 * Returns: Pointer to reallocated memory
 */
inline void *xrealloc(void *inptr, size_t size) {
	void *ptr;
	ptr = realloc(inptr, size);
	if (ptr == NULL) {
		fprintf(stderr, "MALLOC FAILURE!\n");
		exit(127);
	}
	return ptr;
}
