//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class TMAInspectorPaneController, TMAStrokeInspectorControlsController;
@protocol TMAStrokeInspectorArrayProvider;

@interface TMAStrokeInspectorController : NSViewController
{
    id <TMAStrokeInspectorArrayProvider> mAvailableStrokesProvider;
    TMAInspectorPaneController *mParentPane;
    TMAStrokeInspectorControlsController *mViewController;
    id mStroke;
}

@property(retain, nonatomic) id stroke; // @synthesize stroke=mStroke;
@property(nonatomic) TMAInspectorPaneController *parentPane; // @synthesize parentPane=mParentPane;
@property(nonatomic) id <TMAStrokeInspectorArrayProvider> availableStrokesProvider; // @synthesize availableStrokesProvider=mAvailableStrokesProvider;
- (void)setRepresentedObject:(id)arg1;
- (void)didBindToStroke;
- (void)awakeFromNib;
- (void)dealloc;

@end

