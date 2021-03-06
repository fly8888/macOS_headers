//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MBCBoardView;

@interface MBCAnimation : NSObject
{
    struct timeval fStart;
    float fTime;
    float fLastElapsed;
    MBCBoardView *fView;
}

- (void)cancel;
- (void)runWithTime:(float)arg1 view:(id)arg2;
- (void)doStep:(id)arg1;
- (void)endState;
- (void)step:(float)arg1;
- (void)startState;
- (void)scheduleNextStep;

@end

