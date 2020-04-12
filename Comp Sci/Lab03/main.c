/* CS1037a 2019 */
/* Lab 03 */
/* Hamza Shaikh */
/* September 26, 2019 */

#include <stdio.h>
#include <string.h>
int main () {

char first_name[15] = {'A','N','T','H','O','N','Y','\0'};  // NULL character '\0' is required
char last_name[15] = "ADVERSE";
//char string1 [6] = "hello";
char string1 [6];                               /* string size = 'h'+'e'+'l'+'l'+'o' +"NULL" = 6 */
char string2 [ ] = "world";                                /* string size = 'w'+'o'+'r'+'l'+'d' +"NULL" = 6 */
//char string3[6] = {'h','e','l','l','o','\0'};               /*Declaration as set of characters ,Size 6*/
char string3[6] = {'h','e','l','l','o','!'};

printf("%s\n",first_name);
puts(last_name);
printf("%s : %s : %s\n",string1, string2, string3);

return 0;
}
