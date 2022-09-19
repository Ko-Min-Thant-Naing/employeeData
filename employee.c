#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct employee
{
    char id[256];
    char name[256];
    char temp;
    char password[256];
    char age[256];
    char location[256];

}employee;


struct employee* readFile()
{


    FILE *fptr;

    fptr = fopen("data.txt", "r");

    char line[256];
    struct employee* data = malloc(100 * sizeof(struct employee));
    int index = 0;

    while (fgets(line, sizeof(line), fptr))
    {
        //printf("%s\n",line);

        int i = 0;
        char *array[5];
        char *p = strtok(line, ".");

        while (p != NULL)
        {
            array[i++] = p;
            p = strtok(NULL, ".");
        }

        strcpy(data[index].id,array[0]);
        strcpy(data[index].name,array[1]);
        strcpy(data[index].password,array[2]);
        strcpy(data[index].age,array[3]);
        strcpy(data[index].location,array[4]);

        printf("%s",data[index].id);
        printf("%s\n",data[index].name);

         //printf("%s\n",token);
        index++;
    }

    fclose(fptr);

    return data;
}

void addData()
{

    int id;
    char name[50];
    char temp;
    char password[50];
    int age;
    char location[1000];

    FILE* fptr;

    fptr = fopen("data.txt","a");

    printf("Enter your id: ");
    scanf("%d",&id);

    printf("Enter your name: ");
    scanf("%c",&temp);
    scanf("%[^\n]",name);


    printf("Enter your password: ");
    scanf("%s",&password);

    printf("Enter your age: ");
    scanf("%d",&age);

    printf("Enter your location: ");
    scanf("%s",&location);







    fprintf(fptr, "%d.\t", id);
    fprintf(fptr, "%s.\t",name);
    fprintf(fptr, "%s.\t", password);
    fprintf(fptr, "%d.\t", age);
    fprintf(fptr, "%s.\n", location);

    fclose(fptr);




}

//void findDataById(){
  //  struct employee* data = readFile();
    //TODO scan from user input
 //   int idSearch = 0 ;
  //  int found = 0;
  //  printf("Enter ID you want to search: ");
  //  scanf("%d",&idSearch);

  //  for(int i=0;i<10;i++){
  //      struct employee e = data[i];
   //     int result = strcmp(data[i].id,idSearch);
  //      if(result == 0){
     //      printf("%s\n",e.name);
    //       printf("%s\n",e.age);
    //        printf("%s\n",e.password);
    //        printf("%s\n",e.location);
      //      found = 1;
        //    break;
        //}

    //}
    //if(found == 0){
      //  printf("Data not found!\n");
    //}
   // free(data);
//}

void findDataById(){
  employee e;
    FILE* fptr;
    fptr = fopen("data.txt","r");
    int found;
    int idSearch;
    printf("Enter ID you wanna search: ");
    scanf("%d",&idSearch);

    if(e.id==idSearch){
            found = 1;
    while(fread(&e, sizeof(employee),1,fptr)){

        printf("\n%-5d%-20s",e.id,e.name);

    }
    }

    if(found=0){

        printf("Record not found!");
    }
    fclose(fptr);
}











int main()
{

    int choice;
    //readFile();
   // return 0;
    do
    {
        printf("1. Add employee data\n");
        printf("2. Find employee data\n");
        printf("3. Update employee data\n\n");

        printf("Choose your option(1, 2 or 3): ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            addData();
            break;
        case 2:
            findDataById();
            break;
        case 3:
            updateData();
            break;


        }



        printf("\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");





    }
    while(choice==1 || choice==2 || choice==3);

    return 0;
}


void updateData(){

struct employee* readFile();
return;









}
