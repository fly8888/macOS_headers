//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <Safari/NSSplitViewDelegate-Protocol.h>
#import <Safari/NSTextViewDelegate-Protocol.h>
#import <Safari/ReopensAtLaunch-Protocol.h>

@class NSButton, NSString, NSTextView, SnippetEditorWKView;

__attribute__((visibility("hidden")))
@interface SnippetEditor : NSWindowController <NSTextViewDelegate, NSSplitViewDelegate, ReopensAtLaunch>
{
    NSTextView *_textView;
    SnippetEditorWKView *_wkView;
    NSButton *_updateAfterTypingCheckBox;
}

+ (void)reopen;
+ (id)sharedSnippetEditor;
- (void).cxx_destruct;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)textDidChange:(id)arg1;
- (void)updateNow:(id)arg1;
- (void)updatePreview;
- (void)windowDidLoad;
- (id)windowNibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

