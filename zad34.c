// Program treba prebrojati sve suglasnike i samogalsnike preko pointera.

int main()
{
    char str[100];
    char *ptr;
    int  cntV,cntC;
     
    printf("Unesi string: ");
    gets(str);
     
    //assign address of str to ptr
    ptr=str;
     
    cntV=cntC=0;
    while(*ptr!='\0')
    {
        if(*ptr=='A' ||*ptr=='E' ||*ptr=='I' ||*ptr=='O' ||*ptr=='U' ||*ptr=='a' ||*ptr=='e' ||*ptr=='i' ||*ptr=='o' ||*ptr=='u')
            cntV++;
        else
            cntC++;
        //Povecaj pointer do iduceg znaka
        ptr++;
    }
     
    printf("Broj samoglasnika: %d, broj suglasnika: %d\n",cntV,cntC);        
    return 0;
}
