#![no_std]
#![feature(register_attr)]
#![register_attr(register_module)]

use linux_kernel_module::linux_kernel_module_init;
use linux_kernel_module::linux_kernel_module_exit;

#[linux_kernel_module_init]
fn init_module() -> i32 {
    pr_info!("Módulo de kernel em Rust iniciado.\n");
    // Lógica em Rust para inicialização do módulo

    0
}

#[linux_kernel_module_exit]
fn cleanup_module() {
    pr_info!("Módulo de kernel em Rust finalizado.\n");
    // Lógica em Rust para finalização do módulo
}

module_license!("GPL");
