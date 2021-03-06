//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBMultiPreviewController, FBReportView, NSMutableArray;

@interface FBReportStamp : NSObject
{
    NSMutableArray *_faces;
    struct CGRect _frame;
    struct __CTFont *_sampleFont;
    struct __CFDictionary *_sampleAttributes;
    struct __CTFont *_systemFont;
    struct __CFDictionary *_systemAttributes;
    struct __CTFont *_smallSystemFont;
    struct __CFDictionary *_smallSystemAttributes;
    struct __CFDictionary *_smallSystemBlackAttributes;
    FBReportView *_delegate;
    FBMultiPreviewController *_previewController;
    double _ascent;
    double _descent;
}

- (double)interPageMargin;
- (double)bottomMargin;
- (double)topMargin;
- (double)rightMargin;
- (double)leftMargin;
- (double)minorMargin;
- (struct CGRect)rectForPage;
- (void)drawPageBorderWithFrame:(struct CGRect)arg1;
- (void)drawInView:(id)arg1;
- (struct CGRect)frame;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)addFont:(id)arg1 info:(long long *)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 previewController:(id)arg2 delegate:(id)arg3;
- (void)_setupFonts;

@end

