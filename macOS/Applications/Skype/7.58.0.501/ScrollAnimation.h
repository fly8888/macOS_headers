//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSAnimation.h>

@class NSClipView;

@interface ScrollAnimation : NSAnimation
{
    NSClipView *_contentView;
    struct CGPoint _fromBoundsOrigin;
    struct CGPoint _toBoundsOrigin;
}

@property(nonatomic) struct CGPoint toBoundsOrigin; // @synthesize toBoundsOrigin=_toBoundsOrigin;
@property(nonatomic) struct CGPoint fromBoundsOrigin; // @synthesize fromBoundsOrigin=_fromBoundsOrigin;
@property(retain, nonatomic) NSClipView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)setCurrentProgress:(float)arg1;
- (id)initWithDuration:(double)arg1 animationCurve:(unsigned long long)arg2;

@end

