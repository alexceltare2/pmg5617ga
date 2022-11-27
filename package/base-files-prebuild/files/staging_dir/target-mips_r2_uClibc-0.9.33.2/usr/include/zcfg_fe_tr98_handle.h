/*All TR98 Full Path Name*/
#define TR98_IGD								"InternetGatewayDevice"
#define TR98_SERVICE                              "InternetGatewayDevice.Services"
#define TR98_VOICE_SRV                            "InternetGatewayDevice.Services.VoiceService.i"
#define TR98_VOICE_CAPB                           "InternetGatewayDevice.Services.VoiceService.i.Capabilities"
#define TR98_VOICE_CAPB_SIP                       "InternetGatewayDevice.Services.VoiceService.i.Capabilities.SIP"
#define TR98_VOICE_CAPB_MGCP                      "InternetGatewayDevice.Services.VoiceService.i.Capabilities.MGCP"
#define TR98_VOICE_CAPB_H323                      "InternetGatewayDevice.Services.VoiceService.i.Capabilities.H323"
#define TR98_VOICE_CAPB_CODEC                     "InternetGatewayDevice.Services.VoiceService.i.Capabilities.Codec.i"
#define TR98_VOICE_PROF                           "InternetGatewayDevice.Services.VoiceService.i.VoiceProfile.i"
#define TR98_VOICE_PROF_SRV_PRO_INFO              "InternetGatewayDevice.Services.VoiceService.i.VoiceProfile.i.ServiceProviderInfo"
#define TR98_VOICE_PROF_SIP                       "InternetGatewayDevice.Services.VoiceService.i.VoiceProfile.i.SIP"
#define TR98_VOICE_PROF_SIP_SUBSCRIBE_OBJ         "InternetGatewayDevice.Services.VoiceService.i.VoiceProfile.i.SIP.EventSubscribe.i"
#define TR98_VOICE_PROF_SIP_RESP_MAP_OBJ          "InternetGatewayDevice.Services.VoiceService.i.VoiceProfile.i.SIP.ResponseMap.i"
#define TR98_VOICE_PROF_RTP                       "InternetGatewayDevice.Services.VoiceService.i.VoiceProfile.i.RTP"
#define TR98_VOICE_PROF_RTP_RTCP                  "InternetGatewayDevice.Services.VoiceService.i.VoiceProfile.i.RTP.RTCP"
#define TR98_VOICE_PROF_RTP_SRTP                  "InternetGatewayDevice.Services.VoiceService.i.VoiceProfile.i.RTP.SRTP"
#define TR98_VOICE_PROF_RTP_REDUNDANCY            "InternetGatewayDevice.Services.VoiceService.i.VoiceProfile.i.RTP.Redundancy"
#define TR98_VOICE_PROF_NUM_PLAN                  "InternetGatewayDevice.Services.VoiceService.i.VoiceProfile.i.NumberingPlan"
#define TR98_VOICE_PROF_NUM_PLAN_PREFIX_INFO      "InternetGatewayDevice.Services.VoiceService.i.VoiceProfile.i.NumberingPlan.PrefixInfo.i"
#define TR98_VOICE_PROF_TONE                      "InternetGatewayDevice.Services.VoiceService.i.VoiceProfile.i.Tone"
#define TR98_VOICE_PROF_TONE_EVENT                "InternetGatewayDevice.Services.VoiceService.i.VoiceProfile.i.Tone.Event.i"
#define TR98_VOICE_PROF_TONE_DESCRIPTION          "InternetGatewayDevice.Services.VoiceService.i.VoiceProfile.i.Tone.Description.i"
#define TR98_VOICE_PROF_TONE_PATTERN              "InternetGatewayDevice.Services.VoiceService.i.VoiceProfile.i.Tone.Pattern.i"
#define TR98_VOICE_PROF_FAX_T38                   "InternetGatewayDevice.Services.VoiceService.i.VoiceProfile.i.FaxT38"
#define TR98_VOICE_LINE                           "InternetGatewayDevice.Services.VoiceService.i.VoiceProfile.i.Line.i"
#define TR98_VOICE_LINE_SIP                       "InternetGatewayDevice.Services.VoiceService.i.VoiceProfile.i.Line.i.SIP"
#define TR98_VOICE_LINE_SIP_EVENT_SUBS            "InternetGatewayDevice.Services.VoiceService.i.VoiceProfile.i.Line.i.SIP.EventSubscribe.i"
#define TR98_VOICE_LINE_RINGER                    "InternetGatewayDevice.Services.VoiceService.i.VoiceProfile.i.Line.i.Ringer"
#define TR98_VOICE_LINE_RINGER_EVENT              "InternetGatewayDevice.Services.VoiceService.i.VoiceProfile.i.Line.i.Ringer.Event.i"
#define TR98_VOICE_LINE_RINGER_DESCRIPTION        "InternetGatewayDevice.Services.VoiceService.i.VoiceProfile.i.Line.i.Ringer.Description.i"
#define TR98_VOICE_LINE_RINGER_PATTERN            "InternetGatewayDevice.Services.VoiceService.i.VoiceProfile.i.Line.i.Ringer.Pattern.i"
#define TR98_VOICE_LINE_CALLING_FEATURE           "InternetGatewayDevice.Services.VoiceService.i.VoiceProfile.i.Line.i.CallingFeatures"
#define TR98_VOICE_LINE_PROCESSING                "InternetGatewayDevice.Services.VoiceService.i.VoiceProfile.i.Line.i.VoiceProcessing"
#define TR98_VOICE_LINE_CODEC                     "InternetGatewayDevice.Services.VoiceService.i.VoiceProfile.i.Line.i.Codec"
#define TR98_VOICE_LINE_CODEC_LIST                "InternetGatewayDevice.Services.VoiceService.i.VoiceProfile.i.Line.i.Codec.List.i"
#define TR98_VOICE_LINE_SESSION                   "InternetGatewayDevice.Services.VoiceService.i.VoiceProfile.i.Line.i.Session.i"
#define TR98_VOICE_LINE_STATS                     "InternetGatewayDevice.Services.VoiceService.i.VoiceProfile.i.Line.i.Stats"
#define TR98_VOICE_PHY_INTF                       "InternetGatewayDevice.Services.VoiceService.i.PhyInterface.i"
#define TR98_VOICE_PSTN                           "InternetGatewayDevice.Services.VoiceService.i.X_ZYXEL_PSTN.i"
#ifdef USE_OLD_VOIP_PREFIX
#define TR98_VOICE_COMMON                         "InternetGatewayDevice.Services.VoiceService.i.X_ZyXEL_COM_Common"
#else
#define TR98_VOICE_COMMON                         "InternetGatewayDevice.Services.VoiceService.i.X_ZYXEL_Common"
#endif
#define TR98_VOICE_PHONE_BOOK                     "InternetGatewayDevice.Services.VoiceService.i.X_ZYXEL_VoicePhoneBook.i"
#define TR98_VOICE_FXO                            "InternetGatewayDevice.Services.VoiceService.i.X_ZYXEL_FXO"
#define TR98_VOICE_FXO_PORT                       "InternetGatewayDevice.Services.VoiceService.i.X_ZYXEL_FXO.Port.i"
#define TR98_CAPB                     "InternetGatewayDevice.Capabilities"
#define TR98_PERF_DIAG                "InternetGatewayDevice.Capabilities.PerformanceDiagnostic"
#define TR98_DEV_INFO                 "InternetGatewayDevice.DeviceInfo"
#define TR98_VEND_CONF_FILE           "InternetGatewayDevice.DeviceInfo.VendorConfigFile.i"
#define TR98_PROC_ST                  "InternetGatewayDevice.DeviceInfo.ProcessStatus"
#define TR98_PROC_ST_PS               "InternetGatewayDevice.DeviceInfo.ProcessStatus.Process.i"
#define TR98_DEV_CONF                 "InternetGatewayDevice.DeviceConfig"
#define TR98_MGMT_SRV                 "InternetGatewayDevice.ManagementServer"
#define TR98_MGAB_DEV                 "InternetGatewayDevice.ManagementServer.ManageableDevice.i"
#define TR98_TIME                     "InternetGatewayDevice.Time"
#define TR98_USR_INTF                 "InternetGatewayDevice.UserInterface"
#define TR98_CAPT_PORTAL              "InternetGatewayDevice.CaptivePortal"
#define TR98_L3_FWD                   "InternetGatewayDevice.Layer3Forwarding"
#define TR98_FWD                      "InternetGatewayDevice.Layer3Forwarding.Forwarding.i"
#define TR98_L2_BR                    "InternetGatewayDevice.Layer2Bridging"
#define TR98_BR                       "InternetGatewayDevice.Layer2Bridging.Bridge.i"
#define TR98_PORT                     "InternetGatewayDevice.Layer2Bridging.Bridge.i.Port.i"
#define TR98_VLAN                     "InternetGatewayDevice.Layer2Bridging.Bridge.i.VLAN.i"
#define TR98_FILTER                   "InternetGatewayDevice.Layer2Bridging.Filter.i"
#define TR98_MARK                     "InternetGatewayDevice.Layer2Bridging.Marking.i"
#define TR98_AVAI_INTF                "InternetGatewayDevice.Layer2Bridging.AvailableInterface.i"
#define TR98_QUE_MGMT                 "InternetGatewayDevice.QueueManagement"
#define TR98_CLS                      "InternetGatewayDevice.QueueManagement.Classification.i"
#define TR98_APP                      "InternetGatewayDevice.QueueManagement.App.i"
#define TR98_FLOW                     "InternetGatewayDevice.QueueManagement.Flow.i"
#define TR98_POLICER                  "InternetGatewayDevice.QueueManagement.Policer.i"
#define TR98_QUE                      "InternetGatewayDevice.QueueManagement.Queue.i"
#define TR98_SHAPER					  "InternetGatewayDevice.QueueManagement.X_ZYXEL_Shaper.i"
#define TR98_QUE_STAT                 "InternetGatewayDevice.QueueManagement.QueueStats.i"
#define TR98_LAN_CONF_SEC             "InternetGatewayDevice.LANConfigSecurity"
#define TR98_IP_PING_DIAG             "InternetGatewayDevice.IPPingDiagnostics"
#define TR98_TRA_RT_DIAG              "InternetGatewayDevice.TraceRouteDiagnostics"
#define TR98_RT_HOP                   "InternetGatewayDevice.TraceRouteDiagnostics.RouteHops.i"
#define TR98_DL_DIAG                  "InternetGatewayDevice.DownloadDiagnostics"
#define TR98_UL_DIAG                  "InternetGatewayDevice.UploadDiagnostics"
#define TR98_UDP_ECHO_CONF            "InternetGatewayDevice.UDPEchoConfig"
#define TR98_UDP_ECHO_DIAG            "InternetGatewayDevice.X_ZYXEL_UDPEchoDiagnostics"
#define TR98_UDP_ECHO_DIAG_PAK_RST    "InternetGatewayDevice.X_ZYXEL_UDPEchoDiagnostics.IndividualPacketResult.i"
#define TR98_LAN_DEV                  "InternetGatewayDevice.LANDevice.i"
#define TR98_LAN_HOST_CONF_MGMT       "InternetGatewayDevice.LANDevice.i.LANHostConfigManagement"
#define TR98_IP_INTF                  "InternetGatewayDevice.LANDevice.i.LANHostConfigManagement.IPInterface.i"
#ifdef LANIPALIAS
#define TR98_IP_ALIAS         "InternetGatewayDevice.LANDevice.i.LANHostConfigManagement.IPInterface.i.X_ZYXEL_IPAlias.i"
#endif
#ifdef IPV6INTERFACE_PROFILE
#define TR98_IP_INTF_IPV6ADDR         "InternetGatewayDevice.LANDevice.i.LANHostConfigManagement.IPInterface.i.X_ZYXEL_IPv6Address.i"
#define TR98_IP_INTF_IPV6PREFIX       "InternetGatewayDevice.LANDevice.i.LANHostConfigManagement.IPInterface.i.X_ZYXEL_IPv6Prefix.i"
#endif
#ifdef ROUTERADVERTISEMENT_PROFILE
#define TR98_IP_INTF_ROUTERADVER      "InternetGatewayDevice.LANDevice.i.LANHostConfigManagement.IPInterface.i.X_ZYXEL_RouterAdvertisement"
#endif
#ifdef IPV6SERVER_PROFILE
#define TR98_IP_INTF_DHCPV6SRV        "InternetGatewayDevice.LANDevice.i.LANHostConfigManagement.IPInterface.i.X_ZYXEL_DHCPv6Server"
#endif
#define TR98_DHCP_STATIC_ADDR         "InternetGatewayDevice.LANDevice.i.LANHostConfigManagement.DHCPStaticAddress.i"
#define TR98_DHCP_OPT                 "InternetGatewayDevice.LANDevice.i.LANHostConfigManagement.DHCPOption.i"
#ifdef ZyXEL_DHCP_OPTION125
#define TR98_VENDOR_SPECIFIC          "InternetGatewayDevice.LANDevice.i.LANHostConfigManagement.X_ZYXEL_VendorSpecific"
#define TR98_VENDOR_SPECIFIC_PROF     "InternetGatewayDevice.LANDevice.i.LANHostConfigManagement.X_ZYXEL_VendorSpecific.Profile.i"
#endif
#define TR98_DHCP_COND_SERVPOOL       "InternetGatewayDevice.LANDevice.i.LANHostConfigManagement.DHCPConditionalServingPool.i"
#define TR98_SERVPOOL_DHCP_STATICADDR "InternetGatewayDevice.LANDevice.i.LANHostConfigManagement.DHCPConditionalServingPool.i.DHCPStaticAddress.i"
#define TR98_SERVPOOL_DHCP_OPT        "InternetGatewayDevice.LANDevice.i.LANHostConfigManagement.DHCPConditionalServingPool.i.DHCPOption.i"
#define TR98_LAN_ETH_INTF_CONF        "InternetGatewayDevice.LANDevice.i.LANEthernetInterfaceConfig.i"
#define TR98_LAN_ETH_INTF_CONF_STAT   "InternetGatewayDevice.LANDevice.i.LANEthernetInterfaceConfig.i.Stats"
#define TR98_LAN_USB_INTF_CONF        "InternetGatewayDevice.LANDevice.i.LANUSBInterfaceConfig.i"
#define TR98_LAN_USB_INTF_CONF_STAT   "InternetGatewayDevice.LANDevice.i.LANUSBInterfaceConfig.i.Stats"
#define TR98_LAN_DEV_WLAN_CFG         "InternetGatewayDevice.LANDevice.i.WLANConfiguration.i"
#define TR98_WLAN_CFG_STAT            "InternetGatewayDevice.LANDevice.i.WLANConfiguration.i.Stats"
#define TR98_WPS                      "InternetGatewayDevice.LANDevice.i.WLANConfiguration.i.WPS"
#define TR98_REG                      "InternetGatewayDevice.LANDevice.i.WLANConfiguration.i.WPS.Registrar.i"
#define TR98_ASSOC_DEV                "InternetGatewayDevice.LANDevice.i.WLANConfiguration.i.AssociatedDevice.i"
#define TR98_ASSOC_DEV_STAT           "InternetGatewayDevice.LANDevice.i.WLANConfiguration.i.AssociatedDevice.i.Stats"
#define TR98_WEP_KEY                  "InternetGatewayDevice.LANDevice.i.WLANConfiguration.i.WEPKey.i"
#define TR98_PSK                      "InternetGatewayDevice.LANDevice.i.WLANConfiguration.i.PreSharedKey.i"
#define TR98_AP_WMM_PARAM             "InternetGatewayDevice.LANDevice.i.WLANConfiguration.i.APWMMParameter.i"
#define TR98_STA_WMM_PARAM            "InternetGatewayDevice.LANDevice.i.WLANConfiguration.i.STAWMMParameter.i"
#define TR98_HOSTS                    "InternetGatewayDevice.LANDevice.i.Hosts"
#define TR98_HOST                     "InternetGatewayDevice.LANDevice.i.Hosts.Host.i"
#ifdef ONECONNECT
#define TR98_ONECONNECT_EXT			  "InternetGatewayDevice.LANDevice.i.Hosts.Host.i.X_ZYXEL_EXT"
#endif
#define TR98_NEIBOR_WIFI_DIAG         "InternetGatewayDevice.X_ZYXEL_NeighboringWiFiDiagnostic"
#define TR98_NEIBOR_WIFI_DIAG_RESULT  "InternetGatewayDevice.X_ZYXEL_NeighboringWiFiDiagnostic.Result.i"
#define TR98_LAN_INTF                 "InternetGatewayDevice.LANInterfaces"
#define TR98_LAN_INTF_ETH_INTF_CONF   "InternetGatewayDevice.LANInterfaces.LANEthernetInterfaceConfig.i"
#define TR98_USB_INTF_CONF            "InternetGatewayDevice.LANInterfaces.USBInterfaceConfig.i"
#define TR98_LAN_INTF_WLAN_CFG        "InternetGatewayDevice.LANInterfaces.WLANConfiguration.i"
#define TR98_WAN_DEV                  "InternetGatewayDevice.WANDevice.i"
#define TR98_WAN_COMM_INTF_CONF       "InternetGatewayDevice.WANDevice.i.WANCommonInterfaceConfig"
#define TR98_WAN_COMM_INTF_CONNECT    "InternetGatewayDevice.WANDevice.i.WANCommonInterfaceConfig.Connection.i"
#define TR98_WAN_DSL_INTF_CONF        "InternetGatewayDevice.WANDevice.i.WANDSLInterfaceConfig"
#define TR98_WAN_DSL_INTF_TEST_PARAM  "InternetGatewayDevice.WANDevice.i.WANDSLInterfaceConfig.TestParams"
#define TR98_WAN_DSL_INTF_CONF_STAT   "InternetGatewayDevice.WANDevice.i.WANDSLInterfaceConfig.Stats"
#define TR98_TTL                      "InternetGatewayDevice.WANDevice.i.WANDSLInterfaceConfig.Stats.Total"
#define TR98_ST                       "InternetGatewayDevice.WANDevice.i.WANDSLInterfaceConfig.Stats.Showtime"
#define TR98_LST_SHOWTIME             "InternetGatewayDevice.WANDevice.i.WANDSLInterfaceConfig.Stats.LastShowtime"
#define TR98_CURRENT_DAY              "InternetGatewayDevice.WANDevice.i.WANDSLInterfaceConfig.Stats.CurrentDay"
#define TR98_QTR_HR                   "InternetGatewayDevice.WANDevice.i.WANDSLInterfaceConfig.Stats.QuarterHour"
#define TR98_WAN_ETH_INTF_CONF        "InternetGatewayDevice.WANDevice.i.WANEthernetInterfaceConfig"
#define TR98_WAN_ETH_INTF_CONF_STAT   "InternetGatewayDevice.WANDevice.i.WANEthernetInterfaceConfig.Stats"
#define TR98_WAN_DSL_CONN_MGMT        "InternetGatewayDevice.WANDevice.i.WANDSLConnectionManagement"
#define TR98_WAN_DSL_CONN_SRVC        "InternetGatewayDevice.WANDevice.i.WANDSLConnectionManagement.ConnectionService.i"
#define TR98_WAN_DSL_DIAG             "InternetGatewayDevice.WANDevice.i.WANDSLDiagnostics"
#define TR98_WAN_CONN_DEV             "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i"
#define TR98_WAN_DSL_LINK_CONF        "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.WANDSLLinkConfig"
#define TR98_WAN_ATM_F5_LO_DIAG       "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.WANATMF5LoopbackDiagnostics"
#define TR98_WAN_ATM_F4_LO_DIAG       "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.X_ZYXEL_WANATMF4LoopbackDiagnostics"
#define TR98_WAN_PTM_LINK_CONF        "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.WANPTMLinkConfig"
#define TR98_WAN_PTM_LINK_CONF_STAT   "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.WANPTMLinkConfig.Stats"
#define TR98_WAN_ETH_LINK_CONF        "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.WANEthernetLinkConfig"
#define TR98_WAN_POTS_LINK_CONF       "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.WANPOTSLinkConfig"
#define TR98_WAN_IP_CONN              "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.WANIPConnection.i"
#define TR98_DHCP_CLIENT              "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.WANIPConnection.i.DHCPClient"
#define TR98_SENT_DHCP_OPT            "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.WANIPConnection.i.DHCPClient.SentDHCPOption.i"
#define TR98_REQ_DHCP_OPT             "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.WANIPConnection.i.DHCPClient.ReqDHCPOption.i"
#define TR98_WAN_IP_PORT_MAP          "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.WANIPConnection.i.PortMapping.i"
#define TR98_WAN_IP_PORT_TRIGGER      "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.WANIPConnection.i.X_ZYXEL_PortTriggering.i"
#define TR98_WAN_IP_ADDR_MAPPING      "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.WANIPConnection.i.X_ZYXEL_AddrMapping.i"
#define TR98_WAN_IP_CONN_STAT         "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.WANIPConnection.i.Stats"
#define TR98_WAN_IP_CONN_MLD		  "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.WANIPConnection.i.X_ZYXEL_MLD"
#ifdef IPV6INTERFACE_PROFILE
#define TR98_WAN_IP_CONN_IPV6ADDR     "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.WANIPConnection.i.X_ZYXEL_IPv6Address.i"
#define TR98_WAN_IP_CONN_IPV6PREFIX	  "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.WANIPConnection.i.X_ZYXEL_IPv6Prefix.i"
#endif
#ifdef DHCPV6CLIENT_PROFILE
#define TR98_WAN_IP_CONN_DHCPV6CLIENT "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.WANIPConnection.i.X_ZYXEL_DHCPv6Client"
#endif
#ifdef IPV6RD_PROFILE
#define TR98_WAN_IP_CONN_IPV6RD	      "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.WANIPConnection.i.X_ZYXEL_IPv6rd"
#endif
#define TR98_WAN_PPP_CONN             "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.WANPPPConnection.i"
#define TR98_WAN_PPP_PORT_MAP         "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.WANPPPConnection.i.PortMapping.i"
#define TR98_WAN_PPP_PORT_TRIGGER     "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.WANPPPConnection.i.X_ZYXEL_PortTriggering.i"
#define TR98_WAN_PPP_ADDR_MAPPING     "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.WANPPPConnection.i.X_ZYXEL_AddrMapping.i"
#define TR98_WAN_PPP_CONN_STAT        "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.WANPPPConnection.i.Stats"
#define TR98_WAN_PPP_CONN_MLD		  "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.WANPPPConnection.i.X_ZYXEL_MLD"
#ifdef IPV6INTERFACE_PROFILE
#define TR98_WAN_PPP_CONN_IPV6ADDR     "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.WANPPPConnection.i.X_ZYXEL_IPv6Address.i"
#define TR98_WAN_PPP_CONN_IPV6PREFIX   "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.WANPPPConnection.i.X_ZYXEL_IPv6Prefix.i"
#endif
#ifdef DHCPV6CLIENT_PROFILE
#define TR98_WAN_PPP_CONN_DHCPV6CLIENT "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.WANPPPConnection.i.X_ZYXEL_DHCPv6Client"
#endif
#ifdef IPV6RD_PROFILE
#define TR98_WAN_PPP_CONN_IPV6RD       "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.WANPPPConnection.i.X_ZYXEL_IPv6rd"
#endif
#define TR98_WWAN_INTERFACE_CONFIG       "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.X_ZYXEL_WWANInterfaceConfig"
#define TR98_WWAN_INTERFACE_CONFIG_STATUS       "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.X_ZYXEL_WWANInterfaceConfig.Stats"
#define TR98_WWAN_EMAIL_CONFIG               "InternetGatewayDevice.WANDevice.i.WANConnectionDevice.i.X_ZYXEL_WWANInterfaceConfig.Email.i"
#ifdef CONFIG_XPON_SUPPORT
#define TR98_WAN_PON_INTF_CONF        "InternetGatewayDevice.WANDevice.i.X_ZYZEL_WANPonInterfaceConfig"
#define TR98_WAN_PON_INTF_CONF_STAT   "InternetGatewayDevice.WANDevice.i.X_ZYZEL_WANPonInterfaceConfig.Stats"
#endif

