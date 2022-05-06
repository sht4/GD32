# GD32F303RCT6
\
Есть такая компания - GigaDevices semiconductor, родом из кремниевой долины и базированием в Пекине. Они производят микроконтроллеры, память и датчики. Так вот микроконтроллеры в их ассортементе совместимы с STM32 по распиновке и вариантам периферии.\
Здесь опишу свой опыт использования контроллеров [GigaDevices](https://www.gigadevice.com/products/microcontrollers/gd32) на плате [Nucleo-F303RE](https://www.st.com/en/evaluation-tools/nucleo-f303re.html), вместо STM32F303RET6 после перепайки. От GD в распоряжении есть микросхема GD32F303RCT6, как аналог для STM-ки. В данном случае под аналогом подразумеваю совместимость ножек этих микросхем, программно **они не совместимы**. То есть с одинаковой прошивкой микросхемы работать не станут.\
\
Что бы подключить GigaDevices к Keil, воспользовался проектом c Китайского гита от пользователя [William_William](https://gitee.com/william_william/GD32/tree/master). В Китайском проекте используется контроллер [GD32F303R](https://www.gigadevice.com/products/product-finder/?fwp_processor_type=cortex-m4&fwp_microcontrollers_product_series=gd32f303&fwp_microcontroller_part_number=GD32F303R), а в нашем [GD32F303RCT6](https://www.gigadevice.com/microcontroller/gd32f303rct6). Разница микроконтроллеров STM и GD в нашем случае состоит только в памяти.\
ST - 512 кБайт\
GD - 256 кБайт\
\
Для начала взаимодействия с GigaDevices нужен Keil MKD-ARM и [библиотеки](https://www.keil.com/dd2/pack/#!#third-party-download-dialog) под него от производителя микроконтроллеров. Библиотека подбирается под конкретное семейство микроконтроллера (F1, F2, F3...). В моём случае это был GD32F30x software pack. На сайте производителя он выглядит так:\
**GigaDevice GD32F30x Series Device Support and Examples**\
\
Потом надо этот pack добавить в папку ```~/ARM/Packs```\
\
Далее можно приступать к созданию проекта.
\
\
\
Текст не полный и дополняется.

