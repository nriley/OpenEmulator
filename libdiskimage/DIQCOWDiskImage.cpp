
/**
 * libdiskimage
 * QCOW Disk Image
 * (C) 2012 by Marc S. Ressl (mressl@umich.edu)
 * Released under the GPL
 *
 * Accesses QCOW disk images
 */

#include "DIQCOWDiskImage.h"

DIQCOWDiskImage::DIQCOWDiskImage()
{
    close();
}

bool DIQCOWDiskImage::open(DIBackingStore *backingStore)
{
    return false;
}

void DIQCOWDiskImage::close()
{
}

bool DIQCOWDiskImage::isWriteEnabled()
{
    return false;
}

DILong DIQCOWDiskImage::getBlockNum()
{
    return 0;
}

string DIQCOWDiskImage::getFormatLabel()
{
    return "";
}
    
bool DIQCOWDiskImage::readBlocks(DILong index, DIChar *buf, DIInt num)
{
    return false;
}

bool DIQCOWDiskImage::writeBlocks(DILong index, const DIChar *buf, DIInt num)
{
    return false;
}
