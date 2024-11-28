#include<stdio.h>
#include<conio.h>

void insert(int val);
void check();

int hkey,arr[10],i;



void insert(int val)
{
    hkey = (val % 10) - 1;
    if(arr[hkey] == -1)
    {
        arr[hkey] = val;
    }
    else
    {
        if(hkey < 9)
        {
            for(i = hkey + 1; i<10; i++)
            {
                if(arr[i] == -1)
                {
                    arr[i] = val;
                    break;
                }
            }
        }
        for(i=0;i<hkey;i++)
        {
            if(arr[i] == -1)
            {
                arr[i] = val;
                break;
            }
        }
    }
}

void display()
{
    printf("elements in hash table: ");
    for(i=0;i<10;i++)
        printf("%d ",arr[i]);
    printf("\n");
}

void check()
{
    int k = 0, count = 0,max = 0;
        for(i=0;i<10;i++)
        {
            for(int j =1;j<10;j++)
            {
                if((arr[i] + 1) == arr[j])
                    count++;
            }
        }
        if(count > max)
            max = count;
    printf("\nlargest sequence length: %d",max);
    
}

int main()
{
    for(i=0;i<10;i++)
        arr[i] = -1;
    insert(5);
    insert(6);
    insert(4);
    insert(20);
    insert(19);
    insert(22);
    insert(21);
    display();
    check();
    return 0;
}
