//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSString;

@interface TSCHCallbackAnimationDelegate : NSObject <CAAnimationDelegate>
{
    id target;
    SEL selector;
}

@property(nonatomic) SEL selector; // @synthesize selector;
@property(retain, nonatomic) id target; // @synthesize target;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

