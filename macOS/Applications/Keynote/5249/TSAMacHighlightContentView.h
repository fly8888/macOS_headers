//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "TSAMacAnnotationViewSizing-Protocol.h"

@class NSButton, NSString;

@interface TSAMacHighlightContentView : NSView <TSAMacAnnotationViewSizing>
{
    NSButton *_convertToCommentButton;
}

@property(retain, nonatomic) NSButton *convertToCommentButton; // @synthesize convertToCommentButton=_convertToCommentButton;
- (void).cxx_destruct;
- (void)p_setupConstraints;
- (void)p_setupViews;
- (void)p_setup;
- (double)prototypeHeight;
- (void)setWidth:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

