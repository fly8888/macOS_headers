//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSResponder.h>

@class NSWindow;

@interface GKDialogController : NSResponder
{
}

+ (id)mainWindow;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedDialogController;
- (void)dismiss:(id)arg1;
- (BOOL)presentViewController:(id)arg1;
- (Class)classForCoder;
- (void)dealloc;

// Remaining properties
@property NSWindow *parentWindow; // @dynamic parentWindow;

@end

