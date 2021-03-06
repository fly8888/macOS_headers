//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, NSString, VCAudioRuleCollection, VCBitrateArbiter, VCVideoRuleCollections;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorLocalConfiguration : NSObject
{
    unsigned int _audioSSRC;
    unsigned int _videoSSRC;
    VCAudioRuleCollection *_audioRuleCollection;
    VCVideoRuleCollections *_videoRuleCollections;
    VCVideoRuleCollections *_screenRuleCollections;
    BOOL _allowAudioRecording;
    BOOL _allowAudioSwitching;
    int _preferredAudioCodec;
    unsigned int _audioUnitNumber;
    int _deviceRole;
    NSDictionary *_videoFeatureStrings;
    BOOL _allowRTCPFB;
    BOOL _isCaller;
    NSString *_basebandCodec;
    unsigned int _basebandCodecSampleRate;
    VCBitrateArbiter *_bitrateArbiter;
    NSSet *_captionsReceiverLanguages;
    NSSet *_captionsSenderLanguages;
}

@property(retain, nonatomic) NSSet *captionsReceiverLanguages; // @synthesize captionsReceiverLanguages=_captionsReceiverLanguages;
@property(retain, nonatomic) NSSet *captionsSenderLanguages; // @synthesize captionsSenderLanguages=_captionsSenderLanguages;
@property(retain, nonatomic) VCBitrateArbiter *bitrateArbiter; // @synthesize bitrateArbiter=_bitrateArbiter;
@property(nonatomic) int deviceRole; // @synthesize deviceRole=_deviceRole;
@property(nonatomic) unsigned int audioUnitNumber; // @synthesize audioUnitNumber=_audioUnitNumber;
@property(nonatomic) unsigned int basebandCodecSampleRate; // @synthesize basebandCodecSampleRate=_basebandCodecSampleRate;
@property(retain, nonatomic) NSString *basebandCodec; // @synthesize basebandCodec=_basebandCodec;
@property(nonatomic) BOOL isCaller; // @synthesize isCaller=_isCaller;
@property(nonatomic) BOOL allowRTCPFB; // @synthesize allowRTCPFB=_allowRTCPFB;
@property(nonatomic) unsigned int videoSSRC; // @synthesize videoSSRC=_videoSSRC;
@property(nonatomic) unsigned int audioSSRC; // @synthesize audioSSRC=_audioSSRC;
@property(retain, nonatomic) NSDictionary *videoFeatureStrings; // @synthesize videoFeatureStrings=_videoFeatureStrings;
@property(nonatomic) int preferredAudioCodec; // @synthesize preferredAudioCodec=_preferredAudioCodec;
@property(nonatomic) BOOL allowAudioSwitching; // @synthesize allowAudioSwitching=_allowAudioSwitching;
@property(nonatomic) BOOL allowAudioRecording; // @synthesize allowAudioRecording=_allowAudioRecording;
@property(retain, nonatomic) VCVideoRuleCollections *screenRuleCollections; // @synthesize screenRuleCollections=_screenRuleCollections;
@property(retain, nonatomic) VCVideoRuleCollections *videoRuleCollections; // @synthesize videoRuleCollections=_videoRuleCollections;
@property(retain, nonatomic) VCAudioRuleCollection *audioRuleCollection; // @synthesize audioRuleCollection=_audioRuleCollection;
- (void)dealloc;

@end

