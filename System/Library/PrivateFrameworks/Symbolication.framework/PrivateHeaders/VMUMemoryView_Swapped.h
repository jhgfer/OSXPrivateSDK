//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VMUMemoryView.h"

@interface VMUMemoryView_Swapped : NSObject <VMUMemoryView>
{
    struct _VMURange _addressRange;
    unsigned long long _cursor;
    char *_data;
    id _gcKeepAlive;
}

- (id)description;
- (id)stringWithEncoding:(unsigned long long)arg1;
- (id)stringWithEncoding:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (id)stringWithEncoding:(unsigned long long)arg1 offset:(unsigned long long)arg2;
- (BOOL)charAtOffset:(unsigned long long)arg1;
- (struct dyld_image_info_64)dyldImageInfo64;
- (struct dyld_image_info_64)dyldImageInfo;
- (struct nlist_64)nlist_64;
- (struct nlist_64)nlist;
- (long long)LEB128;
- (unsigned long long)ULEB128;
- (id)arrayOfUInt64:(unsigned long long)arg1;
- (id)arrayOfUInt32:(unsigned long long)arg1;
- (id)arrayOfUInt16:(unsigned long long)arg1;
- (id)arrayOfUInt8:(unsigned long long)arg1;
- (id)arrayOfInt64:(unsigned long long)arg1;
- (id)arrayOfInt32:(unsigned long long)arg1;
- (id)arrayOfInt16:(unsigned long long)arg1;
- (id)arrayOfInt8:(unsigned long long)arg1;
- (id)readBytes:(unsigned long long)arg1;
- (unsigned long long)uint64;
- (unsigned int)uint32;
- (unsigned short)uint16;
- (unsigned char)uint8;
- (long long)int64;
- (int)int32;
- (short)int16;
- (BOOL)int8;
- (void)pointerAlignCursor;
- (BOOL)isCursorPointerAligned;
- (void)rewindCursor:(unsigned long long)arg1;
- (void)advanceCursor:(unsigned long long)arg1;
- (void)setCursor:(unsigned long long)arg1;
- (unsigned long long)cursor;
- (struct _VMURange)addressRange;
- (id)initWithAddressRange:(struct _VMURange)arg1 data:(char *)arg2 memory:(id)arg3;

@end

