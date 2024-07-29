#include "Man.h"
#include "Woman.h"
int main()
{


	Human *pHuman[3] = {new Man("홍길동", 23), new Woman("강아지", 38), new Man("토끼", 38)};
	for(int i = 0; i<3; i++) {
		pHuman[i]->show();
	}

	for(int i = 0; i<3; i++) {
		delete pHuman[i];
	}
	return 0;
}
