//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@protocol CAAnimationDelegate;

@interface TView : NSView
{
    struct CGSize _maxSize;
    struct CGSize _minSize;
    BOOL _isFlipped;
    BOOL _isOpaque;
    _Bool _delayWindowOrderingOnClickThrough;
    struct TNSRef<NSColor *, void> _backgroundColor;
    id <CAAnimationDelegate> _animationDelegate;
}

+ (void)notifyViewDidChangeBackingProperties:(id)arg1;
+ (void)notifyViewDidMoveToSuperview:(id)arg1;
+ (void)notifyView:(id)arg1 willMoveToSuperview:(id)arg2;
+ (void)notifyViewDidMoveToWindow:(id)arg1;
+ (void)notifyView:(id)arg1 willMoveToWindow:(id)arg2;
@property(nonatomic) id <CAAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
@property(nonatomic) _Bool delayWindowOrderingOnClickThrough; // @synthesize delayWindowOrderingOnClickThrough=_delayWindowOrderingOnClickThrough;
@property(nonatomic) BOOL isOpaque; // @synthesize isOpaque=_isOpaque;
@property(nonatomic) BOOL isFlipped; // @synthesize isFlipped=_isFlipped;
@property(nonatomic) struct CGSize minSize; // @synthesize minSize=_minSize;
@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setBoundsSize:(struct CGSize)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setWantsLayer:(BOOL)arg1;
- (void)configureAnimations:(_Bool)arg1;
- (void)viewDidChangeBackingProperties;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;
- (void)dealloc;
- (void)initCommon;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

