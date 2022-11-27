#
# Copyright (C) 2006-2011 OpenWrt.org
#
# This is free software, licensed under the GNU General Public License v2.
# See /LICENSE for more information.
#

include $(TOPDIR)/rules.mk

PKG_NAME:=qtn_image
PKG_VERSION:=1
PKG_RELEASE:=

PACKAGE_DIR:=$(BIN_DIR)/packages/private

PKG_CAT:=zcat
DL_DIR:=$(TOPDIR)/dl/private

QTN_IMG_TYPE:=RGMII
MODULE_TYPE:=Module

#IMG_VERSION:=36.7.0.31
IMG_VERSION:=37.4.0.46
IMG_SUB_VERSION:=

#UBOOT_VERSION:=36.7.0.6
#UBOOT_VERSION:=36.7.0.31
UBOOT_VERSION:=37.4.0.28

FILES_DIR:=files
IMAGE_DIR:=images
PATCH_DIR:=patches

PKG_BUILD_DIR:=$(BUILD_DIR)/$(PKG_NAME)

QTN_SDK_VERSION:=37.3.0.25
QTN_PKG_SOURCE_URL:=@ZyXEL_SITE/public/Quantenna/sdk

HOST_TOOL_NAME:=arc_gcc
HOST_TOOL_VERSION:=only_rel2.3.ipv6.bin
HOST_TOOL_SOURCE:=$(HOST_TOOL_NAME)_$(HOST_TOOL_VERSION).tar.gz
HOST_TOOL_SOURCE_URL:=@ZyXEL_SITE/opensource/toolchain/gcc
HOST_BUILD_DIR:=$(BUILD_DIR_HOST)/arc_gcc

HOST_BUILD_DEPENDS:=qtn_image/host
PKG_BUILD_DEPENDS:=qtn_image/host
#HOST_QTN_TOOLS_PATH:=$(HOST_BUILD_DIR)/gcc
IMG_SUB_VERSION=

ifneq ($(strip ${CONFIG_QTN_SDK_VER}),"")
	IMG_VERSION=${CONFIG_QTN_SDK_VER}
	QTN_SDK_VERSION=${CONFIG_QTN_SDK_VER}
	PATCH_DIR=patches_${CONFIG_QTN_SDK_VER}
endif

ifneq ($(strip ${CONFIG_QTN_UBOOT_VER}),"")
	QTN_UBOOT_VER=${CONFIG_QTN_UBOOT_VER}
endif

ifneq ($(strip ${CONFIG_ZY_QTN_IMG_SUBVER}),"")
	IMG_SUB_VERSION=zyxel_${CONFIG_ZY_QTN_IMG_SUBVER}
else
	IMG_SUB_VERSION=zyxel
endif


UBOOT_FILE:=u-boot-v$(UBOOT_VERSION).bin
IMG_FILE:=Linux-$(QTN_IMG_TYPE)-$(MODULE_TYPE)-v$(IMG_VERSION)_$(IMG_SUB_VERSION).lzma.img 
QTN_PKG_SOURCE:=quantenna-sdk-v$(QTN_SDK_VERSION).tar.gz
QTN_PKG_SOURCE_DIR:=$(PKG_BUILD_DIR)/quantenna-sdk-v$(QTN_SDK_VERSION)

include $(INCLUDE_DIR)/package.mk
include $(INCLUDE_DIR)/host-build.mk

define Package/qtn_image
  SECTION:=net
  CATEGORY:=Qualcomm Packages
  TITLE:= Quantenna 5G WiFi module image.
  DEPENDS:=+@BUSYBOX_CONFIG_TFTPD +@BUSYBOX_CONFIG_FEATURE_TFTP_PUT +@BUSYBOX_CONFIG_FEATURE_TFTP_BLOCKSIZE +@BUSYBOX_CONFIG_UDPSVD
endef

define Package/qtn_image_source
  SECTION:=net
  CATEGORY:=Qualcomm Packages
  TITLE:= Quantenna 5G WiFi module source code.
  DEPENDS:=+qtn_image
endef

define Package/qtn_image_source/config
	choice
		prompt "Quantenna SDK version"
		default QTN_SDK_VER_37_3_0_50 if !ZYXEL_SONIQ
		default QTN_SDK_VER_37_4_0_97 if ZYXEL_SONIQ
		help
			Select the version of Quantenna image.

