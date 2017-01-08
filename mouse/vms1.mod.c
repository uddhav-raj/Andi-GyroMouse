#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe89b6b83, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xc0e11eb9, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x1cc62a16, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x19ac6f7e, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xfaf1c379, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x2e4007b7, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x827c8af0, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x5aebc17d, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x212aec77, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "236A61B495FEEC600541ACC");
