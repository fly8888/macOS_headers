//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSResponder, NSString;

@interface TMAPreferencesPaneController : NSViewController
{
    NSResponder *mInitialFirstResponder;
}

@property(retain, nonatomic) NSResponder *initialFirstResponder; // @synthesize initialFirstResponder=mInitialFirstResponder;
- (void)p_windowWillClose:(id)arg1;
- (void)paneDidDisappear;
- (void)paneWillDisappear;
- (void)paneDidAppear;
- (void)paneWillAppear;
@property(readonly, nonatomic) NSString *toolbarIconName;
@property(readonly, nonatomic) NSString *label;
@property(readonly, nonatomic) NSString *identifier;
- (void)dealloc;

@end

