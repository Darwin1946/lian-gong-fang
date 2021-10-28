#include<stdio.h>
#include<stdbool.h>

int transformASCII();
void mixPrint(void);
void floatPrint();
void yearToSecond();
void countMolecules();

int main(void){
//transformASCII();
//mixPrint();
//floatPrint();
//yearToSecond();
countMolecules();
}

//3.11.2 ASCII transform
int transformASCII(){
int input;
int conform;
printf("please input a ASCII number:\n");
scanf("%d",&input);
printf("ASCII is:%c\n",input);
printf("output ASCII table?(y or n)");
scanf("%d",&conform);
if(conform == 1)
{
    printf("ASCII Table:\n");
    for(int i =0;i<128;i++){
    printf("d:%d\tc:%c\n",i,i);
    }
}
return 0;
}

//3.11.3 mix printf

void mixPrint(void)
{
    char bell = 7;
    printf("%cStartled by the sudden sound, Sally shouted,\n\"By the Great Pumpkin, what was that!\"",bell);
}

//3.11.4
void floatPrint(){
    float f;
    printf("Enter a float:");
    scanf("%f",&f);
    printf("fixedPoint: %f\n",f);
    printf("exponential: %e\n",f);
    printf("p: %p\n",f);
}

//3.11.5
void yearToSecond()
{
    int yearsOld;
    int transform = 3.156e+7;
    printf("how old are u:");
    scanf("%d",&yearsOld);
    //short second=yearsOld*transform; 12096 overflow
    int second = yearsOld*transform;
    printf("%d seconds hava passed in ur life",second);
}

//3.11.6 water molecules long long int overflow
void countMolecules()
{
    int quart;
    double molecules;
    printf("How many quarts of water do u have:");
    scanf("%d",&quart);
    molecules = (quart*950)/3.0e-23;
    printf("u have %f molecules of water",molecules);
}
//3.11.7 pass
//3.11.8 pass 