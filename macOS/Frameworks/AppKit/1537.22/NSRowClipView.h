//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSClipView.h>

#import <AppKit/CAAnimationDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSRowClipView : NSClipView <CAAnimationDelegate>
{
    struct CGRect _targetFrame;
    CDUnknownBlockType _animationFinishedHandler;
    double _fromYPosition;
    BOOL _shouldAdjustBounds;
    BOOL _forDeletion;
}

@property(nonatomic) BOOL shouldAdjustBounds; // @synthesize shouldAdjustBounds=_shouldAdjustBounds;
@property(nonatomic) double fromYPosition; // @synthesize fromYPosition=_fromYPosition;
@property(copy, nonatomic) CDUnknownBlockType animationFinishedHandler; // @synthesize animationFinishedHandler=_animationFinishedHandler;
@property(nonatomic) struct CGRect targetFrame; // @synthesize targetFrame=_targetFrame;
@property(nonatomic) BOOL forDeletion; // @synthesize forDeletion=_forDeletion;
- (int)_trackingAreasDirty;
- (void)_setTrackingAreasDirty:(int)arg1;
- (id)animationForKey:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)setUpGState;
- (void)cacheDisplayInRect:(struct CGRect)arg1 toBitmapImageRep:(id)arg2;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)_updateBoundsForSize:(struct CGSize)arg1;
- (BOOL)_useZinLayerBacking;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

