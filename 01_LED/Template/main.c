#include "gd32f30x.h"
#include "systick.h"

int main(void)
{
	/* 配置系统时钟 */
	systick_config();
	/* 使能LED所使用的GPIOB时钟 */
    rcu_periph_clock_enable(RCU_GPIOA);


    /* 配置LED使用的引脚为推挽输出 */ 
    gpio_init(GPIOA, GPIO_MODE_OUT_PP, GPIO_OSPEED_50MHZ, GPIO_PIN_5);
    /* reset LED GPIO pin */
    gpio_bit_reset(GPIOA, GPIO_PIN_5);

    while(1)
	{
        /* turn on LED */
        gpio_bit_set(GPIOA, GPIO_PIN_5); 
        delay_1ms(1000);

        /* turn off LED */
        gpio_bit_reset(GPIOA, GPIO_PIN_5);
        delay_1ms(1000);

    }
}

