#include <stdio.h>
#include <stdlib.h>
int arr[100];
int n;
FILE *Ofile;


void Xuat_file()
{
    for(int i = 0; i < n; i++)
    {
        fprintf(Ofile,"%d\t",arr[i]);
    }
    fprintf(Ofile,"\n");
}
void swap(int *a,int *b)
{
    int hold = *a;
    *a = *b;
    *b = hold;
}
void P_array()
{
    for(int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    puts("");
}
void Input_value()
{
    FILE *Ifile;
    Ifile = fopen("input.txt","r");
    fscanf(Ifile,"%d",&n);
    for(int i = 0 ; i < n ; i++)
    {
        fscanf(Ifile,"%d",&arr[i]);
    }
    fclose(Ifile);
}
void Insert_sort()
{

   for (int i = 1; i < n; i++)
   {
       int key = arr[i];
       int j = i-1;

       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
        printf("Buoc lon i = %d, buoc nho j = %d, Key = %d",i,j,key);puts("");
        P_array();
        printf("""""""""""""""""""""""\n");
       }
       arr[j+1] = key;
       printf("Sau Vong Lap Thu i = %d",i);puts("");
       printf("*******************************\n");
       fprintf(Ofile,"Sau Vong Lap thu i = %d\n",i);
       Xuat_file();

       P_array();
       printf("*****************************************\n");
       fprintf(Ofile,"*****************************************\n");
   }
}
int main()
{
    Input_value();
    Ofile = fopen("output.txt","w");
    fprintf(Ofile,"Day chua duoc sap xep la: ");
    Xuat_file();
    printf("Day chua duoc sap xep:\n");
    P_array();
    printf("************************\n");
    fprintf(Ofile,"******************\n");
    Insert_sort();
    printf("KET QUA\n");
    fprintf(Ofile,"\n************ KET QUA **************\n");
    Xuat_file();
    fclose(Ofile);
    P_array();

    return 0;

}