#		config QTN_SDK_VER_37_3_0_25
#			bool "v37.3.0.25 [acR3.0]"
#			help
#				Quantenna SDK v37.3.0.25 [acR3.0] 2015-02-27
				
		config QTN_SDK_VER_37_3_0_50
			bool "v37.3.0.50 [acR3.2.1]"
			depends on !ZYXEL_SONIQ
			help
				Quantenna SDK v37.3.0.50 [acR3.2.1] 2015-08-18
		
		config QTN_SDK_VER_37_4_0_46
			bool "v37.4.0.46 [acR4.2]"
			depends on !ZYXEL_SONIQ
			help
				Quantenna SDK v37.4.0.46 [acR4.2] 2015-12-18
				
		config QTN_SDK_VER_37_4_0_62
			bool "v37.4.0.62 [acR4.3.1]"
			depends on !ZYXEL_SONIQ
			help
				Quantenna SDK v37.4.0.62 [acR4.3.1] 2016-04-15

		config QTN_SDK_VER_37_4_0_62_1
			bool "v37.4.0.62.1 [acR4.3.1.1]"
			depends on !ZYXEL_SONIQ
			help
				Quantenna SDK v37.4.0.62.1 [acR4.3.1.1] 2016-05-12
		
		config QTN_SDK_VER_37_4_15_62
			bool "v37.4.15.62 [acR4.3.4]"
			depends on !ZYXEL_SONIQ
			help
				Quantenna SDK v37.4.15.62 [acR4.3.4] 2016-09-15

		config QTN_SDK_VER_37_4_0_81
			bool "v37.4.0.81 [acR4.4]"
			depends on !ZYXEL_SONIQ
			help
				Quantenna SDK v37.4.0.81 [acR4.4] 2016-08-24

		config QTN_SDK_VER_37_4_0_89
			bool "v37.4.0.89 [acR4.5]"
			depends on !ZYXEL_SONIQ
			help
				Quantenna SDK v37.4.0.89 [acR4.5] 2016-11-10

		config QTN_SDK_VER_37_4_0_97
			bool "v37.4.0.97 [acR4.6]"
			help
				Quantenna SDK v37.4.0.97 [acR4.6] 2016-01-19
				
		depends on PACKAGE_qtn_image || PACKAGE_qtn_image_source || PACKAGE_libqcsapi_client || PACKAGE_call_qcsapi_client
	endchoice
	
	config QTN_SDK_VER
		string 
#		default 37.3.0.25 if QTN_SDK_VER_37_3_0_25
		default 37.3.0.50 if QTN_SDK_VER_37_3_0_50
		default 37.4.0.46 if QTN_SDK_VER_37_4_0_46
		default 37.4.0.62 if QTN_SDK_VER_37_4_0_62
		default 37.4.0.62.1 if QTN_SDK_VER_37_4_0_62_1
		default 37.4.15.62 if QTN_SDK_VER_37_4_15_62
		default 37.4.0.81 if QTN_SDK_VER_37_4_0_81
		default 37.4.0.89 if QTN_SDK_VER_37_4_0_89
		default 37.4.0.97 if QTN_SDK_VER_37_4_0_97
		depends on PACKAGE_qtn_image || PACKAGE_qtn_image_source || PACKAGE_libqcsapi_client || PACKAGE_call_qcsapi_client
		
	config QTN_UBOOT_VER
		string 
#		default 37.3.0.22 if QTN_SDK_VER_37_3_0_25
		default 37.3.0.26 if QTN_SDK_VER_37_3_0_50
		default 37.4.0.28 if QTN_SDK_VER_37_4_0_46
		default 37.4.0.28 if QTN_SDK_VER_37_4_0_62
		default 37.4.0.28 if QTN_SDK_VER_37_4_0_62_1
		default 37.4.0.29 if QTN_SDK_VER_37_4_15_62
		default 37.4.0.29 if QTN_SDK_VER_37_4_0_81
		default 37.4.0.29 if QTN_SDK_VER_37_4_0_89
		default 37.4.0.93 if QTN_SDK_VER_37_4_0_97
		depends on PACKAGE_qtn_image || PACKAGE_qtn_image_source || PACKAGE_libqcsapi_client || PACKAGE_call_qcsapi_client
	
	config ZY_QTN_IMG_SUBVER
		string "Set Quantenna image subversion"
		depends on PACKAGE_qtn_image 
endef

define Package/qtn_image/description
	Quantenna 5G WiFi module image
endef

define Package/qtn_image_source/description
	Quantenna 5G WiFi module source code
endef

#Disable Dependencies Check
define CheckDependencies
endef

define patchQTN
	rm -rf $(PKG_BUILD_DIR)/patches; mkdir -p $(PKG_BUILD_DIR)/patches
	$(call PatchDir/Quilt,$(PKG_BUILD_DIR),$(PATCH_DIR))
	cd $(PKG_BUILD_DIR); $(QUILT_CMD) push -a
	touch $(PKG_BUILD_DIR)/.quilt_used
	touch $(PKG_BUILD_DIR)/.quilt_checked
endef

define Build/Prepare

