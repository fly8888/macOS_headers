//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCRDragSlideInfo : NSObject
{
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
    double _duration;
}

+ (id)dragSlideInfoWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3;
- (double)duration;
- (struct CGPoint)endPoint;
- (struct CGPoint)startPoint;
- (id)initWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3;

@end

