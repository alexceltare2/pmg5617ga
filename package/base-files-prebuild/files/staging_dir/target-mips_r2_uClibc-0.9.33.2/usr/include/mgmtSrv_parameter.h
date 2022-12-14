tr98Parameter_t para_MgmtSrv[] = {
	{ "EnableCWMP", PARAMETER_ATTR_WRITE, 0, json_type_boolean},
	{ "URL", PARAMETER_ATTR_WRITE, 257, json_type_string},
	{ "Username", PARAMETER_ATTR_WRITE, 257, json_type_string},
	{ "Password", PARAMETER_ATTR_WRITE | PARAMETER_ATTR_PASSWORD, 257, json_type_string},
	{ "PeriodicInformEnable", PARAMETER_ATTR_WRITE, 0, json_type_boolean},
	{ "PeriodicInformInterval", PARAMETER_ATTR_WRITE, 0, json_type_uint32},
	{ "PeriodicInformTime", PARAMETER_ATTR_WRITE, 21, json_type_time},
	{ "ParameterKey", PARAMETER_ATTR_READONLY, 33, json_type_string},
	{ "ConnectionRequestURL", PARAMETER_ATTR_READONLY|PARAMETER_ATTR_ACTIVENOTIFY, 257, json_type_string},
	{ "ConnectionRequestUsername", PARAMETER_ATTR_WRITE, 257, json_type_string},
	{ "ConnectionRequestPassword", PARAMETER_ATTR_WRITE | PARAMETER_ATTR_PASSWORD, 257, json_type_string},
	{ "UpgradesManaged", PARAMETER_ATTR_WRITE, 0, json_type_boolean},
	{ "KickURL", PARAMETER_ATTR_READONLY, 257, json_type_string},
	{ "DownloadProgressURL", PARAMETER_ATTR_READONLY, 257, json_type_string},
	{ "DefaultActiveNotificationThrottle", PARAMETER_ATTR_WRITE, 0, json_type_uint32},
	{ "UDPConnectionRequestAddress", PARAMETER_ATTR_READONLY, 257, json_type_string},
#ifndef CONFIG_XPON_SUPPORT
	{ "UDPConnectionRequestAddressNotificationLimit", PARAMETER_ATTR_WRITE, 0, json_type_uint32},
#endif
	{ "STUNEnable", PARAMETER_ATTR_WRITE, 0, json_type_boolean},
	{ "STUNServerAddress", PARAMETER_ATTR_WRITE, 257, json_type_string},
	{ "STUNServerPort", PARAMETER_ATTR_WRITE, 0, json_type_uint32},
	{ "STUNUsername", PARAMETER_ATTR_WRITE, 257, json_type_string},
	{ "STUNPassword", PARAMETER_ATTR_WRITE | PARAMETER_ATTR_PASSWORD, 257, json_type_string},
	{ "STUNMaximumKeepAlivePeriod", PARAMETER_ATTR_WRITE, 0, json_type_int},
	{ "STUNMinimumKeepAlivePeriod", PARAMETER_ATTR_WRITE, 0, json_type_uint32},
	{ "NATDetected", PARAMETER_ATTR_READONLY, 0, json_type_boolean},
	{ "ManageableDeviceNumberOfEntries", PARAMETER_ATTR_READONLY, 0, json_type_uint32},
	//{ "ManageableDeviceNotificationLimit", PARAMETER_ATTR_WRITE, 0, json_type_uint32},
	{ "X_ZYXEL_ConnectionRequestUDPPort", PARAMETER_ATTR_WRITE, 0, json_type_uint32},
	{ "X_ZYXEL_ConnectionRequestPort", PARAMETER_ATTR_WRITE, 0, json_type_uint32},
	{ "X_ZYXEL_BoundInterface", PARAMETER_ATTR_WRITE, 33, json_type_string},
	{ "X_ZYXEL_BoundInterfaceList", PARAMETER_ATTR_WRITE, 129, json_type_string},
	{ "X_ZYXEL_DataModelSpec", PARAMETER_ATTR_WRITE, 17, json_type_string},
	{ "X_ZYXEL_V4TrustDomain", PARAMETER_ATTR_WRITE, 65, json_type_string},
    { "X_ZYXEL_ROMD_Action", PARAMETER_ATTR_WRITE, 9, json_type_string},
	{ "X_ZYXEL_V6TrustDomain", PARAMETER_ATTR_WRITE, 257, json_type_string},
	{ "X_ZYXEL_IPv6_Protocol", PARAMETER_ATTR_WRITE, 0, json_type_boolean},
	{ "X_ZYXEL_IPv4_Protocol", PARAMETER_ATTR_WRITE, 0, json_type_boolean},
	{ "X_ZYXEL_AcsSpvNotifyRequired", PARAMETER_ATTR_WRITE, 0, json_type_boolean},
	{ "X_ZYXEL_AcsUrlModifyAndClearTransData", PARAMETER_ATTR_WRITE, 0, json_type_boolean},
	{ NULL, 0, 0, 0}
};

tr98Parameter_t para_MgabDev[] = {
	{ "ManufacturerOUI", PARAMETER_ATTR_READONLY, 7, json_type_string},
	{ "SerialNumber", PARAMETER_ATTR_READONLY, 65, json_type_string},
	{ "ProductClass", PARAMETER_ATTR_READONLY, 65, json_type_string},
	{ "Host", PARAMETER_ATTR_READONLY, 1025, json_type_string},
	{ NULL, 0, 0, 0}
};

