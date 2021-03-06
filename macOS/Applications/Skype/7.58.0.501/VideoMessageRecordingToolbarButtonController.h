//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "BaseToolbarButtonController.h"

@class GlyphButton, NSLayoutConstraint, PulsingDotView;

@interface VideoMessageRecordingToolbarButtonController : BaseToolbarButtonController
{
    GlyphButton *cancelButton;
    GlyphButton *sendButton;
    NSLayoutConstraint *marginCancelRecord;
    NSLayoutConstraint *marginRecordSend;
    PulsingDotView *pulsingDot;
    GlyphButton *_recordButton;
    NSLayoutConstraint *_rightButtonConstraintToMiddleButton;
    NSLayoutConstraint *_leftButtonConstraintToMiddleButton;
}

+ (id)keyPathsForValuesAffectingEnableSendButton;
@property __weak NSLayoutConstraint *leftButtonConstraintToMiddleButton; // @synthesize leftButtonConstraintToMiddleButton=_leftButtonConstraintToMiddleButton;
@property __weak NSLayoutConstraint *rightButtonConstraintToMiddleButton; // @synthesize rightButtonConstraintToMiddleButton=_rightButtonConstraintToMiddleButton;
@property(retain) GlyphButton *recordButton; // @synthesize recordButton=_recordButton;
- (void).cxx_destruct;
- (void)logEventForSender:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)preferredInitialFirstResponder;
- (id)cancelPopoverMenu;
- (BOOL)validateMenuItem:(id)arg1;
- (void)sendButtonAction:(id)arg1;
- (void)restartRecordingAction:(id)arg1;
- (void)recordButtonAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)handleIsRecordingChanged;
- (void)updateLayout;
- (void)updateButtonVisibility;
- (void)removeConversationObservers;
- (void)addConversationObservers;
- (id)buttons;
- (BOOL)canRestartRecording;
- (BOOL)enableSendButton;
- (void)loadView;
- (BOOL)canHide;
- (id)init;

@end

