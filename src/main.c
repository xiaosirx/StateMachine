#include "stdio.h"
#include "def.h"
#include "stdlib.h"

const staT_t test_table[] = {
        {state1, state2, event5, (void *) transform_1to2},
        {state1, state3, event9, (void *) transform_1to3},
        {state1, state4, event13, (void *) transform_1to4},
        {state1, state5, event17, (void *) transform_1to5},

        {state2, state1, event1, (void *) transform_2to1},
        {state2, state3, event10, (void *) transform_2to3},
        {state2, state4, event14, (void *) transform_2to4},
        {state2, state5, event18, (void *) transform_2to5},

        {state3, state1, event2, (void *) transform_3to1},
        {state3, state2, event6, (void *) transform_3to2},
        {state3, state4, event15, (void *) transform_3to4},
        {state3, state5, event19, (void *) transform_3to5},

        {state4, state1, event3, (void *) transform_4to1},
        {state4, state2, event7, (void *) transform_4to2},
        {state4, state3, event11, (void *) transform_4to3},
        {state4, state5, event20, (void *) transform_4to5},

        {state5, state1, event4, (void *) transform_5to1},
        {state5, state2, event8, (void *) transform_5to2},
        {state5, state3, event12, (void *) transform_5to3},
        {state5, state4, event16, (void *) transform_5to4}
};

int main()
{
    unsigned int test_event = 0;
    staM_t* test_machine = malloc(sizeof(staM_t));     //为状态机分配内存
    if(STA_OK != sta_regist(test_machine, state1, test_table, 20)){
        printf("*** REGIST ERROR ***\r\n");
    }
    while(1){
        printf("*** please enter event ID ***\r\n");
        scanf("%d", &test_event);
        if(STA_OK != sta_transform(test_machine, test_event)){
            printf("*** TRANSFORM ERROR ***\r\n");
        }
    }
    return 0;
}
