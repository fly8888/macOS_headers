//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSSlider;

@interface IPXZoomButton : NSButton
{
    BOOL _zoomsToMax;
    BOOL _toggleMaxZoom;
    NSSlider *_slider;
}

@property BOOL toggleMaxZoom; // @synthesize toggleMaxZoom=_toggleMaxZoom;
@property BOOL zoomsToMax; // @synthesize zoomsToMax=_zoomsToMax;
@property(readonly) __weak NSSlider *slider; // @synthesize slider=_slider;
- (void).cxx_destruct;
- (void)updateButtonState:(id)arg1;
- (void)performZoom:(id)arg1;
- (void)setupWithSlider:(id)arg1;
- (BOOL)allowsVibrancy;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

