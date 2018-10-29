/*
 Copyright (c) Microsoft Corporation.  All rights reserved.
*/


/*define fun_DriverEntry pre_always
define fun_WDF_DRIVER_DEVICE_ADD pre_always
define fun_WDF_IO_QUEUE_IO_DEFAULT pre_callback_#1
define fun_WDF_IO_QUEUE_IO_STOP pre_callback_#2
define fun_WDF_IO_QUEUE_IO_RESUME pre_callback_#3
define fun_WDF_IO_QUEUE_IO_READ pre_callback_#4
define fun_WDF_IO_QUEUE_IO_WRITE pre_callback_#5
define fun_WDF_IO_QUEUE_IO_DEVICE_CONTROL pre_callback_#6
define fun_WDF_IO_QUEUE_IO_INTERNAL_DEVICE_CONTROL pre_callback_#7
define fun_WDF_IO_QUEUE_IO_CANCELED_ON_QUEUE pre_callback_#8
define fun_WDF_REQUEST_CANCEL_1 core_callback
define fun_WDF_REQUEST_CANCEL_2 core_callback
define fun_WDF_REQUEST_CANCEL_3 core_callback
define fun_WDF_REQUEST_CANCEL_4 core_callback
define fun_WDF_REQUEST_CANCEL_5 core_callback
define fun_WDF_REQUEST_CANCEL_6 core_callback
define fun_WDF_DEVICE_CONTEXT_CLEANUP core_only_callback
define fun_WDF_DEVICE_CONTEXT_DESTROY core_only_callback
define fun_WDF_IO_QUEUE_CONTEXT_CLEANUP_CALLBACK core_only_callback
define fun_WDF_IO_QUEUE_CONTEXT_DESTROY_CALLBACK core_only_callback
define fun_WDF_FILE_CONTEXT_CLEANUP_CALLBACK core_only_callback
define fun_WDF_FILE_CONTEXT_DESTROY_CALLBACK core_only_callback
define fun_WDF_CHILD_LIST_CREATE_DEVICE core_only_callback
define fun_WDF_CHILD_LIST_SCAN_FOR_CHILDREN core_only_callback
define fun_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_COPY core_only_callback
define fun_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_DUPLICATE core_only_callback
define fun_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_COMPARE core_only_callback
define fun_WDF_CHILD_LIST_IDENTIFICATION_DESCRIPTION_CLEANUP core_only_callback
define fun_WDF_CHILD_LIST_ADDRESS_DESCRIPTION_COPY core_only_callback
define fun_WDF_CHILD_LIST_ADDRESS_DESCRIPTION_DUPLICATE core_only_callback
define fun_WDF_CHILD_LIST_ADDRESS_DESCRIPTION_CLEANUP core_only_callback
define fun_WDF_CHILD_LIST_DEVICE_REENUMERATED core_only_callback
define fun_WDF_CLASS_EXTENSIONIN_BIND core_only_callback
define fun_WDF_CLASS_EXTENSIONIN_UNBIND core_only_callback
define fun_WDF_DEVICE_SHUTDOWN_NOTIFICATION core_only_callback
define fun_WDF_DEVICE_PNP_STATE_CHANGE_NOTIFICATION core_only_callback
define fun_WDF_DEVICE_POWER_STATE_CHANGE_NOTIFICATION core_only_callback
define fun_WDF_DEVICE_POWER_POLICY_STATE_CHANGE_NOTIFICATION core_only_callback
define fun_WDF_DEVICE_D0_ENTRY core_only_callback
define fun_WDF_DEVICE_D0_ENTRY_POST_INTERRUPTS_ENABLED core_only_callback
define fun_WDF_DEVICE_D0_EXIT core_only_callback
define fun_WDF_DEVICE_D0_EXIT_PRE_INTERRUPTS_DISABLED core_only_callback
define fun_WDF_DEVICE_PREPARE_HARDWARE core_only_callback
define fun_WDF_DEVICE_RELEASE_HARDWARE core_only_callback
define fun_WDF_DEVICE_SELF_MANAGED_IO_CLEANUP core_only_callback
define fun_WDF_DEVICE_SELF_MANAGED_IO_FLUSH core_only_callback
define fun_WDF_DEVICE_SELF_MANAGED_IO_INIT core_only_callback
define fun_WDF_DEVICE_SELF_MANAGED_IO_SUSPEND core_only_callback
define fun_WDF_DEVICE_SELF_MANAGED_IO_RESTART core_only_callback
define fun_WDF_DEVICE_QUERY_STOP core_only_callback
define fun_WDF_DEVICE_QUERY_REMOVE core_only_callback
define fun_WDF_DEVICE_SURPRISE_REMOVAL core_only_callback
define fun_WDF_DEVICE_USAGE_NOTIFICATION core_only_callback
define fun_WDF_DEVICE_RELATIONS_QUERY core_only_callback
define fun_WDF_DEVICE_ARM_WAKE_FROM_S0 core_only_callback
define fun_WDF_DEVICE_ARM_WAKE_FROM_SX core_only_callback
define fun_WDF_DEVICE_DISARM_WAKE_FROM_S0 core_only_callback
define fun_WDF_DEVICE_DISARM_WAKE_FROM_SX core_only_callback
define fun_WDF_DEVICE_WAKE_FROM_S0_TRIGGERED core_only_callback
define fun_WDF_DEVICE_WAKE_FROM_SX_TRIGGERED core_only_callback
define fun_WDFDEVICE_WDM_IRP_PREPROCESS_1 core_only_callback
define fun_WDFDEVICE_WDM_IRP_PREPROCESS_2 core_only_callback
define fun_WDFDEVICE_WDM_IRP_PREPROCESS_3 core_only_callback
define fun_WDFDEVICE_WDM_IRP_PREPROCESS_4 core_only_callback
define fun_WDFDEVICE_WDM_IRP_PREPROCESS_5 core_only_callback
define fun_WDFDEVICE_WDM_IRP_PREPROCESS_6 core_only_callback
define fun_WDF_IO_IN_CALLER_CONTEXT core_only_callback
define fun_WDF_DMA_ENABLER_FILL core_only_callback
define fun_WDF_DMA_ENABLER_FLUSH core_only_callback
define fun_WDF_DMA_ENABLER_ENABLE core_only_callback
define fun_WDF_DMA_ENABLER_DISABLE core_only_callback
define fun_WDF_DMA_ENABLER_SELFMANAGED_IO_START core_only_callback
define fun_WDF_DMA_ENABLER_SELFMANAGED_IO_STOP core_only_callback
define fun_WDF_PROGRAM_DMA_1 core_only_callback
define fun_WDF_PROGRAM_DMA_2 core_only_callback
define fun_WDF_PROGRAM_DMA_3 core_only_callback
define fun_WDF_PROGRAM_DMA_4 core_only_callback
define fun_WDF_PROGRAM_DMA_5 core_only_callback
define fun_WDF_PROGRAM_DMA_6 core_only_callback
define fun_WDF_DPC_1 core_only_callback
define fun_WDF_DPC_2 core_only_callback
define fun_WDF_DPC_3 core_only_callback
define fun_WDF_DPC_4 core_only_callback
define fun_WDF_DPC_5 core_only_callback
define fun_WDF_DPC_6 core_only_callback
define fun_WDF_DPC_7 core_only_callback
define fun_WDF_DRIVER_UNLOAD core_only_callback
define fun_WDF_TRACE_CALLBACK core_only_callback
define fun_WDF_DEVICE_FILTER_RESOURCE_REQUIREMENTS_1 core_only_callback
define fun_WDF_DEVICE_FILTER_RESOURCE_REQUIREMENTS_2 core_only_callback
define fun_WDF_DEVICE_FILTER_RESOURCE_REQUIREMENTS_3 core_only_callback
define fun_WDF_DEVICE_FILTER_RESOURCE_REQUIREMENTS_4 core_only_callback
define fun_WDF_DEVICE_FILTER_RESOURCE_REQUIREMENTS_5 core_only_callback
define fun_WDF_DEVICE_FILTER_RESOURCE_REQUIREMENTS_6 core_only_callback
define fun_WDF_DEVICE_REMOVE_ADDED_RESOURCES core_only_callback
define fun_WDF_INTERRUPT_ISR core_only_callback
define fun_WDF_INTERRUPT_SYNCHRONIZE_1 core_only_callback
define fun_WDF_INTERRUPT_SYNCHRONIZE_2 core_only_callback
define fun_WDF_INTERRUPT_SYNCHRONIZE_3 core_only_callback
define fun_WDF_INTERRUPT_SYNCHRONIZE_4 core_only_callback
define fun_WDF_INTERRUPT_SYNCHRONIZE_5 core_only_callback
define fun_WDF_INTERRUPT_SYNCHRONIZE_6 core_only_callback
define fun_WDF_INTERRUPT_SYNCHRONIZE_7 core_only_callback
define fun_WDF_INTERRUPT_SYNCHRONIZE_8 core_only_callback
define fun_WDF_INTERRUPT_SYNCHRONIZE_9 core_only_callback
define fun_WDF_INTERRUPT_SYNCHRONIZE_10 core_only_callback
define fun_WDF_INTERRUPT_SYNCHRONIZE_11 core_only_callback
define fun_WDF_INTERRUPT_DPC core_only_callback
define fun_WDF_INTERRUPT_ENABLE core_only_callback
define fun_WDF_INTERRUPT_DISABLE core_only_callback
define fun_SDV_WDF_IO_QUEUE_STATE core_only_callback
define fun_WDF_IO_TARGET_QUERY_REMOVE core_only_callback
define fun_WDF_IO_TARGET_REMOVE_CANCELED core_only_callback
define fun_WDF_IO_TARGET_REMOVE_COMPLETE core_only_callback
define fun_WDF_OBJECT_CONTEXT_CLEANUP core_only_callback
define fun_WDF_OBJECT_CONTEXT_DESTROY core_only_callback
define fun_WDF_DEVICE_RESOURCES_QUERY core_only_callback
define fun_WDF_DEVICE_RESOURCE_REQUIREMENTS_QUERY core_only_callback
define fun_WDF_DEVICE_EJECT core_only_callback
define fun_WDF_DEVICE_SET_LOCK core_only_callback
define fun_WDF_DEVICE_ENABLE_WAKE_AT_BUS core_only_callback
define fun_WDF_DEVICE_DISABLE_WAKE_AT_BUS core_only_callback
define fun_WDF_DEVICE_PROCESS_QUERY_INTERFACE_REQUEST core_only_callback
define fun_WDF_REQUEST_COMPLETION_ROUTINE_1 core_only_callback
define fun_WDF_REQUEST_COMPLETION_ROUTINE_2 core_only_callback
define fun_WDF_REQUEST_COMPLETION_ROUTINE_3 core_only_callback
define fun_WDF_REQUEST_COMPLETION_ROUTINE_4 core_only_callback
define fun_WDF_REQUEST_COMPLETION_ROUTINE_5 core_only_callback
define fun_WDF_REQUEST_COMPLETION_ROUTINE_6 core_only_callback
define fun_WDF_TIMER_1 core_only_callback
define fun_WDF_TIMER_2 core_only_callback
define fun_WDF_TIMER_3 core_only_callback
define fun_WDF_TIMER_4 core_only_callback
define fun_WDF_TIMER_5 core_only_callback
define fun_WDF_TIMER_6 core_only_callback
define fun_WDF_WMI_INSTANCE_QUERY_INSTANCE_1 core_only_callback
define fun_WDF_WMI_INSTANCE_QUERY_INSTANCE_2 core_only_callback
define fun_WDF_WMI_INSTANCE_QUERY_INSTANCE_3 core_only_callback
define fun_WDF_WMI_INSTANCE_QUERY_INSTANCE_4 core_only_callback
define fun_WDF_WMI_INSTANCE_QUERY_INSTANCE_5 core_only_callback
define fun_WDF_WMI_INSTANCE_SET_INSTANCE_1 core_only_callback
define fun_WDF_WMI_INSTANCE_SET_INSTANCE_2 core_only_callback
define fun_WDF_WMI_INSTANCE_SET_INSTANCE_3 core_only_callback
define fun_WDF_WMI_INSTANCE_SET_INSTANCE_4 core_only_callback
define fun_WDF_WMI_INSTANCE_SET_INSTANCE_5 core_only_callback
define fun_WDF_WMI_INSTANCE_SET_ITEM_1 core_only_callback
define fun_WDF_WMI_INSTANCE_SET_ITEM_2 core_only_callback
define fun_WDF_WMI_INSTANCE_SET_ITEM_3 core_only_callback
define fun_WDF_WMI_INSTANCE_SET_ITEM_4 core_only_callback
define fun_WDF_WMI_INSTANCE_SET_ITEM_5 core_only_callback
define fun_WDF_WMI_INSTANCE_EXECUTE_METHOD_1 core_only_callback
define fun_WDF_WMI_INSTANCE_EXECUTE_METHOD_2 core_only_callback
define fun_WDF_WMI_INSTANCE_EXECUTE_METHOD_3 core_only_callback
define fun_WDF_WMI_INSTANCE_EXECUTE_METHOD_4 core_only_callback
define fun_WDF_WMI_INSTANCE_EXECUTE_METHOD_5 core_only_callback
define fun_WDF_WMI_PROVIDER_FUNCTION_CONTROL core_only_callback
define fun_WDF_WORKITEM_1 core_only_callback
define fun_WDF_WORKITEM_2 core_only_callback
define fun_WDF_WORKITEM_3 core_only_callback
define fun_WDF_WORKITEM_4 core_only_callback
define fun_WDF_WORKITEM_5 core_only_callback
define fun_WDF_WORKITEM_6 core_only_callback
define fun_WDF_FILE_CLOSE core_only_callback
define fun_WDF_FILE_CLEANUP core_only_callback
define fun_WDF_DEVICE_FILE_CREATE core_only_callback
define fun_WDF_USB_READERS_FAILED_1 core_callback
define fun_WDF_USB_READERS_FAILED_2 core_callback
define fun_WDF_USB_READERS_FAILED_3 core_callback
define fun_WDF_USB_READER_COMPLETION_ROUTINE_1 core_callback
define fun_WDF_USB_READER_COMPLETION_ROUTINE_2 core_callback
define fun_WDF_USB_READER_COMPLETION_ROUTINE_3 core_callback*/