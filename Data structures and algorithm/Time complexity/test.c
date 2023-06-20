#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    scanf("%s", &str);
    int rep, n;
    n = strlen(str);
    rep = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        int c = 1;
        while ((i < n) && (str[i] == str[i + 1]))
        {
            c++;
            i++;
        }
        if (c != 1)
        {
            if (c > rep)
            {
                rep = c;
            }
        }
        else
        {
            continue;
        }
    }

    printf("%d", rep);

    return 0;
}