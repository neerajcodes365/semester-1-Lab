#include <stdio.h>
int stud_id,id,n,std_arr[1000][3];

void highest(int );
void lowest(int );
void average(int );
void total(int );

int main()
{
    int ch;
    
    do
    {
        scanf("%d",&n);
        if (n<5||n>100) printf("Invalid\n");
    } while (n<5||n>100);

    for (int i=0;i<n;i++)
    {
        for (int j =0;j<3;j++) scanf("%d",&std_arr[i][j]);
    }

    while (1)
    {
        printf("\nPlease enter a number indicating your choice\n1: highest mark in a course\n2: lowest mark in a course\n3: average marks for a course\n4: total marks of a student\n0: exit\n\n\n");
        scanf("%d",&ch);

        if (ch==1||ch==2||ch==3)
        {
            printf("Enter course ID:");
            scanf("%d",&id);
            
            if (ch==1) highest(id);
            if (ch==2) lowest(id);
            if (ch==3) average(id);
        }

        else if (ch==4)
        {
            printf("Enter student number:");
            scanf("%d",&stud_id);
            total(stud_id);
        }

        else if (ch==0) break;
    }

    return 0;
}

void highest(int id)
{
    int h = std_arr[0][id];
    for(int i=0;i<n;i++)
    {
        if (std_arr[i][id]> h) h = std_arr[i][id];
    }
    printf("Highest marks in course %d: %d\n",id,h);
    return;
}

void lowest(int id)
{
    int h = std_arr[0][id];
    for(int i=0;i<n;i++)
    {
        if (std_arr[i][id]< h) h = std_arr[i][id];
    }
    printf("Lowest marks in course %d: %d\n",id,h);
    return;
}

void average(int id)
{
    float h = 0.0;
    for(int i=0;i<n;i++)
    {
        h+=std_arr[i][id];
    }
    printf("Average marks of course %d: %f\n",id,h/n);
    return;
}

void total(int stud_id)
{
    printf("Total marks of student %d: %d\n",stud_id,std_arr[stud_id-1][0]+std_arr[stud_id-1][1]+std_arr[stud_id-1][2]);
}

