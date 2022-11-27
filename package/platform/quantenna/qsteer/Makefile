# This is free software, licensed under the GNU General Public License v2.
# See /LICENSE for more information.
#
# $Id$
	
include $(TOPDIR)/rules.mk

#These lines concatanate the package name and list the URL location from which the package source code is to be downloaded
PKG_NAME:=qsteer
PKG_VERSION:=v0.10.3
PKG_RELEASE:=1
PATCH_DIR:=patches

PKG_SOURCE:=$(PKG_NAME)-$(PKG_VERSION).tar.gz
PKG_BUILD_DIR:=$(BUILD_DIR)/$(PKG_NAME)-$(PKG_VERSION)
PKG_SOURCE_URL:=@ZyXEL_SITE/public/Quantenna/network/tools
DL_DIR:=$(TOPDIR)/dl

QSTEER_INSTALL_DIR = $(PKG_BUILD_DIR)/.install
export QSTEER_INSTALL_DIR

ifneq ("$(strip $(CONFIG_QTN_SONiQ_QSTEER_VER))","")
	QVER=$(shell echo $(strip $(CONFIG_QTN_SONiQ_QSTEER_VER)))
	PKG_VERSION=v$(QVER)
	PKG_SOURCE=$(PKG_NAME)-$(PKG_VERSION).tar.gz
	PKG_BUILD_DIR=$(BUILD_DIR)/$(PKG_NAME)-$(PKG_VERSION)
	PATCH_DIR=patches_$(QVER)
endif

ifeq ($($(shell echo CONFIG_BRCMSDK$(CONFIG_BRCM_SDK_VERSION)_BRCM_CHIP)),"63138")
	SONiQ_PREBUILD_BIN_FILE_NAME=$(PKG_NAME)-bin-arm-openwrt-linux-gcc-4.6.2_uClibc-0.9.32_eabi-zyxel-$(PKG_VERSION).tar.gz
	SONiQ_PREBUILD_ADDON_FILE_NAME=$(PKG_NAME)-addon-arm-openwrt-linux-gcc-4.6.2_uClibc-0.9.32_eabi-zyxel-$(PKG_VERSION).tar.gz
else
ifeq ($($(shell echo CONFIG_BRCMSDK$(CONFIG_BRCM_SDK_VERSION)_BRCM_CHIP)),"63268")
	SONiQ_PREBUILD_BIN_FILE_NAME=$(PKG_NAME)-bin-mips-openwrt-linux-gcc-4.6.2_uClibc-0.9.32-zyxel-$(PKG_VERSION).tar.gz
	SONiQ_PREBUILD_ADDON_FILE_NAME=$(PKG_NAME)-addon-mips-openwrt-linux-gcc-4.6.2_uClibc-0.9.32-zyxel-$(PKG_VERSION).tar.gz
endif 
endif

include $(INCLUDE_DIR)/package.mk

define Package/qsteer
SECTION:=net
CATEGORY:=Qualcomm Packages
TITLE:= Qualcomm SONiQ - qsteer
DEPENDS:=+libjson +libpthread
endef

define Package/qsteer/config
	choice
		prompt "Quantenna SONiQ qsteer version"
		default QTN_SONiQ_QSTEER_VER_0_10_3
		help
			Select the version of Quantenna image.

		config QTN_SONiQ_QSTEER_VER_0_10_3
			bool "v0.10.3"
			help
				Quantenna SONiQ qsteer v0.10.3 2017-03-03
					
	endchoice
	
	config QTN_SONiQ_QSTEER_VER
		string 
		default 0.10.3 if QTN_SONiQ_QSTEER_VER_0_10_3
endef

define Package/qsteer/description
 This is SONiQ library, also called CSM.
endef


MAKE_FLAGS += \
	TARGET_CFLAGS="$(TARGET_CFLAGS)" 

#Disable Dependencies Check
define CheckDependencies
endef

define Build/Prepare
	$(PKG_UNPACK)
	$(Build/Patch)
	if [ ! -f $(DL_DIR)/$(SONiQ_PREBUILD_BIN_FILE_NAME) ];\
	then $(SCRIPT_DIR)/download.pl "$(DL_DIR)" "$(SONiQ_PREBUILD_BIN_FILE_NAME)" "" "@ZyXEL_SITE/public/Quantenna/network/tools" ;\
	fi
	if [ ! -f $(DL_DIR)/$(SONiQ_PREBUILD_ADDON_FILE_NAME) ];\
	then $(SCRIPT_DIR)/download.pl "$(DL_DIR)" "$(SONiQ_PREBUILD_ADDON_FILE_NAME)" "" "@ZyXEL_SITE/public/Quantenna/network/tools" ;\
	fi
endef

define Build/Compile
	mkdir -p $(PKG_BUILD_DIR)/.install/bin
	mkdir -p $(PKG_BUILD_DIR)/.install/usr/lib
	mkdir -p $(PKG_BUILD_DIR)/.install/usr/sbin
	mkdir -p $(PKG_BUILD_DIR)/.install/etc
	mkdir -p $(PKG_BUILD_DIR)/.install/include
	$(call Build/Compile/Default,)
#	$(MAKE) -C $(PKG_BUILD_DIR) \
		$(TARGET_CONFIGURE_OPTS) \
		TARGET=$(PKG_INSTALL_DIR)
#	@test x$(CONFIG_QSTEER_CROSS) != x \
		|| (echo "Compile $(PKG_NAME) failed, please run "make menuconfig" to specify CROSS name of the qsteer bin/addon package"; false)
	tar -zxvf "$(DL_DIR)/$(SONiQ_PREBUILD_BIN_FILE_NAME)" -C $(PKG_BUILD_DIR)/.install/
	tar -zxvf "$(DL_DIR)/$(SONiQ_PREBUILD_ADDON_FILE_NAME)" -C $(PKG_BUILD_DIR)/.install/
	install -m0644 $(PKG_BUILD_DIR)/csm/csmd.json $(PKG_BUILD_DIR)/.install/etc
	rm -f $(PKG_BUILD_DIR)/.install/usr/lib/libqcsm_rpe_comm.so
endef

define Build/InstallDev
	$(INSTALL_DIR) $(STAGING_DIR)/usr/include
	$(INSTALL_DATA) $(PKG_BUILD_DIR)/.install/include/qsteer_comm_ext.h $(STAGING_DIR)/usr/include
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/.install/usr/lib/libqsteer_comm_ext.so $(STAGING_DIR)/usr/lib/
endef

define Package/qsteer/install
#	$(CP) $(PKG_BUILD_DIR)/.install/* $(1)/
	$(INSTALL_DIR) $(1)/bin
	$(INSTALL_DIR) $(1)/etc
	$(INSTALL_DIR) $(1)/usr/lib
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/.install/bin/* $(1)/bin
	$(CP) $(PKG_BUILD_DIR)/.install/etc/* $(1)/etc
	$(CP) $(PKG_BUILD_DIR)/.install/usr/lib/* $(1)/usr/lib
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/.install/usr/sbin/* $(1)/bin
	$(INSTALL_BIN) ./files/start_qsteer $(1)/bin
endef

$(eval $(call BuildPackage,qsteer))