#define TR98_FIREWALL                 "InternetGatewayDevice.Firewall"
#define TR98_FIREWALL_LEVEL           "InternetGatewayDevice.Firewall.Level.i"
#define TR98_FIREWALL_CHAIN           "InternetGatewayDevice.Firewall.Chain.i"
#define TR98_FIREWALL_CHAIN_RULE      "InternetGatewayDevice.Firewall.Chain.i.Rule.i"

#define TR98_STD_UPNP				  "InternetGatewayDevice.UPnP"
#define TR98_STD_UPNP_DEV			  "InternetGatewayDevice.UPnP.Device"

#define TR98_ZYXEL_EXT                "InternetGatewayDevice.X_ZYXEL_EXT"
#define TR98_DNS_RT_ENTRY             "InternetGatewayDevice.X_ZYXEL_EXT.DNSRouteEntry.i"
#define TR98_DNS_ENTRY     		      "InternetGatewayDevice.X_ZYXEL_EXT.DNSEntry.i"
#define TR98_D_DNS                    "InternetGatewayDevice.X_ZYXEL_EXT.DynamicDNS"
#ifdef ZCFG_TR64
#define TR98_TR064	                  "InternetGatewayDevice.X_ZYXEL_EXT.TR064"
#else
#endif
#define TR98_VLAN_GROUP	              "InternetGatewayDevice.X_ZYXEL_EXT.VlanGroup.i"
#define TR98_EMAIL_NOTIFY             "InternetGatewayDevice.X_ZYXEL_EXT.EmailNotification"
#define TR98_EMAIL_SERVICE            "InternetGatewayDevice.X_ZYXEL_EXT.EmailNotification.EmailService.i"
#define TR98_EMAIL_EVENT_CFG          "InternetGatewayDevice.X_ZYXEL_EXT.EmailNotification.EmailEventConfig.i"
#define TR98_SYS_INFO                 "InternetGatewayDevice.X_ZYXEL_EXT.System_Info"
#define TR98_SNMP	                  "InternetGatewayDevice.X_ZYXEL_EXT.SNMP"
#define TR98_SNMP_TRAP                "InternetGatewayDevice.X_ZYXEL_EXT.SNMP.TrapAddr.i"
#define TR98_SCHEDULE                 "InternetGatewayDevice.X_ZYXEL_EXT.Schedule.i"
#define TR98_REMO_MGMT                "InternetGatewayDevice.X_ZYXEL_EXT.RemoteManagement"
#define TR98_REMO_SRV                 "InternetGatewayDevice.X_ZYXEL_EXT.RemoteManagement.Service.i"
#define TR98_SP_REMO_SRV              "InternetGatewayDevice.X_ZYXEL_EXT.RemoteManagement.SpService.i"
#define TR98_IEEE8021AG               "InternetGatewayDevice.X_ZYXEL_EXT.IEEE8021ag"
#ifdef ZYXEL_ETHOAM_TMSCTL
#define TR98_IEEE8023AH               "InternetGatewayDevice.X_ZYXEL_EXT.IEEE8023ah"
#endif
#define TR98_SAMBA		              "InternetGatewayDevice.X_ZYXEL_EXT.SAMBA"
#define TR98_UPNP		              "InternetGatewayDevice.X_ZYXEL_EXT.UPNP"
#define TR98_REMO_TRUSTDOMAIN		  "InternetGatewayDevice.X_ZYXEL_EXT.RemoteManagement.TrustDomain.i"
#define TR98_SP_TRUSTDOMAIN		  "InternetGatewayDevice.X_ZYXEL_EXT.RemoteManagement.SpTrustDomain.i"
#define TR98_IGMP                     "InternetGatewayDevice.X_ZYXEL_EXT.IGMP"
#define TR98_LOG_SETTING              "InternetGatewayDevice.X_ZYXEL_EXT.Log_Setting"
#define TR98_LOG_CLASSIFY             "InternetGatewayDevice.X_ZYXEL_EXT.Log_Setting.LogClassify.i"
#define TR98_LOG_CATEGORY		      "InternetGatewayDevice.X_ZYXEL_EXT.Log_Setting.LogClassify.i.Category.i"