ifeq ($(CONFIG_PACKAGE_qtn_image_source),y)
	if [ ! -f $(DL_DIR)/$(QTN_PKG_SOURCE) ]; then \
		$(SCRIPT_DIR)/download.pl "$(DL_DIR)" "$(QTN_PKG_SOURCE)" "" "$(QTN_PKG_SOURCE_URL)" ;\
	fi
	/bin/tar -zxf $(DL_DIR)/$(QTN_PKG_SOURCE) -C $(PKG_BUILD_DIR)
	/bin/ln -s $(QTN_PKG_SOURCE_DIR) $(PKG_BUILD_DIR)/source
	$(patchQTN)
endif
	touch $(PKG_BUILD_DIR)/.prepared

endef

define Build/Compile

ifeq ($(CONFIG_PACKAGE_qtn_image_source),y)
#	make tools_path=$(HOST_QTN_TOOLS_PATH) fromscratch
	cd $(PKG_BUILD_DIR)/source; \
	for i in $$$$(ls -d buildroot/target/generic/target_*/etc); \
	do \
		echo -n "$(IMG_SUB_VERSION)" > $$$$i/zyxel_subversion; \
	done; \
	if [ ! -f $(PKG_BUILD_DIR)/source/.config.topaz*config ]; then \
		echo "" > linux/.scmversion && \
		env -u CONFIG_SITE sh -c "make topaz_rgmii_config" && \
		env -u CONFIG_SITE sh -c "make fromscratch"; \
	else \
		env -u CONFIG_SITE sh -c "make image"; \
	fi
endif

endef

define Build/InstallDev
endef

define Build/Clean
	$(RM) -rf $(PKG_BUILD_DIR)
	$(RM) -rf $(HOST_BUILD_DIR)
endef

define Package/qtn_image/install

#	$(INSTALL_DIR) $(1)/etc/init.d
#	$(INSTALL_BIN) $(FILES_DIR)/qtn_tftpd.sh $(1)/etc/init.d
#	$(INSTALL_DIR) $(1)/etc/rc3.d
#	ln -s ../init.d/qtn_tftpd.sh $(1)/etc/rc3.d/S46qtn_tftpd
	$(INSTALL_DIR) $(1)/usr/qtn
	
ifeq ($(CONFIG_PACKAGE_qtn_image_source),y)
	$(CP) $(QTN_PKG_SOURCE_DIR)/tftp/topaz-linux.lzma.img $(1)/usr/qtn/
	$(CP) $(QTN_PKG_SOURCE_DIR)/tftp/u-boot.bin $(1)/usr/qtn/
	echo -n $(IMG_VERSION) > $(1)/usr/qtn/sdk_version
	echo -n $(QTN_UBOOT_VER) > $(1)/usr/qtn/uboot_version
	echo -n $(IMG_SUB_VERSION) > $(1)/usr/qtn/zyxel_subversion
	
	mkdir -p $(IMAGE_DIR)/new; \
	UBOOT_VER=$(shell cat $(QTN_PKG_SOURCE_DIR)/common/ruby_version.h | grep UBOOT | awk '{ print $$3 }'); \
	cp $(QTN_PKG_SOURCE_DIR)/tftp/topaz-linux.lzma.img $(IMAGE_DIR)/new/$(IMG_FILE); \
	cp $(QTN_PKG_SOURCE_DIR)/tftp/u-boot.bin $(IMAGE_DIR)/new/u-boot-$$$$UBOOT_VER.bin
else
	$(CP) $(IMAGE_DIR)/$(IMG_FILE)  $(1)/usr/qtn/topaz-linux.lzma.img
	$(CP) $(IMAGE_DIR)/$(UBOOT_FILE)  $(1)/usr/qtn/u-boot.bin
	echo -n $(IMG_VERSION) > $(1)/usr/qtn/sdk_version
	echo -n $(QTN_UBOOT_VER) > $(1)/usr/qtn/uboot_version
	echo -n $(IMG_SUB_VERSION) > $(1)/usr/qtn/zyxel_subversion
endif
	
endef

define Package/qtn_image_source/install
endef

define Host/Prepare

ifeq ($(CONFIG_PACKAGE_qtn_image_source),y)
	if [ ! -f $(DL_DIR)/$(HOST_TOOL_SOURCE) ]; then \
		$(SCRIPT_DIR)/download.pl "$(DL_DIR)" "$(HOST_TOOL_SOURCE)" "" "$(HOST_TOOL_SOURCE_URL)"; \
	fi	
	/bin/tar -zxf $(DL_DIR)/$(HOST_TOOL_SOURCE) -C $(HOST_BUILD_DIR)/
	sudo sh -c "mkdir -p /usr/local/ARC/; ln -sf $(HOST_BUILD_DIR)/gcc /usr/local/ARC/gcc"
	touch $(HOST_BUILD_DIR)/.prepared
endif
	
endef

define Host/Compile
endef

define Host/Install
endef

define Host/Clean
	$(call Host/Clean/Default)
endef

$(eval $(call HostBuild))
$(eval $(call BuildPackage,qtn_image))
$(eval $(call BuildPackage,qtn_image_source))
