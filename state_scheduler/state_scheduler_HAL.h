#pragma once

#define TimerService_TIMx						TIM2
#define TImerService_DBGMCU_CR_DBG_TIMx_STOP	DBGMCU_CR_DBG_TIM2_STOP
#define TimerService_RCC_APB1					RCC_APB1Periph_TIM2
#define TimerService_IRQn						TIM2_IRQn
#define TimerService_IRQHandler					TIM2_IRQHandler

void StateSchedulerHAL_TimerInit();
void StateSchedulerHAL_DisableIrq();
void StateSchedulerHAL_EnableIrq();
void StateSchedulerHAL_Run();
void StateSchedulerHAL_Stop();
