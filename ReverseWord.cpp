#include<bits/stdc++.h>
using namespace std;

void ReverseWord(char *c)
{ char *start = c;
char *end = c;

/*reversal of individual wordes Eg: if CAT.DOG then this changes it to TAC.GOD*/
while( *end )
{
	end++;
	if (*end == '\0')
	{
	reverse(start, end);
	}
	else if(*end == '.')
	{
	reverse(start, end);
	start = end+1;
	}
} /* End while */

/*This reverses entire string i.e changes TAC.GOD to DOG.CAT */
reverse(c, end);
}


/* Driver function*/
int main()
{
char s[] = "I.love.programming.very.much";

ReverseWord(s);
cout<< s;
return 0;
}
