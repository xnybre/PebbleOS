/* SPDX-FileCopyrightText: 2024 Google LLC */
/* SPDX-License-Identifier: Apache-2.0 */

#pragma once

#include <stddef.h>

#include "applib/graphics/gtypes.h"
#include "process_management/app_install_types.h"
#include "pbl/util/uuid.h"

//! @file app.h
//!
//! @addtogroup Foundation
//! @{
//!   @addtogroup App
//!   @{

//! @internal
//! Requests the app to re-render by scheduling its top window to be rendered.
void app_request_render(void);

//! @internal
//! Common event loop called by app_event_loop().
void app_event_loop_common(void);

//! The event loop for C apps, to be used in app's main().
//! Will block until the app is ready to exit.
void app_event_loop(void);

bool app_launch(const Uuid *uuid);

uint16_t app_get_installed_app_count(void);
bool app_get_installed_app(uint16_t index, Uuid *uuid, char *name, size_t name_size);

//! @internal
//! Get the AppInstallId for the current app or worker
AppInstallId app_get_app_id(void);

//!   @} // end addtogroup App
//! @} // end addtogroup Foundation
