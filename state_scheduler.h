#pragma once
#include <stdint.h>

typedef int machine_t;
typedef unsigned int counter_t;

#define StateSchedulerMAX_NUM_OF_MACHINES	10

void StateScheduler_Process();
void StateScheduler_TimerInitAndRun();
void StateScheduler_TimerStop();

machine_t StateScheduler_RegisterMachine( uint8_t numOfStates);
void StateScheduler_InitStateData(machine_t machineIndex, int stateIndex, void (*inFunc)(void), void (*func)(void), void (*outFunc)(void));

void StateScheduler_SetState(machine_t machineIndex, int newState);
void StateScheduler_BlockByTime(machine_t machineIndex, counter_t time);
void StateScheduler_SetStateByTime(machine_t machineIndex, int newState, counter_t time);