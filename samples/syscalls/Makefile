
LINUX_ARCH_INCLUDE = -I$(LINUX_ROOT_PATH)/arch/x86/include/ 
LINUX_INCLUDE = -I$(LINUX_ROOT_PATH)/linux/include

test_syscall:test_syscall.c
	gcc test_syscall.c -o test_syscall $(LINUX_ARCH_INCLUDE) $(LINUX_INCLUDE)
