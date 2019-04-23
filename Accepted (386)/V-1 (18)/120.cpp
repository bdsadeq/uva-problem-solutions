//120 - Stacks of Flapjacks
//Sadeq

#include<stdio.h>

void sortFlapJacks(int array[], int size );
int findLargest( int array[], int first, int last );
void reverse( int array[], int first, int last );

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j;

    char line[100000];
    int arr[500];
    int arr_size;


    while(gets(line))
    {
        puts(line);


        int bs,dbs;
        bs=dbs=0;
        arr_size=0;
        while(sscanf(line+bs,"%d%n",&arr[arr_size],&dbs)==1)
        {
            arr_size++;
            bs=bs+dbs;
        }

        //printf("%d %d\n",arr[0],arr[arr_size-1]);
        sortFlapJacks(arr,arr_size);



    }

    return 0;
}

void sortFlapJacks(int array[], int size )
{
    for(int i = size-1; i > 0; i--)
    {
        int j = findLargest(array, 0, i );
        int flipPosition;

        if( j != i )
        {
            if( j != 0 )
            {
                reverse( array, 0, j );
                flipPosition = size-j;
                printf("%d ",flipPosition);
            }

            reverse( array, 0, i );
            flipPosition = size-i;
            printf("%d ",flipPosition);
        }
    }
    printf("0\n");
}

int findLargest( int array[], int first, int last )
{
    int index = first;
    int max = array[index];

    for( int i = first+1; i <= last; i++)
    {
        if( array[i] > max)
        {
            max = array[i];
            index = i;
        }
    }

    return index;
}

void reverse( int array[], int first, int last )
{
    int mid = (last-first) / 2 + 1;
    int temp;

    for( int i = 0; i < mid; i++ )
    {
        temp = array[last-i];
        array[last-i] = array[first+i];
        array[first+i] = temp;
    }
}

