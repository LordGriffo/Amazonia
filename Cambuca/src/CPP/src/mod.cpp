#include <linux/module.h>
#include <linux/kernel.h>

extern "C" int init_module(void) {
    printk(KERN_INFO "Módulo de kernel em C++ iniciado.\n");
    // Lógica em C++ para inicialização do módulo

    return 0;
}

extern "C" void cleanup_module(void) {
    printk(KERN_INFO "Módulo de kernel em C++ finalizado.\n");
    // Lógica em C++ para finalização do módulo
}

MODULE_LICENSE("GPL");
