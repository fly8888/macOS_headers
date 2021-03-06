//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDSpecStroke.h"

#import "GSSPAutoEncodable-Protocol.h"

@interface TSDSpecStrokeSetWidth : TSDSpecStroke <GSSPAutoEncodable>
{
    double _width;
}

+ (id)newFromArchive:(const struct SpecStrokeSetWidthArchive *)arg1 unarchiver:(id)arg2;
+ (void)saveObject:(id)arg1 toArchive:(struct SpecStrokeSetWidthArchive *)arg2 archiver:(id)arg3;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)operationPropertyName;
- (id)apply:(id)arg1;
- (BOOL)canApplyOnObject:(id)arg1;
- (id)strokeModifiedFromStroke:(id)arg1;
- (id)initWithCurrentProperty:(id)arg1;
- (id)initSpecStrokeSetWidthWithArchive:(const struct SpecStrokeSetWidthArchive *)arg1 unarchiver:(id)arg2;
- (void)saveSpecStrokeSetWidthToArchive:(struct SpecStrokeSetWidthArchive *)arg1 archiver:(id)arg2;
- (void)deallocSOS;
- (void)populateGSSPSpecStrokeSetWidth:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