#if defined(SUNRISE_RANDOM_PASSWORD) || defined(SOL_TR69_LOGINACCOUNT) || defined(ZYXEL_SUPPORT_TR98_LOGIN_ACCOUNT)
#define TR98_LOG_CFG           		  "InternetGatewayDevice.X_ZYXEL_EXT.LoginCfg"
#define TR98_LOG_CFG_GP           	  "InternetGatewayDevice.X_ZYXEL_EXT.LoginCfg.LogGp.i"
#define TR98_LOG_CFG_GP_ACCOUNT       "InternetGatewayDevice.X_ZYXEL_EXT.LoginCfg.LogGp.i.Account.i"
#endif

#define TR98_MACFILTER		  		  "InternetGatewayDevice.X_ZYXEL_EXT.MacFilter"
#define TR98_MACFILTER_WHITELIST	  "InternetGatewayDevice.X_ZYXEL_EXT.MacFilter.WhiteList.i"
#define TR98_PAREN_CTL                "InternetGatewayDevice.X_ZYXEL_EXT.ParentalControl"
#define TR98_PAREN_CTL_PROF           "InternetGatewayDevice.X_ZYXEL_EXT.ParentalControl.Profile.i"
#define TR98_SEC		              "InternetGatewayDevice.X_ZYXEL_EXT.Security"
#define TR98_SEC_CERT		          "InternetGatewayDevice.X_ZYXEL_EXT.Security.Certificate.i"
#define TR98_GUI_CUSTOMIZATION		  "InternetGatewayDevice.X_ZYXEL_EXT.GUI_Customization"


#ifdef ONECONNECT
#define TR98_ONECONNECT		          "InternetGatewayDevice.X_ZYXEL_EXT.OneConnect"
#define TR98_ONECONNECT_SPEEDTESTINFO "InternetGatewayDevice.X_ZYXEL_EXT.SpeedTestInfo"
#endif

#ifdef ZYXEL_AP_STEERING
#define TR98_AP_STEERING		      "InternetGatewayDevice.X_ZYXEL_EXT.ApSteering"
#endif //#ifdef ZYXEL_AP_STEERING

#ifdef PROXIMITY_SENSOR_SUPPORT
#define TR98_PROXIMITY_SENSOR "InternetGatewayDevice.X_ZYXEL_EXT.ProximitySensor"
#endif //#ifdef PROXIMITY_SENSOR_SUPPORT


#ifdef ZyXEL_IPP_PRINTSERVER
#define TR98_PRINT_SERVER           "InternetGatewayDevice.X_ZYXEL_EXT.PrintServer"
#endif

#ifdef ZYXEL_LANDING_PAGE_FEATURE
#define TR98_LANDING_PAGE			"InternetGatewayDevice.X_ZYXEL_EXT.LandingPage"
#endif

#define TR98_FEATURE_FLAG			"InternetGatewayDevice.X_ZYXEL_EXT.FeatureFlag"

#define OBSOLETED 1
//#define ZYXEL_EXT 1

#define ATTR_INDEX_CREA ATTR_INDEXNODE|OBJECT_ATTR_CREATE

