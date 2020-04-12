#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_strchr(char * string_ptr, char find)
{
    while (*string_ptr != find)
    {
        if (*string_ptr == '\0')
            return (NULL);
            ++string_ptr;
    }
    return (string_ptr);
}

int main()
{
    char content[80];
    char *first_ptr;
    char *last_ptr;
    fgets(content,sizeof(content), stdin);
    content[strlen(content)-1] = '\0';
    last_ptr = content;
    first_ptr = my_strchr(content, '/');

    if(first_ptr == NULL)
    {
        fprintf(stderr, "Error: Unable to find slash in %s\n", content);
        exit (8);
    }
    *first_ptr = '\0';

    ++first_ptr;
    printf("First:%s Last:%s\n", first_ptr, last_ptr);
    return 0;
}
