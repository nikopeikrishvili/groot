#include <stdio.h>
#include <string.h>
#include <time.h>

/**
	Most important function in the world
*/

typedef struct {
	char* answer[5];
} HodorAnswers;

void init_answers(HodorAnswers * val) 
{
	val->answer[0] = strdup ("GROOT");
	val->answer[1] = strdup ("groot");
	val->answer[2] = strdup ("GROOT!");
	val->answer[3] = strdup ("groot!");
	val->answer[4] = strdup ("grooootttt!");
}

char* get_answer() 
{
	HodorAnswers val;
	char * ans;
	int r;

	init_answers(&val);

	srand(time(NULL));
	r = rand() % 4;
	ans = strdup(val.answer[r]);

	return ans;
}

char* get_question() 
{
	char answer[512];
	char* ans;

	printf("Write question: ");
	scanf("%s", answer);
	ans = strdup(answer);

	return ans;
}

int main(int argc, char **argv)
{
	char* question;
	char* answer;
	while(1)
	{
		question = get_question();
		answer = get_answer();

		printf("%s\n", answer);
	}
	return 0;	
}
	