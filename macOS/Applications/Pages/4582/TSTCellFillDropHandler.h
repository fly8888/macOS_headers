//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTDropHandler.h"

@interface TSTCellFillDropHandler : TSTDropHandler
{
    BOOL _expectingPromisedFiles;
}

+ (id)newDropHandlerForRep:(id)arg1 withDraggingInfo:(id)arg2;
+ (id)newDropHandlerForRep:(id)arg1 withDraggingInfo:(id)arg2 withPromisedTypes:(id)arg3;
+ (unsigned long long)dragOperationForPromisedTypes:(id)arg1;
+ (BOOL)p_nsImageOnPasteboard:(id)arg1 rep:(id)arg2;
+ (id)p_nsImageURLFromPasteboard:(id)arg1;
+ (id)p_nsColorFromPasteboard:(id)arg1;
@property(nonatomic) BOOL expectingPromisedFiles; // @synthesize expectingPromisedFiles=_expectingPromisedFiles;
- (void)updateDragAndDropCellRegionForPoint:(struct CGPoint)arg1;
- (BOOL)handleDragOperation:(unsigned long long)arg1 withSender:(id)arg2 atPoint:(struct CGPoint)arg3;
- (BOOL)handleDragOperation:(unsigned long long)arg1 withSender:(id)arg2 atPoint:(struct CGPoint)arg3 withPromisedFiles:(id)arg4;
- (void)handleFill:(id)arg1 atCellID:(struct TSUCellCoord)arg2;
- (unsigned long long)dragOperationForSender:(id)arg1 atPoint:(struct CGPoint)arg2 withPromisedTypes:(id)arg3;
- (id)initWithTableRep:(id)arg1 expectingPromisedFiles:(BOOL)arg2;

@end

