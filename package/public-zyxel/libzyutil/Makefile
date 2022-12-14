# This is free software, licensed under the GNU General Public License v2.
# See /LICENSE for more information.
#
# $Id$

include $(TOPDIR)/rules.mk
include $(INCLUDE_DIR)/kernel.mk

#These lines concatanate the package name and list the URL location from which the package source code is to be downloaded
PKG_NAME:=libzyutil
PKG_VERSION:=1.0
PKG_RELEASE:=1

PKG_SOURCE:=$(PKG_NAME)-$(PKG_VERSION).tar.gz
#PKG_SOURCE_URL:=http://www.cs.uh.edu/~vivekian/downloads/
PKG_SOURCE_URL:=@ZyXEL_SITE/public/ZyXEL
DL_DIR:=$(TOPDIR)/dl/public/zyxel

PKG_CAT:=zcat

PKG_BUILD_DIR:=$(BUILD_DIR)/$(PKG_NAME)-$(PKG_VERSION)
PRODUCT_NAME:=$(call qstrip, $(CONFIG_MRD_PRODUCT_NAME))

include $(INCLUDE_DIR)/package.mk

#These lines describe what your package does and its place in the menu config

export CONFIG_ELISA_CUSTOMIZATION PRODUCT_NAME CONFIG_ZYXEL_RMA_FW_SUPPORT

PKG_BUILD_DEPENDS:=zcfg libjson

define Package/libzyutil
SECTION:=net
CATEGORY:=Zyxel Packages
TITLE:= ZyXEL Configuration Management Utility Library
DESCRIPTION:=
#DEPENDS:=zcfg +libjson
endef

#Disable Dependencies Check
define CheckDependencies
endef

ifeq ($(CONFIG_BRCM_SDK_VERSION), "414L04")
EXTRA_CFLAGS += -DNEW_MTD_DRIVER
endif

ifeq ($(CONFIG_BRCM_SDK_VERSION), "416L01RC1")
EXTRA_CFLAGS += -DNEW_MTD_DRIVER
endif

ifeq ($(CONFIG_BRCM_SDK_VERSION), "416L01")
EXTRA_CFLAGS += -DNEW_MTD_DRIVER
endif

ifeq ($(CONFIG_BRCM_SDK_VERSION), "416L02")
EXTRA_CFLAGS += -DNEW_MTD_DRIVER
endif

ifeq ($(CONFIG_BRCM_SDK_VERSION), "416L02A")
EXTRA_CFLAGS += -DNEW_MTD_DRIVER
endif

ifeq ($(CONFIG_BRCM_SDK_VERSION), "416L04")
EXTRA_CFLAGS += -DNEW_MTD_DRIVER
endif

ifeq ($(CONFIG_BRCM_SDK_VERSION), "416L05")
EXTRA_CFLAGS += -DNEW_MTD_DRIVER
endif

ifneq ($(strip $(TCSUPPORT_BOOTROM_LARGE_SIZE)),)
EXTRA_CFLAGS += -DBOOTROM_LARGE_SIZE
endif

ifeq ("$(strip ${ZCFG_PLATFORM})","ECONET")
ifneq ($($(shell echo CONFIG_$(CONFIG_CUSTOM_SDK_PREFIX)_ZYXEL_LAN_WAN_WLAN_SHARE_THE_SAME_MAC)),)
EXTRA_CFLAGS += -DZYXEL_LAN_WAN_WLAN_SHARE_THE_SAME_MAC
endif
endif

#Sunrise
export CONFIG_SUNRISE_RELEASE_DHCP_PPP_BEFORE_IFDOWN

ifeq ($(ZCFG_PLATFORM),BROADCOM)
define Build/Compile
	$(MAKE) -C $(PKG_BUILD_DIR) \
		BUILD_DIR=$(BCM_BUILD_DIR) \
		EXTRA_CFLAGS="$(EXTRA_CFLAGS)"
endef
else ifeq ($(ZCFG_PLATFORM),ECONET)
define Build/Compile
	$(MAKE) -C $(PKG_BUILD_DIR) \
		$(TARGET_CONFIGURE_OPTS) \
		CROSS_COMPILE=$(TARGET_CROSS) \
		EXTRA_CFLAGS="$(EXTRA_CFLAGS)" \
		STAGING_DIR_HOST=$(STAGING_DIR_HOST)
endef
endif


define Build/InstallDev
	$(INSTALL_DIR) $(1)/usr/include
	$(CP) $(PKG_BUILD_DIR)/*.h $(1)/usr/include/
	$(INSTALL_DIR) $(1)/usr/lib
	$(CP) $(PKG_BUILD_DIR)/libzyutil.so $(1)/usr/lib/
endef

define Package/libzyutil/install
	$(INSTALL_DIR) $(1)/lib/public
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/libzyutil.so $(1)/lib/public
	ln -s /lib/public/libzyutil.so $(1)/lib/libzyutil.so
endef

$(eval $(call BuildPackage,libzyutil))
