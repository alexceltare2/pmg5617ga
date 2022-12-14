#
# Copyright (C) 2006-2012 OpenWrt.org
#
# This is free software, licensed under the GNU General Public License v2.
# See /LICENSE for more information.
#

include $(TOPDIR)/rules.mk
include $(INCLUDE_DIR)/kernel.mk

PKG_NAME:=pure-ftpd
PKG_VERSION:=1.0.30
PKG_RELEASE:=1

PKG_SOURCE:=$(PKG_NAME)-$(PKG_VERSION).tar.gz
PKG_SOURCE_URL:=@ZyXEL_SITE/opensource/network/services
DL_DIR:=$(TOPDIR)/dl

PKG_BUILD_DIR:=$(BUILD_DIR)/$(PKG_NAME)-$(PKG_VERSION)

include $(INCLUDE_DIR)/package.mk

define Package/pure-ftpd
  SECTION:=net
  CATEGORY:=Base system
  TITLE:=A secure and standard-conformant FTP server.
  DEPENDS:=+libzcfg_msg +libzcmd_tool +libjson +libzcfg_fe_rdm_access +libzcfg_fe_rdm_struct
endef

ifeq ($(CONFIG_SMALL_RAM),y)
	FTP_CFLAGS += -DSMALL_RAM
endif

define Build/Configure
	$(call Build/Configure/Default, \
		--with-throttling \
		--with-virtualchroot \
		--with-cflags="$(FTP_CFLAGS)" \
	)
endef

define Package/pure-ftpd/install
	$(INSTALL_DIR) $(1)/usr/sbin
	$(CP) $(PKG_BUILD_DIR)/src/$(PKG_NAME) $(1)/usr/sbin
	$(INSTALL_DIR) $(1)/etc/pure-ftpd
	$(INSTALL_DATA) $(PKG_BUILD_DIR)/configuration-file/pure-ftpd.conf $(1)/etc/pure-ftpd
endef

$(eval $(call BuildPackage,pure-ftpd))
