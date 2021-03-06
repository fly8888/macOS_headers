//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSEvent, NSPasteboard, NSString;

@protocol MALoopBrowserDelegate

@optional
- (long long)downloadStatusForLoop:(NSString *)arg1;
- (void)setDraggingInLoopBrowser:(BOOL)arg1;
- (void)loopBrowserPasteRegionFromPasteboard;
- (void)loopBrowserPutFileIntoPasteboard;
- (void)loopBrowserDidClickPurchaseButton;
- (BOOL)loopBrowserShouldShowPurchaseButton;
- (int)loopBrowserRootKey;
- (BOOL)loopBrowserShouldFilterForMoreRelevantResults;
- (BOOL)loopBrowserShowsTempo;
- (BOOL)loopBrowserShowsLoopKey;
- (BOOL)loopBrowserShowsSongKey;
- (BOOL)loopBrowserShowsSignature;
- (void)loopBrowserDidDoubleClickOnHeader;
- (float)logicPrelistenVolume;
- (int)logicKeyCommandForKeyDownInLoopBrowser:(NSEvent *)arg1;
- (void)loopBrowserDidDropRegionOrEventFromPasteboard:(NSPasteboard *)arg1;
- (void)loopBrowserWillSetPrelistenVolume:(float)arg1;
- (void)loopBrowserWillStopPrelisten;
- (void)loopBrowserWillStartPrelistenAudioFile:(struct __CFString *)arg1 withKey:(int)arg2 andVolume:(float)arg3;
- (void)loopBrowserWillStartPrelistenAudioFile:(struct __CFString *)arg1 withKey:(int)arg2;
- (void)loopBrowserDidClickWebLoop:(NSString *)arg1;
- (void)loopBrowserDidSelectLoop:(NSString *)arg1;
- (void)loopBrowserDidEndIndexing;
- (void)loopBrowserDidStartIndexing;
@end

