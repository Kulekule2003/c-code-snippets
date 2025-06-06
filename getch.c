#include <ctype.h>
#include <stdio.h>

int getch(void) ;
void ungetch(int);

int getint(int *pn)
{
    int c, sign;

    while (isspace(c = getch()))
        ;
    if (!isdigit(c) && c != EOF && c != '+' && c != '-'){
        ungetch(c);
        return 0;
    }

    sign = (c == '-') ? -1 : 1;
    if (c == '+' || c == '-')
        c = getch();
    for (*pn = 0; isdigit(c); c = getch())
        *pn = 10 * *pn + (c - '0');
    *pn *= sign;
    if (c != EOF)
        ungetch(c);
    return c;
}

int main() {
    int n;
    int status = getint(&n);
    if (status > 0 || status == EOF) {
        printf("%d",n);
    } else {
        printf("\n input was not an integer");
    }
    return 0;
}