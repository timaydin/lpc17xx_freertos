# lpc17xx_freertos

Bu program, NXP firmasının LPC17xx mikrokontrolleri için hazırlanmış minimal bir FreeRTOS programıdır. NXP nin yazılım geliştirme araçları kullanarak da böyle temel programlar hazırlanabilir, ama bu programın özelliği, NXP nin yazılım geliştirme araçları yerine, standart, bağımsız bileşenler kullanarak hazırlanmış olması. Yani Eclipse Foundation tarafından yayınlanan en güncel Eclipse IDE, ARM Holdings tarafından yayınlanan ARM GCC toolchain. Böylece NXP yazılım geliştirme araçları ile gelen ilave ve gereksiz bir sürü bileşen olmadan ve sürekli güncellenen yazılımlarla çalışma imkanı elde edilmiş oluyor.

1) Eclipse (https://www.eclipse.org/downloads/)
2) ARM Toolchain (https://developer.arm.com/downloads/-/arm-gnu-toolchain-downloads)

Bu standart bileşenlere ilave olarak, Eclipse IDE ile gelen CMSIS kütüphanesinde LPC17xx işlemcisi için bir takım yapılandırma kaynak kodları hazırlamak gerekiyor. Bunlardan birisi LCP17xx.h. Bu dosya, MCU daki her bir çevre birimi erişimi için C structları ve işlemci üreticilerinin tercihlerine bırakılmış yapılandırma özelliklerini (mesela tamınlanabilecek kesme önceliklerinin sayısı) tanımlar. Diğeri de system_LPC17xx.c. Bu kaynak dosyası da, programın çalışması öncesinde MCU clock, bellek ve diğer temel yapılandırma işlerini halleder. Bu iki dosya için internette bir sürü örnek bulunabilir. Kimisi çok temel, kimisi daha kapsamlı.

Programda gene NXP tarafından kontrol edilmeyen ve tamamen bağımsız olarak geliştirilen FreeRTOS-Kernel de kullanımaktadır. LPC17xx ile çalışması için gereken yapılandırmalar gerçekleştirilmiştir.

Programı derlemek için Eclipse IDE nin son sürümü indirilir. Kurulup programı çalıştırılıp seçeneklerden "Eclipse IDE for Embedded C/C++ Developers" kurulur. Sonra da ARM toolchain indirilir ve uygun bir yere kurulumu yapılır. Sonra IDE çalıştırılıp buradaki proje açılır.
