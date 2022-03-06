//
// Created by xiao on 2022/3/6.
//

#ifndef STATEMACHINE_DEF_H
#define STATEMACHINE_DEF_H

typedef enum{
    STA_ERR = 0,
    STA_OK
}ast_t;

typedef enum{
    state1 = 1,
    state2,
    state3,
    state4,
    state5
}sta;

typedef enum{
    event1 = 1, event2, event3, event4,
    event5, event6, event7, event8,
    event9, event10, event11, event12,
    event13, event14, event15, event16,
    event17, event18, event19, event20
}evt;

typedef struct state_table{
    sta cur_sta;
    sta next_sta;
    evt trigger;
    void(*action)();
}staT_t;

typedef struct state_machine
{
    sta cur_sta;
    unsigned int trans_num;
    staT_t* custom_table;
    void(*cur_action)();
}staM_t;

ast_t sta_regist(staM_t* pStaMachine, sta state, staT_t* pStaTable, unsigned int transform_number);

ast_t sta_transform(staM_t* pStaMachine, evt event);

ast_t transform_1to2(void);
ast_t transform_1to3(void);
ast_t transform_1to4(void);
ast_t transform_1to5(void);

ast_t transform_2to1(void);
ast_t transform_2to3(void);
ast_t transform_2to4(void);
ast_t transform_2to5(void);

ast_t transform_3to1(void);
ast_t transform_3to2(void);
ast_t transform_3to4(void);
ast_t transform_3to5(void);

ast_t transform_4to1(void);
ast_t transform_4to2(void);
ast_t transform_4to3(void);
ast_t transform_4to5(void);

ast_t transform_5to1(void);
ast_t transform_5to2(void);
ast_t transform_5to3(void);
ast_t transform_5to4(void);


#endif //STATEMACHINE_DEF_H
