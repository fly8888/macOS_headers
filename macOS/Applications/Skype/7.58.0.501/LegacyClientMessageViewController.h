//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "BaseConversationViewController.h"

@class NSTextField, SkypePushButton;

@interface LegacyClientMessageViewController : BaseConversationViewController
{
    unsigned long long mode;
    NSTextField *messageField;
    SkypePushButton *okButton;
}

- (void).cxx_destruct;
- (void)okButtonAction:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateMessage;
- (void)removeConversationObservers;
- (void)addConversationObservers;
- (void)loadView;
- (id)init;

@end

