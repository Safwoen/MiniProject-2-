// Fill out your copyright notice in the Description page of Project Settings.


#include "FindPlayer_BTTask.h"

UFindPlayerBTTask::UFindPlayerBTTask()
{
	NodeName - "FindPlayer";
}

EBTNodeResult::Type UFindPlayerBTTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	if(APawn*)
	return EBTNodeResult::Type();
}

