#include "led.h"
#include "delay.h"
#include "key.h"
#include "sys.h"
#include "usart.h"
#include "timer.h"
 

 int main(void)
 {		

	delay_init();	    	 //延时函数初始化	  
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); 	 //设置NVIC中断分组2:2位抢占优先级，2位响应优先级
	uart_init(115200);	 //串口初始化为115200
// 	LED_Init();			     //LED端口初始化

	 TIM3_PWM_Init(19999,71);//GPIOB_5
	 
   	while(1)
	{
	
		delay_ms(1000);	
		TIM_SetCompare2(TIM3,500);	//0
    delay_ms(1000);		
    TIM_SetCompare2(TIM3,1000);
    delay_ms(1000);		
    TIM_SetCompare2(TIM3,1500); //90
    delay_ms(1000);		
    TIM_SetCompare2(TIM3,2000);
    delay_ms(1000);				
    TIM_SetCompare2(TIM3,2500); //180
    delay_ms(1000);		
	}	 
	
 }

