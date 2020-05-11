
#include <stdio.h>
#include<string.h>

// pre: path is defined and declared weather with empty or real path
int getDirFileList(char path[100]){
    char command[100]="ls ";

    strcat(command,path);

    system(command);
    return 1;
}

int makeDir(char dirName[50]){
    char command[100]="mkdir ";

    strcat(command,dirName);

    system(command);

return 1;
}

int deleteDir(char dirName[50]){
    char command[100]="rm -d ";

    strcat(command,dirName);

    system(command);

return 1;
}

int makeFile(char fileName[50]){
    char command[100]="touch ";

    strcat(command,fileName);

    system(command);

return 1;
}

int deleteFile(char fileName[50]){
    char command[100]="rm ";

    strcat(command,fileName);

    system(command);

return 1;
}

int renameDirFile(char oldDirFileName[50],char newDirFileName[50]){
    char command[100]="mv ";

    strcat(command,oldDirFileName);
    strcat(command," ");
    strcat(command,newDirFileName);

    system(command);

return 1;
}

void link (char targetFile[100],char linkFile[100] ){

	char command [100]="ln -s ";

	strcat(command,targetFile);
	strcat(command, " ");
	strcat(command,linkFile);

	system(command);
}

void permission (char accessClass[1],char permissionOperator[1],char accessType[1],char fileDirectory[100]){

	char command [10]="chmod ";

	strcat(command,accessClass);
	strcat(command," ");
	strcat(command,permissionOperator);
	strcat(command," ");
	strcat(command,accessType);
	strcat(command," ");
	strcat(command,fileDirectory);

	system (command);
}



int main()
{



    char path[100]; int flag =1; int op;int temp;char dirName[50];char fileName[50];char oldName[50];
    char newName[50];char targetFile[100];
    char linkFile[100];char acessClass[1] ,permissionOperator[1],accessType[1],fileDirectory[100];

    do{
        printf("your current directory is : \n");
        system("pwd");
        printf("\n***************************\n");
        printf(" your can use ~ insted of typing the whole path '~ refers to user'");
        printf("*****************************\n");
        printf("****** Program Guide ********\n");
        printf("if you want List of the current/ specifc dirctory press 1\n");
        printf("if you want to create directory in the current/ specifc dirctory press 2\n");
        printf("if you want to create file the current/ specifc dirctory press 3\n");
        printf("if you want to delete dir the current/ specifc dirctory press 4\n");
        printf("if you want to delete file the current/ specifc dirctory press 5\n");


        scanf("%d",&op);
        switch(op){
            case 1:// tested by ahmed
                printf("If you want spcecific path press 0 \n");
                scanf("%d",&temp);

                if(temp==0){
                    printf("\n enter the path : \n");
                    scanf("%s",path);

                    getDirFileList(path);
                }else{
                    printf("\n this is the list of your current dir \n");
                    getDirFileList("");
                }
                break;
            case 2: //tested by ahmed
                printf("you can enter the full path to create dir in specifc place\n");
                printf("*********");
                printf("enter dir name to create it in current directory\n");
                scanf("%s",dirName);

                makeDir(dirName);
                printf("\n sucessfull \n\n");

                printf("this of current dir :\n");
                getDirFileList("");
                break;
            case 3:
                printf("you can enter the full path to create file in specifc place\n");
                printf("***********************");
                printf("enter file name to create it in current directory\n");


                scanf("%s",fileName);

                makeFile(fileName);
                printf("\n sucessfull \n\n");

                printf("this of current dir :\n");
                getDirFileList("");
                break;
            case 4:
                printf("you can enter the full path to delete dir in specifc place\n");
                printf("***********************");
                printf("enter dir name to delete it in current directory\n");
                scanf("%s",dirName);
                deleteDir(dirName);
                break;
            case 5:
                printf("you can enter the full path to delete file in specifc place\n");
                printf("***********************");
                printf("enter file name to delete it in current directory\n");
                scanf("%s",fileName);
                deleteFile(fileName);
                break;
            case 7:
                printf("you can rename any file by enter the full path in old and new names");
                printf("***********************");
                printf("enter the old file/dir name");
                scanf("%s",&oldName);

                printf("enter the new file/dir name");
                scanf("%s",&newName);
                renameDirFile(oldName,newName);
                break;
            case 8:
                printf("please enter the directory of the target file \n");
                gets(targetFile);

                printf("please enter the directory with the name of the link file\n");
                gets(linkFile);

                link(targetFile,linkFile);
                break;
            case 9:
                    printf("please enter your access class ");
                    gets(accessClass);

                    printf("please enter your permission operator ");
                    gets(permissionOperator);

                    printf("please enter your access type ");
                    gets(accessType);

                    printf("please enter the file's directory ");
                    gets(fileDirectory);

                    permission(acessClass,permissionOperator,accessType,fileDirectory);
        }


        printf("\n enter 0 to stop the program or 1 to do another one \n");
        scanf("%d",&flag);

    }while(flag!= 0);






// the following code is from working phase .
    // user test for file lists
/** char path[100];
    int i=1;
    printf("If you want spcecific path press 0 ");
    scanf("%d",&i);
    if(i==0){
        printf("enter the path : \n");
        scanf("%s",path);
        getDirFileList(path);
    }else{
        getDirFileList("");
    }   **/

    //user test for making new dir
/** char dirName[50];
    printf("enter dir name to create it in current directory");
    scanf("%s",dirName);
    makeDir(dirName);   **/

    //user test for deleting dir
/** char dirName[50];
    printf("enter dir name to create it in current directory");
    scanf("%s",dirName);
    deleteDir(dirName); **/

    //user test for making new file
/** char fileName[50];
    printf("enter dir name to create it in current directory");
    scanf("%s",fileName);
    makeDir(fileName); **/

    //user test for deleting FILE
/** char fileName[50];
    printf("enter dir name to create it in current directory");
    scanf("%s",fileName);
    deleteFile(fileName);   **/

    //user test for renaming FILE
/** char oldName[50];
    char newName[50];
    printf("enter dir name to create it in current directory 1 \n");
    scanf("%s",oldName);
    printf("enter dir name to create it in current directory 2 \n");
    scanf("%s",newName);

    renameDirFile(oldName,newName); **/


/** char targetFile[100];
    char linkFile[100];

    printf("please enter the directory of the target file ");
	gets(targetFile);

	printf("please enter the directory with the name of the link file ");
	gets(linkFile);

	link(targetFile,linkFile);  **/

/** char acessClass[1] ,permissionOperator[1],accessType[1],fileDirectory[100];
    printf("please enter your access class ");
	gets(accessClass);

	printf("please enter your permission operator ");
	gets(permissionOperator);

	printf("please enter your access type ");
	gets(accessType);

	printf("please enter the file's directory ");
	gets(fileDirectory);

    permission(acessClass,permissionOperator,accessType,fileDirectory); **/




    return 0;
}
