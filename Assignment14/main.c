#include "arraydatastore.h"
int main() {
	int stringsCount = 5;
	init(stringsCount);
	insert("1");
	insert("2");
	print();
	deleteStr("1");
	print();
	//destroy();
}
