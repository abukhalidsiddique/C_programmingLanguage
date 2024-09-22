#include<stdio.h>
int main()
{
    char a[100];
    gets(a);
    puts(a);
    int len,i,count1=0,count4=0,count3=0,consonant;
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u')||(a[i]=='A')||(a[i]=='I')||(a[i]=='O')||(a[i]=='U')||(a[i]=='E'))
        count1++;
        else count4++;
    }
     for(i=0;i<len;i++)
    {
        if((a[i]!='a')||(a[i]!='e')||(a[i]!='i')||(a[i]!='o')||(a[i]!='u')||(a[i]!='A')||(a[i]!='I')||(a[i]!='O')||(a[i]!='U')||(a[i]!='E'))
        count3++;
    }


      printf("\nVowel= %d", count1);
       printf("\nVowel= %d", count4);

      printf("\nConsonant= %d",count3);
      if(count1>count3)
        printf("\nvowel type");
      else
        printf("\nConsonant type");

}
