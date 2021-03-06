//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class MABackgroundView, MASlider, MATextField, NSObject, NSTrackingArea;
@protocol LgMoviePositioningControlDelegate;

@interface LgMoviePositioningControl : NSView
{
    MABackgroundView *_positioningControlBackgroundView;
    MATextField *_positioningLabelLeft;
    MATextField *_positioningLabelRight;
    MASlider *_positioningSlider;
    NSTrackingArea *_positioningControlTrackingArea;
    float _controlWidthOffset;
    float _minWidth;
    NSObject<LgMoviePositioningControlDelegate> *_delegate;
}

@property(nonatomic) NSObject<LgMoviePositioningControlDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)hideControl;
- (void)_hideControlAnimated;
- (void)_showControlAnimated;
- (id)menuForEvent:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)positioningSliderAction:(id)arg1;
@property(nonatomic) double maxValue;
@property(nonatomic) double minValue;
- (double)position;
- (void)setPosition:(double)arg1 leftLabel:(id)arg2 rightLabel:(id)arg3;
- (void)updatePositioningControl;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

