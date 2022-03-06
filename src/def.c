//
// Created by xiao on 2022/3/6.
//

#include "def.h"
#include "stdio.h"

/* 状态机注册 */
ast_t sta_regist(staM_t* pStaMachine, sta state, staT_t* pStaTable, unsigned int transform_number)
{
    pStaMachine->cur_sta = state;
    pStaMachine->custom_table = pStaTable;
    pStaMachine->trans_num = transform_number;
    return STA_OK;
}

/* 状态转换 */
ast_t sta_transform(staM_t* pStaMachine, evt event)
{
    unsigned int i = 0, flag = 0;
    for(i; i < pStaMachine->trans_num; i ++)
    {
        /* 匹配反应 */
        if((pStaMachine->cur_sta == pStaMachine->custom_table[i].cur_sta) &&
           (event == pStaMachine->custom_table[i].trigger)){
            pStaMachine->cur_sta = pStaMachine->custom_table[i].next_sta;
            pStaMachine->cur_action = pStaMachine->custom_table[i].action;
            pStaMachine->cur_action();
            flag = 1;
        }
    }
    if(flag == 0){
        printf("*** there is no matching ***\r\n");
    }
    return STA_OK;
}



ast_t transform_1to2(void)
{
    printf("*** state transform form 1 to 2 ***\r\n");
    return STA_OK;
}

ast_t transform_1to3(void)
{
    printf("*** state transform form 1 to 3 ***\r\n");
    return STA_OK;
}

ast_t transform_1to4(void)
{
    printf("*** state transform form 1 to 4 ***\r\n");
    return STA_OK;
}

ast_t transform_1to5(void)
{
    printf("*** state transform form 1 to 5 ***\r\n");
    return STA_OK;
}

ast_t transform_2to1(void)
{
    printf("*** state transform form 2 to 1 ***\r\n");
    return STA_OK;
}

ast_t transform_2to3(void)
{
    printf("*** state transform form 2 to 3 ***\r\n");
    return STA_OK;

}

ast_t transform_2to4(void)
{
    printf("*** state transform form 2 to 4 ***\r\n");
    return STA_OK;
}

ast_t transform_2to5(void)
{
    printf("*** state transform form 2 to 5 ***\r\n");
    return STA_OK;
}

ast_t transform_3to1(void)
{
    printf("*** state transform form 3 to 1 ***\r\n");
    return STA_OK;
}

ast_t transform_3to2(void)
{
    printf("*** state transform form 3 to 2 ***\r\n");
    return STA_OK;
}

ast_t transform_3to4(void)
{
    printf("*** state transform form 3 to 4 ***\r\n");
    return STA_OK;
}

ast_t transform_3to5(void)
{
    printf("*** state transform form 3 to 5 ***\r\n");
    return STA_OK;
}

ast_t transform_4to1(void)
{
    printf("*** state transform form 4 to 1 ***\r\n");
    return STA_OK;

}

ast_t transform_4to2(void)
{
    printf("*** state transform form 4 to 2 ***\r\n");
    return STA_OK;
}

ast_t transform_4to3(void)
{
    printf("*** state transform form 4 to 3 ***\r\n");
    return STA_OK;

}

ast_t transform_4to5(void)
{
    printf("*** state transform form 4 to 5 ***\r\n");
    return STA_OK;
}

ast_t transform_5to1(void)
{
    printf("*** state transform form 5 to 1 ***\r\n");
    return STA_OK;
}

ast_t transform_5to2(void)
{
    printf("*** state transform form 5 to 2 ***\r\n");
    return STA_OK;
}

ast_t transform_5to3(void)
{
    printf("*** state transform form 5 to 3 ***\r\n");
    return STA_OK;
}

ast_t transform_5to4(void)
{
    printf("*** state transform form 5 to 4 ***\r\n");
    return STA_OK;
}