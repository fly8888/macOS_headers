//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "OADDrawable.h"

@class ODDColorTransform, ODDNodePoint, ODDStyleDefinition;

@interface ODDDiagram : OADDrawable
{
    ODDNodePoint *mDocumentPoint;
    ODDColorTransform *mColorTransform;
    ODDStyleDefinition *mStyleDefinition;
}

- (id)description;
- (id)styleDefinition;
- (id)colorTransform;
- (void)setDocumentPoint:(id)arg1;
- (id)documentPoint;
- (void)setParentTextListStyle:(id)arg1;
- (void)dealloc;
- (id)init;

@end

