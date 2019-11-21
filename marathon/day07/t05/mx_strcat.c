int mx_strlen(const char *s);

char *mx_strcat(char *s1, const char *s2)
{
    int temp1;
    int temp2;
    
    temp1 = 0;
    temp2 = 0;

    while (s1[temp1])
        temp1++;

    while (s2[temp2])
    {
        s1[temp1] = s2[temp2];
        temp1++;
        temp2++;
    }
    
    s1[temp1] = '\0';

    return (s1);
}
