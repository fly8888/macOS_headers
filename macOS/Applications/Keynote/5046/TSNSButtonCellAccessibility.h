//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "__TSNSButtonCellAccessibility_super.h"

@protocol TSNSButtonCellAccessibilityPressActionDelegate;

@interface TSNSButtonCellAccessibility : __TSNSButtonCellAccessibility_super
{
}

+ (Class)tsaxBaseSafeCategoryClass;
+ (id)tsaxTargetClassName;
- (BOOL)accessibilityPerformPress;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
@property(retain, nonatomic, setter=tsaxSetPressActionDelegate:) id <TSNSButtonCellAccessibilityPressActionDelegate> tsaxPressActionDelegate;

@end

