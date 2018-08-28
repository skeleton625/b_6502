#include <cstdio>

int r, w, l,i;
int main() {
	while (scanf_s("%d",&r)&&r&&scanf_s("%d",&w)&&scanf_s("%d",&l)) {
		i++;
		if ((4*r*r) >= (w * w + l * l)) printf("Pizza %d fits on the table.\n",i);
		else printf("Pizza %d does not fit on the table.\n", i);
	}
	return 0;
}