include $(TOPDIR)/rules.mk
include $(INCLUDE_DIR)/kernel.mk

PKG_NAME:=bsa
PKG_VERSION:=1.0.1
PKG_NAME_INS:=bsa_peer
#PKG_RELEASE:=1

PKG_SOURCE:=$(PKG_NAME)-$(PKG_VERSION).tar.gz

PKG_SOURCE_URL:=@ZyXEL_SITE/public/Quantenna/network/tools
DL_DIR:=$(TOPDIR)/dl/

PKG_CAT:=zcat

PKG_BUILD_DIR:=$(BUILD_DIR)/$(PKG_NAME)-$(PKG_VERSION)
PACKAGE_DIR:=$(BIN_DIR)/packages/private

PKG_BUILD_DEPENDS:=PACKAGE_qsteer:qsteer zywifid

include $(INCLUDE_DIR)/package.mk

#export CONFIG_BIG_ENDIAN

#Disable Dependencies Check
define CheckDependencies
endef

define Package/bsa
SECTION:=net
CATEGORY:=Zyxel Packages
TITLE:= Zyxel BSA_PEER Server
DESCRIPTION:=
DEPENDS:=+zcfg +libzcfg_msg +libzcmd_tool +ZY_WIFI_CHIP_QTN:libqcsapi_client +PACKAGE_qsteer:qsteer
endef

#define Package/bsa/config
#	source "$(SOURCE)/Config.in"
#endef

#MAKE_FLAGS += SDK_DIR="../../"
ZYWIFI_DIR:=zywifid-2.0
MAKE_FLAGS +=BUILD_DIR=$(BUILD_DIR)/$(PKG_NAME)-$(PKG_VERSION)
MAKE_FLAGS +=ZYWIFI_BUILD_DIR=$(BUILD_DIR)/$(ZYWIFI_DIR)

export CONFIG_ZYXEL_WIFI_NUM_OF_24G_SSID_INTERFACE CONFIG_ZYXEL_WIFI_NUM_OF_5G_SSID_INTERFACE

define Build/Compile
	$(MAKE) -C $(PKG_BUILD_DIR) \
		CC="$(TARGET_CROSS)gcc" \
		BSA_BUILD_DIR=$(PKG_BUILD_DIR) \
		INSTALL_DIR="$(BCM_INSTALL_DIR)" \
		ZHTTPD_CFLAGS="$(ZHTTPD_CFLAGS)"
endef

define Package/bsa/install
	$(INSTALL_DIR) $(1)/bin
	$(CP) $(PKG_BUILD_DIR)/$(PKG_NAME_INS)/$(PKG_NAME_INS) $(1)/bin
	$(INSTALL_DIR) $(1)/etc
	$(CP) $(PKG_BUILD_DIR)/$(PKG_NAME_INS)/bsa_conf.txt $(1)/etc
endef

$(eval $(call BuildPackage,bsa))

