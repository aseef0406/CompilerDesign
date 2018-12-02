#include<stdio.h>
#include<string.h>
char *a[10];
int inc=0;
char *token[5];
void S();
void E();
void T();
void R();
void match(char t[]);
//char lexan();
int main()
{
    int k;
    for(k=0;k<6;k++)
    {
        char input[10];
        a[k]=malloc(10*sizeof(char));
        scanf("%s",input);
        if(!(stricmp(input,"+") && stricmp(input,"+") )
        strcpy(a[k],input);
    }
    for(k=0;k<6;k++)
    {
        printf("%s ",a[k]);
    }
    //strcpy(a[0],token);
    printf("\n%s\n",a[0]);
    S();
  return 0;
}
void S(){
	printf("In S\n");
	E();
	match(";");
}
void E(){
	printf("In E\n");
	T();
	R();
}
void R(){
	printf("In R\n");
	if (!stricmp(a[inc],"+")){
		match("+");
		T();
		R();
	}
	else if(!stricmp(a[inc],"-")){
		match("-");
		T();
		R();
	}
	else{
		printf("In else r\n");
		//exit(0);
	}
}
void T(){
	printf("In T\n");
	if(!stricmp(a[inc],"Id"))
		match("Id");
	if(!stricmp(a[inc],"Num"))
		match("Num");
}

void match(char t[]){
    //printf("\nYes\n : %c",t);
	printf("In match : \n%s\n",t);
	if (!stricmp(t,";")){
		printf("\nSucessfully parsed!!\n");
		exit(0);}
	else if (!stricmp(a[inc],t)){
		printf("%s\n",t);
		inc++;}
	else
		printf("In else block!!!!!!!");
}
/*char lexan(){
	i=i+1;
	return a[i];
}*/
