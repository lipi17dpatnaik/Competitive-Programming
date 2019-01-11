#include<bits/stdc++.h>
using namespace std;

void ReverseWord(char *c)
{ char *start = c;
char *end = c;

/*reversal of individual wordes Eg: if CAT.DOG then this changes it to TAC.GOD*/
while( *temp )
{
	temp++;
	if (*temp == '\0')
	{
	reverse(start, temp);
	}
	else if(*temp == '.')
	{
	reverse(start, temp);
	start = temp+1;
	}
} /* End while */

/*This reverses entire string i.e changes TAC.GOD to DOG.CAT */
reverse(c, temp);
}


/* Driver function*/
int main()
{
char s[] = "I love programming very much";

ReverseWord(s);
return 0;
}
