//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSScroller.h>

@interface HUDScrollbar : NSScroller
{
}

+ (double)scrollerWidthForControlSize:(unsigned long long)arg1;
+ (double)scrollerWidth;
- (BOOL)isVertical;
- (BOOL)arrowsAreTogether;
- (void)drawUpperCap;
- (void)drawArrow:(unsigned long long)arg1 highlight:(BOOL)arg2;
- (void)drawKnobSlotInRect:(struct CGRect)arg1 highlight:(BOOL)arg2;
- (struct CGRect)rectForPart:(unsigned long long)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)drawKnob;
- (void)drawRect:(struct CGRect)arg1;

@end

