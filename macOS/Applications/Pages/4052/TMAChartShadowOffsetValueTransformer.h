//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

#import "TSCHUnretainedParent-Protocol.h"

@class TMAChartShadowDropInspectorPaneController;

@interface TMAChartShadowOffsetValueTransformer : NSValueTransformer <TSCHUnretainedParent>
{
    TMAChartShadowDropInspectorPaneController *mPaneController;
}

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
- (void)clearParent;
- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;
- (void)dealloc;
- (id)initWithPaneController:(id)arg1;

@end

