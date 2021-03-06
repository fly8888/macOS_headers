//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "TPMacWordCountHUDDelegate-Protocol.h"
#import "TPStatisticsClient-Protocol.h"

@class NSString, TPDocumentStatistics, TPInteractiveCanvasController;

@interface TPMacWordCountHUDController : NSViewController <TPMacWordCountHUDDelegate, TPStatisticsClient>
{
    TPDocumentStatistics *_documentStatistics;
    TPInteractiveCanvasController *_ICC;
    BOOL _mustSetInitialPosition;
    BOOL _userDraggingHUD;
}

@property(readonly, nonatomic) BOOL userDraggingHUD; // @synthesize userDraggingHUD=_userDraggingHUD;
- (void)postSelectionStatistics:(id)arg1;
- (void)postDocumentStatistics:(id)arg1;
- (void)setStatisticsType:(int)arg1;
- (void)userDragHUDToPoint:(struct CGPoint)arg1 constrainToRect:(struct CGRect)arg2;
- (void)moveHUDToPercentageOfVisibleCanvasAreaPoint:(struct CGPoint)arg1;
- (struct CGRect)visibleCanvasArea;
@property(nonatomic) BOOL isVisible;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)teardown;
- (void)dealloc;
- (id)initWithParentView:(id)arg1 interactiveCanvasController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

