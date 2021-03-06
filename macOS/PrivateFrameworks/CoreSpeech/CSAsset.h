//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface CSAsset : NSObject
{
    NSDictionary *_decodedInfo;
    NSString *_path;
    NSString *_resourcePath;
}

+ (id)defaultFallBackAssetForVoiceTrigger;
+ (id)fallBackAssetResourcePath;
+ (id)assetForAssetType:(unsigned long long)arg1 resourcePath:(id)arg2;
+ (id)hybridEndpointerAssetFilename;
+ (BOOL)isHybridEndpointerAvailableForCurrentPlatform;
@property(readonly, nonatomic) NSString *resourcePath; // @synthesize resourcePath=_resourcePath;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *hashFromResourcePath;
- (id)getStringForKey:(id)arg1 category:(id)arg2 default:(id)arg3;
- (BOOL)getBoolForKey:(id)arg1 category:(id)arg2 default:(BOOL)arg3;
- (id)getNumberForKey:(id)arg1 category:(id)arg2 default:(id)arg3;
@property(readonly, nonatomic) NSString *assetVersion;
- (id)_decodeJson:(id)arg1;
@property(readonly, nonatomic) NSDictionary *dictionary;
- (id)initWithResourcePath:(id)arg1 configFile:(id)arg2;
@property(readonly, nonatomic) float VTFirstPassThreshold;
@property(readonly, nonatomic) NSString *VTFirstPassConfigPathNDAPI;
@property(readonly, nonatomic) NSString *VTSecondPassRecognizerToken;
@property(readonly, nonatomic) float VTSecondPassRecognizerScoreScaleFactor;
@property(readonly, nonatomic) float VTSecondPassRecognizerThresholdOffset;
@property(readonly, nonatomic) BOOL VTSecondPassUserKeywordSpotting;
@property(readonly, nonatomic) NSString *VTSecondPassConfigPathRecognizer;
@property(readonly, nonatomic) float VTSecondPassLoggingThreshold;
@property(readonly, nonatomic) float VTSecondPass2ndChanceThreshold;
@property(readonly, nonatomic) float VTSecondPassThreshold;
@property(readonly, nonatomic) NSString *VTSecondPassConfigPathNDAPI;
@property(readonly, nonatomic) unsigned long long VTSecondPassExtraSamplesAtStart;
@property(readonly, nonatomic) float keywordDetectorWaitTimeSinceVT;
@property(readonly, nonatomic) NSString *keywordDetectorConfigPathRecognizer;
@property(readonly, nonatomic) float keywordDetectorThreshold;
@property(readonly, nonatomic) float speakerDetectorRetrainTriggerThreshold;
@property(readonly, nonatomic) float speakerDetectorThreshold;
@property(readonly, nonatomic) NSString *speakerDetectorNDAPIConfigPath;
@property(readonly, nonatomic) float CVTTwoShotDecisionWaitTime;
@property(readonly, nonatomic) float CVTTwoShotThreshold;
@property(readonly, nonatomic) float CVTThreshold;
@property(readonly, nonatomic) NSString *CVTConfigPathNDAPI;

@end

