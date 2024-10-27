#include <stdio.h>

typedef struct {
   unsigned int id; 
   char name [22];
   char info [255]; 

} myrecord;

int main(int argc, char const *argv[])
{
    myrecord links;

    printf("Input ID > ");
    scanf("%d",&links.id);

    printf("Input name > ");
    scanf("%s",links.name);

    printf("Input info > ");
    scanf("%s",links.info);

    printf("You data links: id - %d url - %s info - %s ",links.id,links.name,links.info);
    printf("Size structure = %d byte",sizeof(links));
    return 0;
}
