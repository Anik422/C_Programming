#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41


int main()
{
	int n;
	scanf("%d", &n);
	 box *boxes = malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])>41) {


			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}
