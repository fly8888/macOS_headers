//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTFormula.h"

@interface TSTWrappedFormula : TSTFormula
{
    int mFunctionIndex;
}

@property(nonatomic) int functionIndex; // @synthesize functionIndex=mFunctionIndex;
- (void)reparseWithStorage:(id)arg1 adjustExpressionTree:(CDUnknownBlockType)arg2;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2;
- (id)nodesToCheckForBareArgumentPlaceholders;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

