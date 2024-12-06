#include <stdio.h>
#include <string.h>

int main() 
{
    int arryid[] = {1, 2, 3, 4, 5, 6}; // Book IDs
    char arrylib[][200] = {"python", "c", "c++", "pointer", "meta", "ai"}; // Book names
    char categories[][200] = {"programming", "programming", "programming", "concept", "technology", "artificial intelligence"}; // Categories
    int l1 = sizeof(arryid) / sizeof(arryid[0]);
    int l2 = sizeof(arrylib) / sizeof(arrylib[0]);
    char act;
    while(1==1)//always true
    {

    printf("What do you want (Add(a), Search(s), Remove(r),display all books(d)): ");
    scanf(" %c", &act);// Added space before %c to consume newline
    if(act=='d')
    {
        for(int i=0;i<l1;i++)
        {
            printf("%d.\nBook:%s\n",i+1,arrylib[i]);
            printf("Book ID:%d\n Categories:%s\n\n\n",arryid[i],categories[i]);
        }
    }
    if (act == 'a')
	 {
        int an;
        printf("How many books are you going to add: ");
        scanf("%d", &an);

        for (int i = 0; i < an; i++)
		 {
            printf("Enter the Book Name: ");
            scanf("%s", arrylib[l2]);
            printf("Set Book ID: ");
            scanf("%d", &arryid[l1]);
            printf("Enter the Category: ");
            scanf("%s", categories[l2]);
            l1++;
            l2++;
        }
    }

    if (act == 's')
	 {
        char c;
        char book[34];
        int id;
        printf("Do you know the Book Name or Book ID (Book name(b), Book ID(i)): ");
        scanf(" %c", &c); // Added space before %c to consume newline

        if (c == 'b') {
            printf("Enter the book name: ");
            scanf("%s", book);

            for (int i = 0; i < l1; i++)
			 {
                if (strcmp(book, arrylib[i]) == 0) //true
				{
                    printf("Book Name: %s\n", arrylib[i]);
                    printf("Book ID: %d\n", arryid[i]);
                    printf("Category: %s\n", categories[i]);
                    break;
                }
            }
        } else if (c == 'i')
		 {
            printf("Enter the Book ID: ");
            scanf("%d", &id);

            for (int i = 0; i < l1; i++)
			 {
                if (id == arryid[i]) {
                    printf("Book Name: %s\n", arrylib[i]);
                    printf("Book ID: %d\n", arryid[i]);
                    printf("Category: %s\n", categories[i]);
                    break;
                }
            }
        }
    }

    if (act == 'r')
	 {
        int id;
        printf("Enter the Book ID to remove: ");
        scanf("%d", &id);

        for (int i = 0; i < l1; i++)
		 {
            if (id == arryid[i])
			 {
                printf("Removing Book ID: %d, Name: %s, Category: %s\n", arryid[i], arrylib[i], categories[i]);
                for (int j = i; j < l1 - 1; j++) 
				{
                    arryid[j] = arryid[j + 1];
                    strcpy(arrylib[j], arrylib[j + 1]);
                    strcpy(categories[j], categories[j + 1]);
                }
                l1--; // Reduce the size of the list
                l2--;
                break;
            }
        }

    }
}

return 0;
}
