//어린왕자
#include<stdio.h>
int right(int cx, int cy, int r, int x1, int y1, int x2, int y2) {
	if (r*r < (cx - x1)*(cx - x1) + (cy - y1)*(cy - y1)) {
		if (r*r > (cx - x2)*(cx - x2) + (cy - y2)*(cy - y2))
			return 1;
		else
			return 0;
	}
	else if (r*r > (cx - x1)*(cx - x1) + (cy - y1)*(cy - y1)) {
		if (r*r < (cx - x2)*(cx - x2) + (cy - y2)*(cy - y2))
			return 1;
		else
			return 0;
	}
	else
		return 0;
}
int main() {
	int T, num, i, j, x1, x2, y1, y2;
	scanf(" %d", &T);

	int cx, cy, r;
	for (i = 0; i < T; i++)
	{
		int count = 0;
		scanf(" %d %d %d %d", &x1, &y1, &x2, &y2);
		scanf(" %d", &num);
		for (j = 0; j < num; j++)
		{
			scanf(" %d %d %d", &cx, &cy, &r);
			if ((right(cx, cy, r, x1, y1, x2, y2)))
				count++;
		}
		printf("%d\n", count);
	}
	return 0;
}
