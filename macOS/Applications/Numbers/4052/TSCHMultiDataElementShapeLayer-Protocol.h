//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class CALayer, TSCHChartSeries, TSCHMultiDataLayerAnimationInfo, TSDFill, TSDStroke;

@protocol TSCHMultiDataElementShapeLayer
- (void)updateElementFrameToNullForSeries:(TSCHChartSeries *)arg1 addingAnimationsToAnimationInfo:(TSCHMultiDataLayerAnimationInfo *)arg2;
- (CALayer *)currentValueLayer;
- (BOOL)aboveIntercept;
- (void)updateElementFrame:(struct CGRect)arg1 forSeries:(TSCHChartSeries *)arg2 addingAnimationsToAnimationInfo:(TSCHMultiDataLayerAnimationInfo *)arg3;
- (void)setFill:(TSDFill *)arg1 stroke:(TSDStroke *)arg2 withViewScale:(double)arg3;
@end

