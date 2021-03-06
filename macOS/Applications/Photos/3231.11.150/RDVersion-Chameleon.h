//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDVersion.h>

#import "KHPhotoInfoProtocol-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSString;
@protocol KHEventInfoProtocol, MapPointOfInterestProtocol, NSCopying;

@interface RDVersion (Chameleon) <KHPhotoInfoProtocol>
+ (id)imageLoadingQueue;
+ (id)pageLayoutVersionsForUuids:(id)arg1 fromDatabase:(id)arg2;
+ (id)pageLayoutPropertiesForVersionTable:(id)arg1;
- (void)cancelPageLayoutImageSuitableForSize:(struct CGSize)arg1 withObserverTarget:(id)arg2;
- (void)cancelPageLayoutImageWithObserverTarget:(id)arg1;
- (id)pageLayoutImageSuitableForSize:(struct CGSize)arg1 quality:(unsigned long long)arg2 withObserverTarget:(id)arg3 selector:(SEL)arg4 object:(id)arg5;
- (id)pageLayoutImageSuitableForSize:(struct CGSize)arg1 withObserverTarget:(id)arg2 selector:(SEL)arg3 object:(id)arg4;
- (id)pageLayoutImageWithObserverTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)cancelPageLayoutImageLoadingRequestWithIdentifier:(id)arg1;
- (id)loadPageLayoutImageSuitableForSize:(struct CGSize)arg1 quality:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)pageLayoutAspectRatioThumbnailImage;
- (id)pageLayoutThumbnailImage;
- (id)pageLayoutImageSuitableForSize:(struct CGSize)arg1;
- (id)pageLayoutImageSuitableForSize:(struct CGSize)arg1 quality:(unsigned long long)arg2;
- (id)pageLayoutImage;
@property(readonly) double pageLayoutNormalizedRating;
- (id)pageLayoutRating;
@property(readonly) NSArray *pageLayoutKeywordInfos;
@property(readonly) NSArray *pageLayoutFaceInfos;
@property(readonly) NSDictionary *pageLayoutExifMetaData;
- (id)pageLayoutLocationMetaDataForLanguage:(id)arg1;
@property(readonly) id <MapPointOfInterestProtocol> pageLayoutLocationMetaData;
- (id)pageLayoutLocation;
- (BOOL)pageLayoutImageHasLightAdjustments;
- (BOOL)pageLayoutImageHasColorAdjustments;
- (BOOL)pageLayoutImageHasRedEyeAdjustments;
- (BOOL)pageLayoutImageHasBorderEffects;
@property(readonly) id <KHEventInfoProtocol> pageLayoutEventInfo;
@property(readonly) NSString *pageLayoutEventID;
@property(readonly) unsigned long long pageLayoutOrientation;
@property(readonly) double pageLayoutImageAspectRatio;
@property(readonly) struct CGSize pageLayoutImageSize;
- (BOOL)pageLayoutImageValidSuitableForSize:(struct CGSize)arg1;
- (BOOL)pageLayoutImageValid;
- (BOOL)pageLayoutImageExistsSuitableForSize:(struct CGSize)arg1;
- (BOOL)pageLayoutImageExists;
- (unsigned long long)pageLayoutCurrentFileSize;
@property(readonly) NSString *pageLayoutFilename;
@property(readonly) NSDate *pageLayoutPhotoModificationDate;
@property(readonly) NSDate *pageLayoutPhotoDate;
@property(readonly) NSString *pageLayoutAnnotation;
@property(readonly) NSString *pageLayoutTitle;
@property(readonly) NSString *pageLayoutPhotoID;
@property(readonly) id <NSCopying> pageLayoutPhotoAddress;
- (void)pageLayoutEncodeWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

