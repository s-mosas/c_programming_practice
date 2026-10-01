#include <stdio.h>
struct students {int roll_no;char name[20];float mark;};

int main() {
	struct students s1={11,"s.mosas",100.0};
	printf("Name:%s\nRoll No:%d\nMarks:%f\n",s1.name,s1.roll_no,s1.mark);
	return 0;
}
