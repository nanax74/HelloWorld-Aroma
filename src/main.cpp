#include <wups.h>
#include <notifications/notifications.h>

WUPS_PLUGIN_NAME("HelloWorld");
WUPS_PLUGIN_AUTHOR("nanax74");
WUPS_PLUGIN_DESCRIPTION("A plugin for testing the development environment of Aroma plugins.");
WUPS_PLUGIN_VERSION("0.1.0");
WUPS_PLUGIN_LICENSE("MIT");

INITIALIZE_PLUGIN()
{
    NotificationModule_InitLibrary();
    NotificationModule_AddInfoNotification("Hello World");
}

DEINITIALIZE_PLUGIN()
{
    NotificationModule_DeInitLibrary();
}