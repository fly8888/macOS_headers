//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface BoxView : NSView
{
    NSView *_middleSectionView;
    NSView *_firstHorizontalSectionView;
    NSView *_secondHorizontalSectionView;
    NSView *_thirdHorizontalSectionView;
    NSView *_forthHorizontalSectionView;
    NSView *_horizontalSectionClipView;
}

@property(retain) NSView *horizontalSectionClipView; // @synthesize horizontalSectionClipView=_horizontalSectionClipView;
@property(retain) NSView *forthHorizontalSectionView; // @synthesize forthHorizontalSectionView=_forthHorizontalSectionView;
@property(retain) NSView *thirdHorizontalSectionView; // @synthesize thirdHorizontalSectionView=_thirdHorizontalSectionView;
@property(retain) NSView *secondHorizontalSectionView; // @synthesize secondHorizontalSectionView=_secondHorizontalSectionView;
@property(retain) NSView *firstHorizontalSectionView; // @synthesize firstHorizontalSectionView=_firstHorizontalSectionView;
@property(retain) NSView *middleSectionView; // @synthesize middleSectionView=_middleSectionView;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end

