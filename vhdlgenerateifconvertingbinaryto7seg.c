#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define _OPEN_SYS_ITOA_EXT
#define MAX 2000

char s1[50],s2[50],s3[50]; 



char queue[MAX][MAX], temp[MAX];
int front = -1, rear = -1;
void enqueue(char *ptr)
{
    if(rear == MAX-1)
    {
        return;
    }
    if(front == -1 && rear == -1)
        front = rear = 0;
    else
        rear = rear + 1;
    strcpy(queue[rear],ptr);
}
char* dequeue()
{
    if(front == -1)
        printf("\nEmpty Queue");
    else
    {
        strcpy(temp,queue[front]);
        if(front == rear)
            front = rear = -1;
        else
            front = front + 1;
        return temp;
    }
}
long long binary_numbers_using_queue()
{
    long long aux;
	char temp2[MAX];
    strcpy(temp,dequeue());
    //printf("%s\n",temp);
    aux=atoll(temp);
	strcpy(temp2,temp);
    strcat(temp,"0");
    enqueue(temp);
    strcat(temp2,"1");
    enqueue(temp2);
	//aux=atoll(temp);	
	return aux;
}






int converter(long long n){
    int decimal = 0, i = 0, aux;
	while (n != 0) {
		aux = n % 10;
		n /= 10;
		decimal += aux * pow(2, i);
	 	++i;
	}
	return decimal;
}
void numtoch(int x){
int aux1,aux2,aux3;
aux1=x/100;
aux2=(x%100)/10;
aux3=x%10;
if (aux1==0){
	strcpy(s1,"res");
}

if (aux1==1){
	strcpy(s1,"one");
}

if (aux1==2){
	strcpy(s1,"two");
}

if (aux1==3){
	strcpy(s1,"thre");
}

if (aux1==4){
	strcpy(s1,"four");
}

if (aux1==5){
	strcpy(s1,"five");
}

if (aux1==6){
	strcpy(s1,"six");
}

if (aux1==7){
	strcpy(s1,"seven");
}

if (aux1==8){
	strcpy(s1,"eight");
}

if (aux1==9){
	strcpy(s1,"nine");
}




if (aux2==0&&aux1==0){
	strcpy(s2,"res");
}else{
	if(aux2==0){
		strcpy(s2,"zero");
	}
}

if (aux2==1){
	strcpy(s2,"one");
}

if (aux2==2){
	strcpy(s2,"two");
}

if (aux2==3){
	strcpy(s2,"thre");
}

if (aux2==4){
	strcpy(s2,"four");
}

if (aux2==5){
	strcpy(s2,"five");
}

if (aux2==6){
	strcpy(s2,"six");
}

if (aux2==7){
	strcpy(s2,"seven");
}

if (aux2==8){
	strcpy(s2,"eight");
}

if (aux2==9){
	strcpy(s2,"nine");
}





if (aux3==0){
	strcpy(s3,"zero");
}

if (aux3==1){
	strcpy(s3,"one");
}

if (aux3==2){
	strcpy(s3,"two");
}

if (aux3==3){
	strcpy(s3,"thre");
}

if (aux3==4){
	strcpy(s3,"four");
}

if (aux3==5){
	strcpy(s3,"five");
}

if (aux3==6){
	strcpy(s3,"six");
}

if (aux3==7){
	strcpy(s3,"seven");
}

if (aux3==8){
	strcpy(s3,"eight");
}

if (aux3==9){
	strcpy(s3,"nine");
}

}





int main () {
FILE *f;
int x;
char name[50];
long long numerobin;
x=0;
char thegoodbits[125];
//int DECIMAL=10;
char epacios;
 char temp[2] = "1";
 enqueue(temp);




printf("\n\nNom file: ");
scanf("%s",name);
f = fopen (name, "w");
if (f == NULL) {
	printf("Failed:opening el file equal to null ");			
}
x=1;
while(x<999) {
numtoch(x);
numerobin=binary_numbers_using_queue();
/*thegoodbits=lltoa(numerobin,thegoodbits,DECIMAL);
while (strlen(thegoodbits)!=10){
	strcat("0",thegoodbits);
}*/
//fprintf(f,"\nelsif (std_match(number,%c%lld%c)) then\n",'"',numerobin,'"');

	if (numerobin<10){			
		fprintf(f,"\nelsif (std_match(number,%c%s%lld%c)) then\n",'"',"000000000",numerobin,'"');
	}else if (numerobin<100) {
		
		fprintf(f,"\nelsif (std_match(number,%c%s%lld%c)) then\n",'"',"00000000",numerobin,'"');
	}else if (numerobin<1000) {
		
		fprintf(f,"\nelsif (std_match(number,%c%s%lld%c)) then\n",'"',"0000000",numerobin,'"');
	}else if (numerobin<10000) {
		
		fprintf(f,"\nelsif (std_match(number,%c%s%lld%c)) then\n",'"',"000000",numerobin,'"');
	}else if (numerobin<100000) {
		
		fprintf(f,"\nelsif (std_match(number,%c%s%lld%c)) then\n",'"',"00000",numerobin,'"');

	}else if (numerobin<1000000) {
		fprintf(f,"\nelsif (std_match(number,%c%s%lld%c)) then\n",'"',"0000",numerobin,'"');

	}else if (numerobin<10000000) {
		fprintf(f,"\nelsif (std_match(number,%c%s%lld%c)) then\n",'"',"000",numerobin,'"');

	}else if (numerobin<100000000) {
		fprintf(f,"\nelsif (std_match(number,%c%s%lld%c)) then\n",'"',"00",numerobin,'"');

	}else if (numerobin<1000000000) {
		fprintf(f,"\nelsif (std_match(number,%c%s%lld%c)) then\n",'"',"0",numerobin,'"');

	}else if (numerobin<10000000000) {
		fprintf(f,"\nelsif (std_match(number,%c%lld%c)) then\n",'"',numerobin,'"');
	}
fprintf(f,"    seg4 <= %s;\n    seg5 <= %s;\n    seg6 <= %s;",s1,s2,s3);

x++;
}

fclose(f);
	return 0;
}

