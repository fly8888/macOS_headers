//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "__KNMacBaseSlideNavigatorViewAccessibility_super.h"

#import "KNSlideNavigatorLayerAccessibilityHostView-Protocol.h"

@class KNNavigatorLayerAccessibility;

@interface KNMacBaseSlideNavigatorViewAccessibility : __KNMacBaseSlideNavigatorViewAccessibility_super <KNSlideNavigatorLayerAccessibilityHostView>
{
}

+ (Class)tsaxBaseSafeCategoryClass;
+ (id)tsaxTargetClassName;
- (id)_tsaxViewController;
- (id)tsaxSlideTree;
- (BOOL)tsaxSelectSlideAtIndex:(unsigned long long)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityFocusedUIElement;
- (void)dealloc;
@property(readonly, nonatomic) KNNavigatorLayerAccessibility *tsaxNavigatorLayer;

@end

