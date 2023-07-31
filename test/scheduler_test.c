#include <stdio.h> /*printf */
#include <unistd.h>
#include "scheduler.h"

scheduler_ty *scheduler = NULL;

void CleanFunc(ilrd_uid_ty uid, void *param)
{
    (void)uid;
    (void)param;

    printf("Cleaning up task with parameter %d\n", *((int *)param));
}

int OperationFunc1(void *param)
{
    (void)param;
    printf("Running operation 1\n");
    return 1;
}

int OperationFunc2(void *param)
{
    (void)param;
    printf("Running operation 2\n");
    return 0;
}

int OperationFunc3(void *param)
{
    (void)param;
    printf("Running operation 3\n");
    return 0;
}

int OperationFunc4(void *param)
{
    (void)param;
    printf("This is Stop\n");
    SchedulerStop(scheduler);
    return 1;
}

int main(void)
{
    int param1 = 1;
    int param2 = 2;
    int param3 = 3;
    int param4 = 4;
    ilrd_uid_ty uid1;
    ilrd_uid_ty uid2;
    ilrd_uid_ty uid3;
    ilrd_uid_ty uid4;

    scheduler = SchedulerCreate();

    uid1 = SchedulerAddTask(scheduler, param1, OperationFunc1, &param1, CleanFunc);
    uid2 = SchedulerAddTask(scheduler, param2, OperationFunc2, &param2, CleanFunc);
    uid3 = SchedulerAddTask(scheduler, param3, OperationFunc3, &param3, CleanFunc);
    uid4 = SchedulerAddTask(scheduler, param4, OperationFunc4, &param4, CleanFunc);
    SchedulerRemoveTask(scheduler, uid2);

    SchedulerRun(scheduler);

    SchedulerDestroy(scheduler);

    return 0;
}
