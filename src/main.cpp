#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


struct item
{
    uint8_t lag;
    uint8_t val;
};

struct connector
{
    item next;
    item prev;
};

int way1()
{
    item blob[20];
    connector link[20];

    for (int ii = 0; ii < sizeof(blob)/sizeof(item); ii++)
    {
        blob[ii].lag = 1;
        blob[ii].val = ii;
    }

    link[0].next = blob[0];
    //link[0].prev = NULL;
    
    return 0;
}

int main()
{
    way1();
}
