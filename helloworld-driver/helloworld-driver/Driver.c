#include <ntddk.h>
#include <wdf.h>

DRIVER_INITIALIZE DriverEntry;

NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
    DbgPrint("Hello from driver!\n");
    return STATUS_SUCCESS;
}