/* TR98 Full Path Name          Attribute	    Parameter List          Get func                 Set func                Add func          Del func         Notify func	Get Attr func		Set Attr func*/
tr98Object_t tr98Obj[] = {
{TR98_IGD,                      0,              para_Root,              rootObjGet,              NULL,                   NULL,             NULL,            NULL},
#ifdef CONFIG_PACKAGE_ZyIMS
{TR98_SERVICE,					0,				para_Service,			NULL,					 NULL,					 NULL,			   NULL,			NULL},
{TR98_VOICE_SRV,				ATTR_INDEXNODE,	para_VoiceSrv,			voiceSrvObjGet,			 NULL,					 NULL,			   NULL, voiceNotify, voiceSrvAttrGet, voiceSrvAttrSet},
{TR98_VOICE_CAPB,				0,				para_VoiceCapb,			voiceCapbObjGet,			 NULL,					 NULL,			   NULL, voiceNotify, voiceCapbAttrGet, voiceCapbAttrSet},
{TR98_VOICE_CAPB_SIP,			0,				para_VoiceCapbSip,		voiceCapbSipObjGet,		 NULL,					 NULL,			   NULL, voiceNotify, voiceCapbSipAttrGet, voiceCapbSipAttrSet},
//{TR98_VOICE_CAPB_MGCP                     },
//{TR98_VOICE_CAPB_H323     },
{TR98_VOICE_CAPB_CODEC,			ATTR_INDEXNODE,	para_VoiceCapbCodec,	voiceCapbCodecObjGet,		 NULL,					 NULL,			   NULL, voiceNotify, voiceCapbCodecAttrGet, voiceCapbCodecAttrSet},
{TR98_VOICE_PROF,				ATTR_INDEX_CREA,para_VoiceProf,			voiceProfObjGet,			 voiceProfSet,			 voiceProfAdd,	   voiceProfDel, voiceNotify, voiceProfAttrGet, voiceProfAttrSet},
//{TR98_VOICE_PROF_SRV_PRO_INFO         },
{TR98_VOICE_PROF_SIP,			0,				para_VoiceProfSip,		voiceProfSipObjGet,		 voiceProfSipSet,		 NULL,			   NULL, voiceNotify, voiceProfSipAttrGet, voiceProfSipAttrSet},
//{TR98_VOICE_PROF_SIP_SUBSCRIBE_OBJ      },
//{TR98_VOICE_PROF_SIP_RESP_MAP_OBJ       },
{TR98_VOICE_PROF_RTP,			0,				para_VoiceProfRtp,		voiceProfRtpObjGet,			voiceProfRtpObjSet,		NULL,		NULL, voiceNotify, voiceProfRtpAttrGet, voiceProfRtpAttrSet},
{TR98_VOICE_PROF_RTP_RTCP,		0,				para_VoiceProfRtpRtcp,	voiceProfRtpRtcpObjGet,		voiceProfRtpRtcpObjSet,	NULL,		NULL, voiceNotify, voiceProfRtpRtcpAttrGet, voiceProfRtpRtcpAttrSet},
{TR98_VOICE_PROF_RTP_SRTP,		0,				para_VoiceProfRtpSrtp,	voiceProfRtpSrtpObjGet,		voiceProfRtpSrtpObjSet,	NULL,		NULL, voiceNotify, voiceProfRtpSrtpAttrGet, voiceProfRtpSrtpAttrSet},
//{TR98_VOICE_PROF_RTP_REDUNDANCY         },
{TR98_VOICE_PROF_NUM_PLAN, 0 ,	para_VoiceProfNumPlan, voiceProfNumPlanObjGet, voiceProfNumPlanObjSet,	NULL,	NULL, voiceNotify, voiceProfNumPlanAttrGet, voiceProfNumPlanAttrSet},
{TR98_VOICE_PROF_NUM_PLAN_PREFIX_INFO, 0 ,	para_VoiceProfNumPlanPrefixInfo, voiceProfNumPlanPrefixInfoObjGet, voiceProfNumPlanPrefixInfoObjSet,	NULL,	NULL, voiceNotify, voiceProfNumPlanPrefixInfoAttrGet, voiceProfNumPlanPrefixInfoAttrSet},
//{TR98_VOICE_PROF_TONE                   },
//{TR98_VOICE_PROF_TONE_EVENT             },
//{TR98_VOICE_PROF_TONE_DESCRIPTION       },
//{TR98_VOICE_PROF_TONE_PATTERN           },
{TR98_VOICE_PROF_FAX_T38, 0 ,	para_VoiceProfFaxT38, voiceProfFaxT38ObjGet, voiceProfFaxT38ObjSet,	NULL,	NULL, voiceNotify, voiceProfFaxT38AttrGet, voiceProfFaxT38AttrSet},
{TR98_VOICE_LINE,				ATTR_INDEX_CREA,para_VoiceLine,			voiceLineObjGet,			 voiceLineSet,			 voiceLineAdd,	   voiceLineDel,	voiceNotify, voiceLineAttrGet, voiceLineAttrSet},
{TR98_VOICE_LINE_SIP,			0,				para_VoiceLineSip,		voiceLineSipObjGet,		 voiceLineSipSet,		 NULL,			   NULL,	voiceNotify, voiceLineSipAttrGet, voiceLineSipAttrSet},
//{TR98_VOICE_LINE_SIP_EVENT_SUBS         },
//{TR98_VOICE_LINE_RINGER                 },
//{TR98_VOICE_LINE_RINGER_EVENT           },
//{TR98_VOICE_LINE_RINGER_DESCRIPTION     },
//{TR98_VOICE_LINE_RINGER_PATTERN         },
{TR98_VOICE_LINE_CALLING_FEATURE,			0 ,  para_VoiceLineCallingFeature , voiceLineCallingFeatureObjGet  , voiceLineCallingFeatureObjSet , NULL ,NULL , voiceNotify, voiceLineCallingFeatureAttrGet ,voiceLineCallingFeatureAttrSet },
{TR98_VOICE_LINE_PROCESSING,	0,				para_VoiceLineProcessing, voiceLineProcObjGet,		 voiceLineProcSet,		 NULL,			   NULL,	voiceNotify, voiceLineProcAttrGet, voiceLineProcAttrSet},
{TR98_VOICE_LINE_CODEC,			0, 				para_VoiceLineCodec, 	voiceLineCodecObjGet,       NULL,					 NULL,			   NULL,	voiceNotify, voiceLineCodecAttrGet, voiceLineCodecAttrSet},
{TR98_VOICE_LINE_CODEC_LIST,	ATTR_INDEXNODE,	para_VoiceLineCodecList, voiceLineCodecListObjGet,	 voiceLineCodecListObjSet,					 NULL,			   NULL,	voiceNotify, voiceLineCodecListAttrGet, voiceLineCodecListAttrSet},
//{TR98_VOICE_LINE_SESSION                },
{TR98_VOICE_LINE_STATS,			0,              para_VoiceLineStats,    voiceLineStatsObjGet,       voiceLineStatsObjSet,                   NULL,       NULL,	voiceNotify,voiceLineStatsAttrGet,voiceLineStatsAttrSet},
{TR98_VOICE_PHY_INTF,			ATTR_INDEXNODE,	para_VoicePhyIntf,		voicePhyIntfObjGet,		 voicePhyIntfSet,		 NULL,			   NULL,	voiceNotify, voicePhyIntfAttrGet, voicePhyIntfAttrSet},
//{TR98_VOICE_PSTN                        },
{TR98_VOICE_COMMON,				0,				para_VoiceCommon, 		voiceCommonObjGet,			 voiceCommonSet, 	NULL, 		NULL, 	NULL},
//{TR98_VOICE_PHONE_BOOK                  },
//{TR98_VOICE_FXO                         },
//{TR98_VOICE_FXO_PORT                    },
#endif
{TR98_CAPB,                     0,              NULL,                   NULL,                    NULL,                   NULL,             NULL,            NULL},
{TR98_PERF_DIAG,                0,              para_PerpDiag,          perfDiagObjGet,          NULL,                   NULL,             NULL,            NULL},
{TR98_DEV_INFO,                 0,              para_DevInfo,           devInfoObjGet,           devInfoObjSet,          NULL,             NULL,            devInfoObjNotify, devInfoObjAttrGet, devInfoObjAttrSet},
{TR98_VEND_CONF_FILE,           ATTR_INDEXNODE, para_DevInfoVendorCfg,                   devInfoVendorCfgObjGet,                    devInfoVendorCfgObjSet,                   NULL,             NULL,            NULL},
{TR98_PROC_ST, 				0,				    para_ProcSt,			devProcStGet,			 NULL, 		 NULL,			   NULL,			NULL},
{TR98_PROC_ST_PS,           ATTR_INDEXNODE,     para_ProcStPs,          devProcStPsGet,           NULL,          NULL,             NULL,        NULL},
//{TR98_DEV_CONF,                 0,              NULL,                   NULL,                    NULL,                   NULL,             NULL,            NULL},
{TR98_MGMT_SRV,                 0,              para_MgmtSrv,           mgmtSrvObjGet,           mgmtSrvObjSet,          NULL,             NULL,            NULL, mgmtSrvObjAttrGet, mgmtSrvObjAttrSet},
{TR98_MGAB_DEV,                 ATTR_INDEXNODE, para_MgabDev,           mgabDevObjGet,           NULL,                   NULL,             NULL,            NULL},
{TR98_TIME,                     0,              para_Time,              timeObjGet,              timeObjSet,             NULL,             NULL,            NULL},
//{TR98_USR_INTF,                 0,              NULL,                   NULL,                    NULL,                   NULL,             NULL,            NULL},
//{TR98_CAPT_PORTAL,              0,              NULL,                   NULL,                    NULL,                   NULL,             NULL,            NULL},
{TR98_L3_FWD,                   0,              para_L3Fwd,             l3fwdObjGet,             l3fwdObjSet,                   NULL,             NULL,            NULL, NULL, NULL},
{TR98_FWD,                      ATTR_INDEX_CREA,para_Fwd,               l3fwdFwdTbObjGet,        l3fwdFwdTbObjSet,       l3fwdFwdTbObjAdd, l3fwdFwdTbObjDel,  NULL, NULL, l3fwdFwdTbObjAttrSet},
{TR98_L2_BR,                    0,               para_L2Br,              l2BridingObjGet,         NULL,                   NULL,             NULL,            l2BridingObjNotify, l2BridingObjAttrGet, l2BridingObjAttrSet},
{TR98_BR,                       ATTR_INDEX_CREA, para_Br,                l2BrObjGet,              l2BrObjSet,             l2BrObjAdd,       l2BrObjDel,      l2BrObjNotify, l2BrObjAttrGet, l2BrObjAttrSet},
{TR98_PORT,                     ATTR_INDEX_CREA, para_Port,              l2BrPortObjGet,           l2BrPortObjSet,         l2BrPortObjAdd,   l2BrPortObjDel,   NULL,         NULL,           NULL},
{TR98_VLAN,                     ATTR_INDEX_CREA,  para_Vlan,              l2BrVlanObjGet,          l2BrVlanObjSet,        l2BrVlanObjAdd,   l2BrVlanObjDel,  l2BrVlanObjNotify, l2BrVlanObjAttrGet, l2BrVlanObjAttrSet},
{TR98_FILTER,                   ATTR_INDEX_CREA, para_Filter,            l2BrFilterObjGet,        l2BrFilterObjSet,       l2BrFilterObjAdd, l2BrFilterObjDel,l2BrFilterObjNotify, l2BrFilterObjAttrGet, l2BrFilterObjAttrSet},
{TR98_MARK,                     ATTR_INDEX_CREA, para_Mark,              NULL,                    NULL,                   NULL,             NULL,            NULL},
{TR98_AVAI_INTF,                ATTR_INDEXNODE,  para_AvaiIntf,          l2BrAvailableIntfObjGet, NULL,                   NULL,             NULL,            l2BrAvailableIntfObjNotify, l2BrAvailableIntfObjAttrGet, l2BrAvailableIntfObjAttrSet},
{TR98_QUE_MGMT,                 0,               para_qMgmt,          	qMgmtObjGet,     		   qMgmtSet,               NULL,             NULL,            qMgmtNotify, qMgmtAttrGet, qMgmtAttrSet},
{TR98_CLS,                      ATTR_INDEX_CREA, para_Cls,          	qMgmtClsObjGet,			   qMgmtClsSet,            qMgmtClsAdd,      qMgmtClsDel,     qMgmtClsNotify, qMgmtClsAttrGet, qMgmtClsAttrSet},
//{TR98_APP,                      ATTR_INDEX_CREA, NULL,                   NULL,                    NULL,                   NULL,             NULL,            NULL},
//{TR98_FLOW,                     ATTR_INDEX_CREA, NULL,                   NULL,                    NULL,                   NULL,             NULL,            NULL},
#ifdef CONFIG_XPON_SUPPORT
{TR98_POLICER,                  ATTR_INDEX_CREA, NULL,          NULL,            NULL,          NULL,     NULL,     NULL},
#else
{TR98_POLICER,                  ATTR_INDEX_CREA, para_Policer,          qMgmtPolicerGet,            qMgmtPolicerSet,          qMgmtPolicerAdd,     qMgmtPolicerDel,     NULL},
#endif
{TR98_QUE,                      ATTR_INDEX_CREA, para_Que,              qMgmtQueObjGet,			   qMgmtQueSet,            qMgmtQueAdd,      qMgmtQueDel,     qMgmtQueNotify, qMgmtQueAttrGet, qMgmtQueAttrSet},
#ifdef CONFIG_XPON_SUPPORT
{TR98_SHAPER,                   ATTR_INDEX_CREA, NULL,			NULL,	   	   NULL,         NULL,   NULL,  NULL, NULL, NULL},
#else
{TR98_SHAPER,                   ATTR_INDEX_CREA, para_Shaper,			qMgmtShaperObjGet,	   	   qMgmtShaperSet,         qMgmtShaperAdd,   qMgmtShaperDel,  qMgmtShaperNotify, qMgmtShaperAttrGet, qMgmtShaperAttrSet},
#endif
//{TR98_QUE_STAT,                 ATTR_INDEXNODE, NULL,                   NULL,                    NULL,                   NULL,             NULL,            NULL},
{TR98_LAN_CONF_SEC,             0,               para_LanConfSec,        lanConfSecObjGet,        lanConfSecObjSet,       NULL,             NULL,            lanConfSecObjNotify, lanConfSecObjAttrGet, lanConfSecObjAttrSet},
{TR98_IP_PING_DIAG,             0,              para_IpPingDiag,        ipPingDiagObjGet,        ipPingDiagObjSet,       NULL,             NULL,            NULL},
{TR98_TRA_RT_DIAG,              0,              para_TraceRtDiag,       traceRtDiagObjGet,       traceRtDiagObjSet,      NULL,             NULL,            NULL},
{TR98_RT_HOP,                   ATTR_INDEXNODE, para_RtHop,		        routeHopsObjGet,         NULL,                   NULL,             NULL,            NULL},
{TR98_DL_DIAG,                  0,              para_DlDiag,			dlDiagObjGet,            dlDiagObjSet,           NULL,             NULL,            NULL},
{TR98_UL_DIAG,                  0,              para_UlDiag,			ulDiagObjGet,            ulDiagObjSet,           NULL,             NULL,            NULL},
{TR98_UDP_ECHO_CONF,            0,              para_UdpEchoCfg,        udpEchoCfgObjGet,        udpEchoCfgObjSet,       NULL,             NULL,            NULL},
{TR98_UDP_ECHO_DIAG,			0,				para_UdpEchoDiag,		udpEchoDiagObjGet,		 udpEchoDiagObjSet,		 NULL,			   NULL,			NULL},
{TR98_UDP_ECHO_DIAG_PAK_RST,	ATTR_INDEXNODE,	para_UdpEchoDiagPakRst, udpEchoDiagPakRstObjGet, NULL, NULL, NULL, NULL, NULL, NULL},
{TR98_LAN_DEV,                  ATTR_INDEX_CREA,para_LanDev,            lanDevObjGet,            NULL,                   lanDevObjAdd,     lanDevObjDel,    NULL},
{TR98_LAN_HOST_CONF_MGMT,       0,              para_LanHostConfMgmt,   lanHostConfMgmtObjGet,   lanHostConfMgmtObjSet,  NULL,             NULL,            NULL},
{TR98_IP_INTF,                  ATTR_INDEX_CREA,para_IpIntf,		    lanIpIntfObjGet,         lanIpIntfObjSet,        lanIpIntfObjAdd,  lanIpIntfObjDel,	NULL},
#ifdef LANIPALIAS
{TR98_IP_ALIAS,            ATTR_INDEX_CREA, para_IpAlias, lanIpAliasObjGet, lanIpAliasObjSet, lanIpAliasObjAdd, lanIpIntfObjDel, NULL, NULL, NULL},
#endif
#ifdef IPV6INTERFACE_PROFILE
{TR98_IP_INTF_IPV6ADDR,         ATTR_INDEX_CREA,para_IpIntfV6Addr,		lanIpIntfV6AddrObjGet,   lanIpIntfV6AddrObjSet,  lanIpIntfV6AddrObjAdd,  lanIpIntfV6AddrObjDel,	NULL},
{TR98_IP_INTF_IPV6PREFIX,		ATTR_INDEX_CREA,para_IpIntfV6Prefix,	lanIpIntfV6PrefixObjGet, lanIpIntfV6PrefixObjSet,lanIpIntfV6PrefixObjAdd,lanIpIntfV6PrefixObjDel, NULL},
#endif
#ifdef ROUTERADVERTISEMENT_PROFILE
{TR98_IP_INTF_ROUTERADVER,      0,				para_IpIntfRouterAdver, lanIpIntfRouterAdverObjGet, lanIpIntfRouterAdverObjSet,        NULL,  NULL,	NULL},
#endif
#ifdef IPV6SERVER_PROFILE
{TR98_IP_INTF_DHCPV6SRV,        0,				para_IpIntfV6Srv,		lanIpIntfV6SrvObjGet,    lanIpIntfV6SrvObjSet,        NULL,  NULL,	NULL},
#endif
{TR98_DHCP_STATIC_ADDR,         ATTR_INDEX_CREA,para_DhcpStaticAddr,    lanDhcpStaticAddrObjGet, lanDhcpStaticAddrObjSet,lanDhcpStaticAddrObjAdd,lanDhcpStaticAddrObjDel, lanDhcpStaticAddrObjNotify, lanDhcpStaticAddrObjAttrGet, lanDhcpStaticAddrObjAttrSet},
{TR98_DHCP_OPT,                 ATTR_INDEX_CREA,para_DhcpOpt,           lanDhcpOptObjGet,        lanDhcpOptObjSet,       lanDhcpOptObjAdd, lanDhcpOptObjDel,lanDhcpOptObjNotify, lanDhcpOptObjAttrGet, lanDhcpOptObjAttrSet},
#ifdef ZyXEL_DHCP_OPTION125
{TR98_VENDOR_SPECIFIC,                 0,              para_VendorSpecific,          zyExtVendorSpecObjGet,          zyExtVendorSpecObjSet,         NULL,             NULL,            NULL, NULL, NULL},
{TR98_VENDOR_SPECIFIC_PROF,           ATTR_INDEX_CREA, para_VendorSpecificProf,     zyExtVendorSpecProfObjGet,     zyExtVendorSpecProfObjSet,    zyExtVendorSpecProfObjAdd,zyExtVendorSpecProfObjDel,NULL, NULL, NULL},
#endif
{TR98_DHCP_COND_SERVPOOL,       ATTR_INDEX_CREA,para_DhcpCondServPool,  lanDhcpCondServPoolObjGet,  lanDhcpCondServPoolObjSet,  lanDhcpCondServPoolObjAdd,  lanDhcpCondServPoolObjDel, lanDhcpCondServPoolObjNotify, lanDhcpCondServPoolObjAttrGet, lanDhcpCondServPoolObjAttrSet},
{TR98_SERVPOOL_DHCP_STATICADDR, ATTR_INDEX_CREA,para_DhcpCondServPoolDhcpStaticAddr,NULL, NULL, NULL, NULL, NULL, NULL, NULL},
{TR98_SERVPOOL_DHCP_OPT,        ATTR_INDEX_CREA,para_DhcpCondServPoolDhcpOpt,NULL,  NULL,  NULL,  NULL, NULL, NULL, NULL},
{TR98_LAN_ETH_INTF_CONF,        ATTR_INDEXNODE, para_LanEthIntfConf,    lanEthIntfConfObjGet,    lanEthIntfConfObjSet,   NULL,             NULL,            lanEthIntfConfObjNotify, lanEthIntfConfObjAttrGet, lanEthIntfConfObjAttrSet},
{TR98_LAN_ETH_INTF_CONF_STAT,   0,              para_LanEthIntfConfStat,lanEthIntfConfStatObjGet,NULL,                   NULL,             NULL,            NULL},
//{TR98_LAN_USB_INTF_CONF,        ATTR_INDEXNODE, NULL,                   NULL,                    NULL,                   NULL,             NULL,            NULL},
//{TR98_LAN_USB_INTF_CONF_STAT,   0,              NULL,                   NULL,                    NULL,                   NULL,             NULL,            NULL},
{TR98_LAN_DEV_WLAN_CFG,         ATTR_INDEXNODE,	para_LanDevWlanCfg,     lanDevWlanCfgObjGet,     lanDevWlanCfgObjSet, NULL, NULL, lanDevWlanCfgObjNotify, lanDevWlanCfgObjAttrGet, lanDevWlanCfgObjAttrSet},
{TR98_WLAN_CFG_STAT,            0,              para_LanDevWlanCfgStat, lanDevWlanCfgStatObjGet,        NULL,                   NULL,             NULL,            NULL},
{TR98_WPS,                      0,              para_LanDevWlanCfgWps,  lanDevWlanCfgWpsObjGet,  lanDevWlanCfgWpsObjSet, NULL,             NULL,            NULL},
//{TR98_REG,                      ATTR_INDEXNODE, NULL,                   NULL,                    NULL,                   NULL,             NULL,            NULL},
{TR98_ASSOC_DEV,                ATTR_INDEXNODE, para_LanDevWlanCfgAssocDev,          lanDevWlanCfgAssocDevObjGet,                    NULL,                   NULL,             NULL,            NULL},
{TR98_ASSOC_DEV_STAT,			0             , para_LanDevWlanCfgAssocDevStat,      lanDevWlanCfgAssocDevStatObjGet,			     NULL,					 NULL,			   NULL,		    NULL},
{TR98_WEP_KEY,                  ATTR_INDEXNODE, para_WepKey,            lanDevWlanCfgWEPKeyObjGet,lanDevWlanCfgWEPKeyObjSet,                   NULL,             NULL,            NULL},
{TR98_PSK,                      ATTR_INDEXNODE, para_Psk,               lanDevWlanCfgPskObjGet,  lanDevWlanCfgPskObjSet, NULL,             NULL,            NULL},
//{TR98_AP_WMM_PARAM,             ATTR_INDEXNODE, NULL,                   NULL,                    NULL,                   NULL,             NULL,            NULL},
//{TR98_STA_WMM_PARAM,            ATTR_INDEXNODE, NULL,                   NULL,                    NULL,                   NULL,             NULL,            NULL},
{TR98_HOSTS,                    0, para_Hosts,				lanDevHostsObjGet,			NULL,                   NULL,             NULL,            lanDevHostsObjNotify, NULL, lanDevHostsObjAttrSet},
{TR98_HOST,                     ATTR_INDEXNODE, para_Host,				lanDevHostObjGet,			NULL,                   NULL,             NULL,            lanDevHostObjNotify, lanDevHostObjAttrGet, lanDevHostObjAttrSet},
#ifdef ONECONNECT
{TR98_ONECONNECT_EXT,			0,				para_OneConnectExt, 	oneConnectExtObjGet,		 oneConnectExtObjSet,		   NULL,			 NULL,			  NULL},
#endif
{TR98_NEIBOR_WIFI_DIAG, 		0             , para_NeiborWifiDiag, 	wifiNeiborDiagObjGet,	 wifiNeiborDiagObjSet, NULL, NULL, wifiNeiborDiagObjNotify, wifiNeiborDiagObjAttrGet, wifiNeiborDiagObjAttrSet},
{TR98_NEIBOR_WIFI_DIAG_RESULT,  ATTR_INDEXNODE, para_NeiborWifiDiagResult, wifiNeiborDiagResultObjGet,     NULL, NULL, NULL, wifiNeiborDiagResultObjNotify, wifiNeiborDiagResultObjAttrGet, wifiNeiborDiagResultObjAttrSet},
{TR98_LAN_INTF,                 0, para_LanDev,           lanIfacesObjGet,                    NULL,                   NULL,             NULL,            NULL},
//{TR98_LAN_INTF_ETH_INTF_CONF,   ATTR_INDEXNODE, NULL,                   NULL,                    NULL,                   NULL,             NULL,            NULL},
//{TR98_USB_INTF_CONF,            ATTR_INDEXNODE, NULL,                   NULL,                    NULL,                   NULL,             NULL,            NULL},
//{TR98_LAN_INTF_WLAN_CFG,        ATTR_INDEXNODE, NULL,                   NULL,                    NULL,                   NULL,             NULL,            NULL},
{TR98_WAN_DEV,                  ATTR_INDEXNODE,	para_WanDev,            WANDeviceObjGet,         WANDeviceObjSet,                   NULL,             NULL,            NULL},
{TR98_WAN_COMM_INTF_CONF,       0,              para_WANCommIfaceCfg,   WANCommIfaceCfgObjGet,   NULL,                   NULL,             NULL,            NULL},
//{TR98_WAN_COMM_INTF_CONNECT,    ATTR_INDEXNODE, NULL,                   NULL,                    NULL,                   NULL,             NULL,            NULL},
{TR98_WAN_DSL_INTF_CONF,        0,              para_WANDslIfaceCfg,    WANDslIfaceCfgObjGet,    WANDslIfaceCfgObjSet,   NULL,             NULL,            NULL},
{TR98_WAN_DSL_INTF_TEST_PARAM,  0,              para_WANDslIfTestParam, WANDslIfTestParamObjGet,    NULL,                   NULL,             NULL,            NULL},
{TR98_WAN_DSL_INTF_CONF_STAT,   0,              NULL,                   NULL,                    NULL,                   NULL,             NULL,            NULL},
//{TR98_TTL,                      0,              para_WANDslIfaceCfgStatTotal,  WANDslIfaceCfgTtlObjGet,                    NULL,                   NULL,             NULL,            NULL},
//{TR98_ST,                       0,              para_WANDslIfaceCfgStatSt,     WANDslIfaceCfgStObjGet,                    NULL,                   NULL,             NULL,            NULL},
{TR98_TTL,                      0,              para_WANDslIfaceCfgStatObjs,  WANDslIfaceCfgStatsSubObjGet,                    NULL,                   NULL,             NULL,            NULL},
{TR98_ST,                       0,              para_WANDslIfaceCfgStatObjs,     WANDslIfaceCfgStatsSubObjGet,                    NULL,                   NULL,             NULL,            NULL},
//{TR98_LST_SHOWTIME,             0,              NULL,                   NULL,                    NULL,                   NULL,             NULL,            NULL},
{TR98_CURRENT_DAY,              0,              para_WANDslIfaceCfgStatObjs,   WANDslIfaceCfgStatsSubObjGet,                    NULL,                   NULL,             NULL,            NULL, NULL, NULL},
//{TR98_QTR_HR,                   0,              NULL,                   NULL,                    NULL,                   NULL,             NULL,            NULL},
{TR98_WAN_ETH_INTF_CONF,        0,              para_WANEthIntfConf,    WANEthIfaceCfgObjGet,	 WANEthIfaceCfgObjSet,   NULL,             NULL,            NULL},
{TR98_WAN_ETH_INTF_CONF_STAT,   0,              para_WANEthIntfConfStat,WANEthIfaceCfgStObjGet,  NULL,                   NULL,             NULL,            NULL},
#ifdef CONFIG_XPON_SUPPORT
{TR98_WAN_DSL_DIAG,             0,              NULL,        NULL,        NULL,       NULL,             NULL,            NULL},
#else
{TR98_WAN_DSL_DIAG,             0,              para_WANDslDiag,        WANDslDiagObjGet,        WANDslDiagObjSet,       NULL,             NULL,            NULL},
#endif
{TR98_WAN_CONN_DEV,             ATTR_INDEX_CREA,para_WANConnDev,        WANConnDevObjGet,        NULL,                   WANConnDevObjAdd, WANConnDevObjDel,NULL},
{TR98_WAN_DSL_LINK_CONF,        0,              para_WANDslLinkConf,    WANDslLinkConfObjGet,    WANDslLinkConfObjSet,   NULL,             NULL,            NULL},
{TR98_WAN_ATM_F5_LO_DIAG,       0,              para_WanAtmF5LoDiag,    WANAtmF5LoConfObjGet,    WANAtmF5LoConfObjSet,   NULL,             NULL,            NULL},
{TR98_WAN_ATM_F4_LO_DIAG,		0,				para_WanAtmF4LoDiag,	WANAtmF4LoConfObjGet,	 WANAtmF4LoConfObjSet,	 NULL,			   NULL,			NULL},
{TR98_WAN_PTM_LINK_CONF,        0,              para_WANPtmLinkConf,    WANPtmLinkConfObjGet,    WANPtmLinkConfObjSet,   NULL,             NULL,            NULL},
{TR98_WAN_PTM_LINK_CONF_STAT,   0,              para_WANPtmLinkConfStat,WANPtmLinkConfStObjGet,  NULL,                   NULL,             NULL,            NULL},
{TR98_WAN_ETH_LINK_CONF,        0,              para_WANEthLinkConf,    WANEthLinkConfObjGet,    NULL,                   NULL,             NULL,            NULL},
//{TR98_WAN_POTS_LINK_CONF,       0,              NULL,                   NULL,                    NULL,                   NULL,             NULL,            NULL},
{TR98_WAN_IP_CONN,              ATTR_INDEX_CREA,para_WANIpConn,         WANIpConnObjGet,         WANIpConnObjSet,        WANIpConnObjAdd,  WANIpConnObjDel, WANIpConnObjNotify, WANIpConnObjAttrGet, WANIpPppConnObjAttrSet},
{TR98_WAN_IP_CONN_MLD,	        0,              para_WANIpConnMld,      WANConnMldObjGet,        WANConnMldObjSet,       NULL, 			   NULL, 			WANConnMldObjNotify, NULL, WANConnMldObjAttrSet},
{TR98_DHCP_CLIENT,              0,              para_DhcpClient,        DhcpClientObjGet,        NULL,                   NULL,             NULL, DhcpClientObjNotify, DhcpClientObjAttrGet, DhcpClientObjAttrSet},
{TR98_SENT_DHCP_OPT,            ATTR_INDEX_CREA, para_SentDhcpOpt,      DhcpClientSentOptObjGet, DhcpClientSentOptObjSet, DhcpClientSentOptObjAdd, DhcpClientSentOptObjDel, DhcpClientOptObjNotify, DhcpClientSentOptObjAttrGet, DhcpClientSentOptObjAttrSet},
{TR98_REQ_DHCP_OPT,             ATTR_INDEX_CREA, para_ReqDhcpOpt,       DhcpClientReqOptObjGet,  DhcpClientReqOptObjSet, DhcpClientReqOptObjAdd, DhcpClientReqOptObjDel, DhcpClientOptObjNotify, DhcpClientReqOptObjAttrGet, DhcpClientReqOptObjAttrSet},
{TR98_WAN_IP_PORT_MAP,          ATTR_INDEX_CREA, para_WANIpPortMap,      WANPortMappingObjGet,       WANPortMappingSet,      WANPortMappingAdd, WANPortMappingDel, WANPortMappingNotify, WANPortMappingAttrGet, WANPortMappingAttrSet},
{TR98_WAN_IP_PORT_TRIGGER,      ATTR_INDEX_CREA, para_WANIpPortTrigger, WANPortTriggerObjGet,    WANPortTriggerSet,      WANPortTriggerAdd, WANPortTriggerDel, WANPortTriggerNotify, WANPortTriggerAttrGet, WANPortTriggerAttrSet},
{TR98_WAN_IP_ADDR_MAPPING,      ATTR_INDEX_CREA, para_WANIpAddrMapping, WANAddrMappingObjGet,    WANAddrMappingSet,      WANAddrMappingAdd, WANAddrMappingDel, WANAddrMappingNotify, WANAddrMappingAttrGet, WANAddrMappingAttrSet},
{TR98_WAN_IP_CONN_STAT,         0,              para_WANIpConnStat,     WANConnStObjGet,         NULL,                   NULL,     NULL, WANConnStObjNotify, WANConnStObjAttrGet, WANConnStObjAttrSet},
#ifdef IPV6INTERFACE_PROFILE
{TR98_WAN_IP_CONN_IPV6ADDR,     ATTR_INDEX_CREA, para_WANIpv6Addr,      WANIpv6AddrObjGet,        WANIpv6AddrObjSet,     WANIpv6AddrObjAdd, WANIpv6AddrObjDel,            NULL},
{TR98_WAN_IP_CONN_IPV6PREFIX, 	ATTR_INDEX_CREA, para_WANIpv6Prefix, 	WANIpv6PrefixObjGet,	 WANIpv6PrefixObjSet,   WANIpv6PrefixObjAdd, WANIpv6PrefixObjDel,			NULL},
#endif
#ifdef DHCPV6CLIENT_PROFILE
{TR98_WAN_IP_CONN_DHCPV6CLIENT, 0, 				para_WANIpDhcpV6Client,     WANIpv6DhcpV6ObjGet, WANIpv6DhcpV6ObjSet,    NULL,             NULL,            NULL},
#endif
#ifdef IPV6RD_PROFILE
{TR98_WAN_IP_CONN_IPV6RD,       0,              para_WANIpv6Rd,     	WANIpv6RdObjGet,         WANIpv6RdObjSet,        NULL,             NULL,            NULL},
#endif
{TR98_WAN_PPP_CONN,             ATTR_INDEX_CREA,para_WANPppConn,        WANPppConnObjGet,        WANPppConnObjSet,       WANPppConnObjAdd, WANPppConnObjDel, WANPppConnObjNotify, WANPppConnObjAttrGet, WANIpPppConnObjAttrSet},
{TR98_WAN_PPP_PORT_MAP,         ATTR_INDEX_CREA,para_WANPppPortMap,     WANPortMappingObjGet,    WANPortMappingSet,      WANPortMappingAdd, WANPortMappingDel, WANPortMappingNotify, WANPortMappingAttrGet, WANPortMappingAttrSet},	
{TR98_WAN_PPP_PORT_TRIGGER,     ATTR_INDEX_CREA,para_WANPppPortTrigger, WANPortTriggerObjGet,    WANPortTriggerSet,      WANPortTriggerAdd, WANPortTriggerDel, WANPortTriggerNotify, WANPortTriggerAttrGet, WANPortTriggerAttrSet},
{TR98_WAN_PPP_ADDR_MAPPING,     ATTR_INDEX_CREA,para_WANPppAddrMapping, WANAddrMappingObjGet,    WANAddrMappingSet,      WANAddrMappingAdd, WANAddrMappingDel, WANAddrMappingNotify, WANAddrMappingAttrGet, WANAddrMappingAttrSet},
{TR98_WAN_PPP_CONN_STAT,        0,              para_WANPppConnStat,    WANConnStObjGet,         NULL,                   NULL,   NULL, WANConnStObjNotify, WANConnStObjAttrGet, WANConnStObjAttrSet},
{TR98_WAN_PPP_CONN_MLD,	        0,              para_WANPppConnMld,     WANConnMldObjGet,        WANConnMldObjSet,       NULL, 			   NULL, 			WANConnMldObjNotify, NULL, WANConnMldObjAttrSet},
#ifdef IPV6INTERFACE_PROFILE
{TR98_WAN_PPP_CONN_IPV6ADDR,    ATTR_INDEX_CREA, para_WANPppv6Addr,     WANPppv6AddrObjGet,        WANPppv6AddrObjSet,     WANPppv6AddrObjAdd, WANPppv6AddrObjDel,            NULL},
{TR98_WAN_PPP_CONN_IPV6PREFIX, 	ATTR_INDEX_CREA, para_WANPppv6Prefix,	WANPppv6PrefixObjGet,	 WANPppv6PrefixObjSet,   WANPppv6PrefixObjAdd, WANPppv6PrefixObjDel,			NULL},
#endif
#ifdef DHCPV6CLIENT_PROFILE
{TR98_WAN_PPP_CONN_DHCPV6CLIENT, 0, 			para_WANPppDhcpV6Client, WANPppv6DhcpV6ObjGet, WANPppv6DhcpV6ObjSet,    NULL,             NULL,            NULL},
#endif
#ifdef IPV6RD_PROFILE
{TR98_WAN_PPP_CONN_IPV6RD,      0,				para_WANPppv6Rd,        WANPppv6RdObjGet,         WANPppv6RdObjSet,        NULL,             NULL,            NULL},
#endif
#ifdef CONFIG_XPON_SUPPORT
{TR98_WWAN_INTERFACE_CONFIG,		0,				NULL,	NULL,   NULL,   NULL,             NULL,            NULL},
{TR98_WWAN_INTERFACE_CONFIG_STATUS,	0,				NULL,	NULL,   NULL,   NULL,             NULL,            NULL},
{TR98_WWAN_EMAIL_CONFIG,			ATTR_INDEXNODE,	NULL,	NULL,   NULL,   NULL,             NULL,            NULL},
#else
{TR98_WWAN_INTERFACE_CONFIG,	0,	para_WANWwanIntfConf,	wwanObjGet,   wwanObjSet,   NULL,             NULL,            NULL},
{TR98_WWAN_INTERFACE_CONFIG_STATUS,	0,	para_WANWwanIntfStatsConf,	wwanObjStatsGet,   NULL,   NULL,             NULL,            NULL},
{TR98_WWAN_EMAIL_CONFIG,	ATTR_INDEXNODE,	para_WANWwanEmailConf,	wwanEmailObjGet,   wwanEmailObjSet,   NULL,             NULL,            NULL},
#endif
#ifdef CONFIG_XPON_SUPPORT
{TR98_WAN_PON_INTF_CONF,        0,				para_WANPonIntfConf,     WANPonIfaceCfgObjGet,   WANPonIfaceCfgObjSet,   NULL,             NULL,            NULL},
{TR98_WAN_PON_INTF_CONF_STAT,   0,			    para_WANPonIntfConfStat, WANPonIfaceCfgStObjGet, NULL,                   NULL,             NULL,            NULL},
#endif
{TR98_FIREWALL,                 0,              para_Firewall,          firewallObjGet,          firewallObjSet,         NULL,             NULL,            firewallObjNotify, firewallObjAttrGet, firewallObjAttrSet},
{TR98_FIREWALL_LEVEL,           ATTR_INDEX_CREA,para_FirewallLevel,     firewallLevelObjGet,     firewallLevelObjSet,    firewallLevelObjAdd,firewallLevelObjDel,firewallLevelObjNotify, firewallLevelObjAttrGet, firewallLevelObjAttrSet},
{TR98_FIREWALL_CHAIN,           ATTR_INDEX_CREA,para_FirewallChain,     firewallChainObjGet,     firewallChainObjSet,    firewallChainObjAdd,firewallChainObjDel,firewallChainObjNotify, firewallChainObjAttrGet, firewallChainObjAttrSet},
{TR98_FIREWALL_CHAIN_RULE,      ATTR_INDEX_CREA,para_FirewallChainRule, firewallRuleObjGet,      firewallRuleObjSet,     firewallRuleObjAdd,firewallRuleObjDel,firewallRuleObjNotify, firewallRuleObjAttrGet, firewallRuleObjAttrSet},
{TR98_STD_UPNP, 				0,				NULL,					NULL,					 NULL,					NULL,			  NULL, 	   NULL, NULL, NULL},
{TR98_STD_UPNP_DEV, 			0,				para_Upnp,				zyExtUPnPObjGet,		 zyExtUPnPObjSet,		NULL,			  NULL, 		   NULL, NULL, NULL},
#if ZYXEL_EXT
{TR98_ZYXEL_EXT,             	0,				NULL,        			NULL,        			 NULL,       			 NULL, 				NULL,			NULL},
#ifdef ZYXEL_LANDING_PAGE_FEATURE
{TR98_LANDING_PAGE, 			0,				para_Landing_Page,		zyExtLandingPageObjGet,	 zyExtLandingPageObjSet,	NULL,	NULL,	NULL,	NULL,	NULL},
#endif
{TR98_FEATURE_FLAG,				0,              para_Feature_Flag,		zyExtFeatureFlagObjGet,	 zyExtFeatureFlagObjSet,	NULL,	NULL,	NULL,	NULL,	NULL},
{TR98_DNS_RT_ENTRY,             ATTR_INDEX_CREA,para_DnsRtEntry,        zyExtDnsRtObjGet,        zyExtDnsRtObjSet,       zyExtDnsRtObjAdd, zyExtDnsRtObjDel,zyExtDnsRtObjNotify, NULL, zyExtDnsRtObjAttrSet},
//{TR98_DNS_ENTRY, 	            ATTR_INDEX_CREA,para_DnsEntry, 		    zyExtDnsEntryObjGet,     zyExtDnsEntryObjSet,    zyExtDnsEntryObjAdd, zyExtDnsEntryObjDel,zyExtDnsEntryObjNotify, zyExtDnsEntryObjAttrGet, zyExtDnsEntryObjAttrSet},
{TR98_DNS_ENTRY, 	            ATTR_INDEX_CREA,para_DnsEntry, 		    zyExtDnsEntryObjGet,     zyExtDnsEntryObjSet,    zyExtDnsEntryObjAdd, zyExtDnsEntryObjDel, NULL, NULL, NULL},
{TR98_D_DNS,                    0,              para_DDns,              zyExtDDnsObjGet,         zyExtDDnsObjSet,        NULL,             NULL,            zyExtDDnsObjNotify, zyExtDDnsObjAttrGet, zyExtDDnsObjAttrSet},
#ifdef ZCFG_TR64
{TR98_TR064, 	                0,              para_Tr064,	            zyExtTr064ObjGet,	     zyExtTr064ObjSet,	     NULL,             NULL,            zyExtTr064ObjNotify, NULL, zyExtTr064ObjAttrSet},
#else
#endif
//{TR98_VLAN_GROUP,               ATTR_INDEX_CREA,para_VlanGroup,         zyExtVlanGroupObjGet,	 zyExtVlanGroupObjSet,	 zyExtVlanGroupObjAdd, zyExtVlanGroupObjDel, zyExtVlanGroupObjNotify, zyExtVlanGroupObjAttrGet, zyExtVlanGroupObjAttrSet},
{TR98_VLAN_GROUP,               ATTR_INDEX_CREA,para_VlanGroup,         zyExtVlanGroupObjGet,	 zyExtVlanGroupObjSet,	 zyExtVlanGroupObjAdd, zyExtVlanGroupObjDel, NULL, NULL, NULL},
{TR98_EMAIL_NOTIFY,             0,              NULL,       			NULL,  					 NULL, 					 NULL,             NULL,            NULL, NULL, NULL},
//{TR98_EMAIL_SERVICE,            ATTR_INDEX_CREA,para_EmailSrv,	        zyExtEmailSrvObjGet,     zyExtEmailSrvObjSet,	 zyExtEmailSrvObjAdd, zyExtEmailSrvObjDel,  zyExtEmailSrvObjNotify, zyExtEmailSrvObjAttrGet, zyExtEmailSrvObjAttrSet},
{TR98_EMAIL_SERVICE,            ATTR_INDEX_CREA,para_EmailSrv,	        zyExtEmailSrvObjGet,     zyExtEmailSrvObjSet,	 zyExtEmailSrvObjAdd, zyExtEmailSrvObjDel, NULL, NULL, NULL},
//{TR98_EMAIL_EVENT_CFG,          ATTR_INDEX_CREA,para_EmailEvent,	    zyExtEmailEventObjGet,   zyExtEmailEventObjSet,	 zyExtEmailEventObjAdd, zyExtEmailEventObjDel, zyExtEmailEventObjNotify, zyExtEmailEventObjAttrGet, zyExtEmailEventObjAttrSet},
{TR98_EMAIL_EVENT_CFG,          ATTR_INDEX_CREA,para_EmailEvent,	    zyExtEmailEventObjGet,   zyExtEmailEventObjSet,	 zyExtEmailEventObjAdd, zyExtEmailEventObjDel, NULL, NULL, NULL},
{TR98_SYS_INFO,                 0,              para_SysInfo,           zyExtSysInfoObjGet,      zyExtSysInfoObjSet,     NULL,             NULL,            zyExtSysInfoObjNotify, zyExtSysInfoObjAttrGet, zyExtSysInfoObjAttrSet},
//{TR98_SNMP, 	                0,              para_Snmp,	            zyExtSnmpObjGet, 	     zyExtSnmpObjSet,     NULL,             NULL,            zyExtSnmpObjNotify, zyExtSnmpObjAttrGet, zyExtSnmpObjAttrSet},
{TR98_SNMP, 	                0,              para_Snmp,	            zyExtSnmpObjGet, 	     zyExtSnmpObjSet,     NULL,             NULL,            NULL, NULL, NULL},
{TR98_SNMP_TRAP,                ATTR_INDEX_CREA,para_SnmpTrap,          zyExtSnmpTrapObjGet,     zyExtSnmpTrapObjSet,    zyExtSnmpTrapObjAdd,	zyExtSnmpTrapObjDel, NULL, NULL, NULL},
//{TR98_SCHEDULE,                 ATTR_INDEX_CREA,para_Schedule,          scheduleObjGet,          scheduleObjSet,         scheduleObjAdd,   scheduleObjDel,  scheduleObjNotify, scheduleObjAttrGet, scheduleObjAttrSet},
{TR98_SCHEDULE,                 ATTR_INDEX_CREA,para_Schedule,          scheduleObjGet,          scheduleObjSet,         scheduleObjAdd,   scheduleObjDel,  NULL, NULL, NULL},
#ifdef ISKON_CUSTOMIZATION
{TR98_REMO_MGMT,		0,				para_RemoMgmt,			zyExtRemoteMgmtObjGet,			 zyExtRemoteMgmtObjSet,					 NULL,				NULL,			NULL,		NULL,		NULL},
#else
{TR98_REMO_MGMT,				0,				NULL,					NULL,					 NULL,					 NULL,				NULL,			NULL},
#endif
{TR98_REMO_SRV, 			    ATTR_INDEX_CREA,para_RemoSrv,		    zyExtRemoteMgmtSrvObjGet,		 zyExtRemoteMgmtSrvObjSet,		 zyExtRemoteMgmtSrvObjAdd, zyExtRemoteMgmtSrvObjDel, zyExtRemoteMgmtSrvObjNotify, zyExtRemoteMgmtSrvObjAttrGet, zyExtRemoteMgmtSrvObjAttrSet},
{TR98_SP_REMO_SRV, 			    ATTR_INDEX_CREA,para_SpRemoSrv,		    zyExtSpRemoteMgmtSrvObjGet,		 zyExtSpRemoteMgmtSrvObjSet,		 NULL, NULL, NULL, NULL, NULL},
{TR98_IEEE8021AG,               0,              para_8021ag,	        zyExt8021agObjGet, 	     zyExt8021agObjSet,		NULL,             NULL,            zyExt8021agObjNotify, zyExt8021agObjAttrGet, zyExt8021agObjAttrSet},
#ifdef ZYXEL_ETHOAM_TMSCTL
{TR98_IEEE8023AH,				0,				para_8023ah,			zyExt8023ahObjGet,		 zyExt8023ahObjSet, 	NULL,			  NULL, 		   zyExt8023ahObjNotify, zyExt8023ahObjAttrGet, zyExt8023ahObjAttrSet},
#endif
//{TR98_SAMBA,         		    0,              para_Samba,	   		    zyExtSambaObjGet, 	     zyExtSambaObjSet,		NULL,             NULL,            zyExtSambaObjNotify, zyExtSambaObjAttrGet, zyExtSambaObjAttrSet},
{TR98_SAMBA,         		    0,              para_Samba,	   		    zyExtSambaObjGet, 	     zyExtSambaObjSet,		NULL,             NULL,            NULL, NULL, NULL},
{TR98_UPNP,         		    0,              para_Upnp,	   		    zyExtUPnPObjGet, 	     zyExtUPnPObjSet,		NULL,             NULL,            NULL, NULL, NULL},
{TR98_REMO_TRUSTDOMAIN,         ATTR_INDEX_CREA,para_RemoTrustDomain,   zyExtRemoteMgmtTrustDomainObjGet,                    zyExtRemoteMgmtTrustDomainObjSet,                   zyExtRemoteMgmtTrustDomainObjAdd,            zyExtRemoteMgmtTrustDomainObjDel,            NULL},
{TR98_SP_TRUSTDOMAIN,         ATTR_INDEX_CREA,para_SpTrustDomain,   zyExtSpRemoteMgmtTrustDomainObjGet,                    zyExtSpRemoteMgmtTrustDomainObjSet,                   zyExtSpRemoteMgmtTrustDomainObjAdd,            zyExtSpRemoteMgmtTrustDomainObjDel,            NULL},
{TR98_IGMP,                     0,              para_Igmp,              zyExtIgmpObjGet,         zyExtIgmpObjSet,        NULL,             NULL,            zyExtIgmpObjNotify, NULL, NULL},
#if defined(SUNRISE_RANDOM_PASSWORD) || defined(SOL_TR69_LOGINACCOUNT) || defined(ZYXEL_SUPPORT_TR98_LOGIN_ACCOUNT)
{TR98_LOG_CFG,                  0,              NULL,              NULL,         NULL,        NULL,             NULL,            NULL, NULL, NULL},
{TR98_LOG_CFG_GP,               ATTR_INDEX_CREA,para_LogCfgGp,          zyExtLogCfgGpObjGet,       zyExtLogCfgGpObjSet,        NULL,             NULL,            NULL,   NULL,    NULL},
#if defined(SOL_TR69_LOGINACCOUNT) || defined(ZYXEL_SUPPORT_TR98_LOGIN_ACCOUNT)
{TR98_LOG_CFG_GP_ACCOUNT,       ATTR_INDEX_CREA,para_LogCfgGpAccount,   zyExtLogCfgGpAccountObjGet,		zyExtLogCfgGpAccountObjSet,        zyExtLogCfgGpAccountObjAdd,             zyExtLogCfgGpAccountObjDel,            NULL, NULL, NULL},
#else
{TR98_LOG_CFG_GP_ACCOUNT,       ATTR_INDEX_CREA,para_LogCfgGpAccount,   zyExtLogCfgGpAccountObjGet,		zyExtLogCfgGpAccountObjSet,        zyExtLogCfgGpAccountObjAdd,             NULL,            NULL, NULL, NULL},
#endif
#endif
{TR98_LOG_SETTING,              ATTR_INDEX_CREA,para_LogSetting,        zyExtLogSettingObjGet,			zyExtLogSettingObjSet,		NULL,             NULL,            zyExtLogSettingObjNotify, zyExtLogSettingObjAttrGet, zyExtLogSettingObjAttrSet},
{TR98_LOG_CLASSIFY,				ATTR_INDEX_CREA,para_LogClassify,		zyExtLogClassifyObjGet,			NULL, 						zyExtLogClassifyObjAdd,	zyExtLogClassifyObjDel,	zyExtLogClassifyObjNotify, zyExtLogClassifyObjAttrGet, zyExtLogClassifyObjAttrSet},
{TR98_LOG_CATEGORY,             ATTR_INDEX_CREA,para_LogCategory,       zyExtLogCategoryObjGet,         zyExtLogCategoryObjSet,		zyExtLogCategoryObjAdd,	zyExtLogCategoryObjDel,	zyExtLogCategoryObjNotify, zyExtLogCategoryObjAttrGet, zyExtLogCategoryObjAttrSet},
{TR98_MACFILTER,		    	0, 				para_MacFilter,			zyExtMacFilterObjGet,			zyExtMacFilterObjSet,		NULL,             NULL,            zyExtMacFilterObjNotify, zyExtMacFilterObjAttrGet, zyExtMacFilterObjAttrSet},
{TR98_MACFILTER_WHITELIST,		ATTR_INDEX_CREA,para_MacFilter_WhiteList, zyExtMacFilterWhiteListObjGet,zyExtMacFilterWhiteListObjSet, zyExtMacFilterWhiteListObjAdd, zyExtMacFilterWhiteListObjDel, zyExtMacFilterWhiteListObjNotify, zyExtMacFilterWhiteListObjAttrGet, zyExtMacFilterWhiteListObjAttrSet},
{TR98_PAREN_CTL,                0,              para_ParenCtl,          zyExtParenCtlObjGet,         	zyExtParenCtlObjSet,        NULL,             NULL,            zyExtParenCtlObjNotify, zyExtParenCtlObjAttrGet, zyExtParenCtlObjAttrSet},
//{TR98_PAREN_CTL_PROF,           ATTR_INDEX_CREA,para_ParenCtlProf,      zyExtParenCtlProfObjGet,		zyExtParenCtlProfObjSet,    zyExtParenCtlProfObjAdd, zyExtParenCtlProfObjDel, zyExtParenCtlProfObjNotify, zyExtParenCtlProfObjAttrGet, zyExtParenCtlProfObjAttrSet},
{TR98_PAREN_CTL_PROF,           ATTR_INDEX_CREA,para_ParenCtlProf,      zyExtParenCtlProfObjGet,		zyExtParenCtlProfObjSet,    zyExtParenCtlProfObjAdd, zyExtParenCtlProfObjDel, NULL, NULL, NULL},
{TR98_SEC,    		            0,              para_Sec,    		    zyExtSecObjGet,         		NULL,     			  		NULL,             NULL,            zyExtSecObjNotify, zyExtSecObjAttrGet, zyExtSecObjAttrSet},
//{TR98_SEC_CERT,  		        ATTR_INDEX_CREA,para_SecCert, 		    zyExtSecCertObjGet,				zyExtSecCertObjSet,  		zyExtSecCertObjAdd, zyExtSecCertObjDel, zyExtSecCertObjNotify, zyExtSecCertObjAttrGet, zyExtSecCertObjAttrSet},
{TR98_SEC_CERT,  		        ATTR_INDEX_CREA,para_SecCert, 		    zyExtSecCertObjGet,				zyExtSecCertObjSet,  		zyExtSecCertObjAdd, zyExtSecCertObjDel, NULL, NULL, NULL},
{TR98_GUI_CUSTOMIZATION,		0,				para_GUI_Customization, zyExtCustomizationObjGet,	 	zyExtCustomizationObjSet,	NULL,	NULL,	NULL,	NULL,	NULL},
#ifdef ONECONNECT
{TR98_ONECONNECT,	0, 				para_OneConnect,		zyExtOneConnectObjGet,		 zyExtOneConnectObjSet,		   NULL,             NULL,            NULL},
{TR98_ONECONNECT_SPEEDTESTINFO,	0, 				para_SpeedTestInfo,		zyExtSpeedTestInfoObjGet,		 zyExtSpeedTestInfoObjSet,		   NULL,             NULL,            NULL},
#endif
#ifdef ZYXEL_AP_STEERING
{TR98_AP_STEERING,	0, 				para_ApSteering,		zyExtApSteeringObjGet,		 zyExtApSteeringObjSet,		   NULL,             NULL,            NULL},
#endif //#ifdef ZYXEL_AP_STEERING
#ifdef PROXIMITY_SENSOR_SUPPORT
{TR98_PROXIMITY_SENSOR,	0, 	para_ProximitySensor,	zyExtProximitySensorObjGet,		zyExtProximitySensorObjSet,		   NULL,             NULL,            NULL},
#endif //#ifdef PROXIMITY_SENSOR_SUPPORT
#endif
#if OBSOLETED
#else
//{TR98_WAN_DSL_CONN_MGMT,        0,              NULL,                   NULL,                    NULL,                   NULL,             NULL,            NULL},
//{TR98_WAN_DSL_CONN_SRVC,        ATTR_INDEXNODE, NULL,                   NULL,                    NULL,                   NULL,             NULL,            NULL},
#endif
#ifdef ZyXEL_IPP_PRINTSERVER
{TR98_PRINT_SERVER,             0,              para_Ipp_PrintServer,   zyExtIppPrintServObjGet,          zyExtIppPrintServObjSet,         NULL,             NULL,            NULL, NULL, NULL},
#endif
{NULL,                          0,              NULL,                   NULL,                    NULL,                   NULL,             NULL,            NULL}
};

