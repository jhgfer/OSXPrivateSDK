//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OADDrawable.h>

@class ODDColorTransform, ODDNodePoint, ODDStyleDefinition;

__attribute__((visibility("hidden")))
@interface ODDDiagram : OADDrawable
{
    ODDNodePoint *mDocumentPoint;
    ODDColorTransform *mColorTransform;
    ODDStyleDefinition *mStyleDefinition;
}

- (id)styleDefinition;
- (id)colorTransform;
- (void)setDocumentPoint:(id)arg1;
- (id)documentPoint;
- (void)setParentTextListStyle:(id)arg1;
- (void)dealloc;
- (id)init;

@end

