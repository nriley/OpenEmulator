
/**
 * libemulation
 * Apple II Interface
 * (C) 2010-2011 by Marc S. Ressl (mressl@umich.edu)
 * Released under the GPL
 *
 * Defines the Apple II interface
 */

#ifndef _APPLEIIINTERFACE_H
#define _APPLEIIINTERFACE_H

#include "CanvasInterface.h"

typedef enum
{
    APPLEIIMMU_SLOTEXPANSIONMEMORY_WILL_UNMAP,
} AppleIIMMUNotification;

typedef enum
{
    APPLEIIVIDEO_GET_MODE,
    APPLEIIVIDEO_UPDATE,
    APPLEIIVIDEO_READ_FLOATINGBUS,
} AppleIIVideoMessage;

typedef enum
{
    APPLEIIVIDEO_MODE_DID_CHANGE = CANVAS_NOTIFICATION_END,
    APPLEIIVIDEO_DID_VSYNC,
} AppleIIVideoNotification;

#define APPLEIIVIDEO_TEXT   (1 << 0)
#define APPLEIIVIDEO_MIXED  (1 << 1)
#define APPLEIIVIDEO_PAGE2  (1 << 2)
#define APPLEIIVIDEO_HIRES  (1 << 3)

typedef enum
{
    APPLEIIGAMEPORT_GET_AN0,
    APPLEIIGAMEPORT_GET_AN1,
    APPLEIIGAMEPORT_GET_AN2,
    APPLEIIGAMEPORT_GET_AN3,
} AppleIIGamePortMessage;

typedef enum
{
    APPLEIIGAMEPORT_DID_STROBE,
    APPLEIIGAMEPORT_AN0_DID_CHANGE,
    APPLEIIGAMEPORT_AN1_DID_CHANGE,
    APPLEIIGAMEPORT_AN2_DID_CHANGE,
    APPLEIIGAMEPORT_AN3_DID_CHANGE,
} AppleIIGamePortNotification;

#endif
