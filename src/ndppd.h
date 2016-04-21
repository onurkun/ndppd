// ndppd - NDP Proxy Daemon
// Copyright (C) 2011  Daniel Adolfsson <daniel@priv.nu>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
#pragma once

#define NDPPD_NS_BEGIN   namespace ndppd {
#define NDPPD_NS_END     }

#define NDPPD_VERSION   "0.2.4"

#include <assert.h>

#include "logger.h"

NDPPD_NS_BEGIN
typedef struct proxy    proxy_s;
typedef struct iface    iface_s;
typedef struct cidr     cidr_s;
typedef struct address  address_s;
typedef struct session  session_s;
typedef struct rule     rule_s;

NDPPD_NS_END


/*#include "conf.h"
#include "address.h"

#include "iface.h"
#include "proxy.h"
#include "session.h"
#include "rule.h"*/
