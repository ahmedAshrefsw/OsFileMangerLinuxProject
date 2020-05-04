
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




int main()
{
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








    return 0;
}
