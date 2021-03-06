//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSString;

@interface MPLayerInternal : NSObject
{
    double numberOfLoops;
    double opacity;
    struct CGPoint position;
    double zPosition;
    struct CGSize size;
    double rotationAngle;
    double xRotationAngle;
    double yRotationAngle;
    double scale;
    double timeIn;
    double duration;
    double phaseInDuration;
    double phaseOutDuration;
    NSString *title;
    BOOL isTriggered;
    BOOL startsPaused;
    BOOL isAudioLayer;
    long long audioPriority;
    double durationPadding;
    NSString *layerID;
    long long zIndex;
    NSString *uuid;
    NSLock *containerLock;
    BOOL cleaningUp;
}

@property(nonatomic) BOOL cleaningUp; // @synthesize cleaningUp;
@property(retain, nonatomic) NSLock *containerLock; // @synthesize containerLock;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid;
@property(retain, nonatomic) NSString *layerID; // @synthesize layerID;
@property(nonatomic) double durationPadding; // @synthesize durationPadding;
@property(nonatomic) long long audioPriority; // @synthesize audioPriority;
@property(nonatomic) BOOL isAudioLayer; // @synthesize isAudioLayer;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) long long zIndex; // @synthesize zIndex;
@property(nonatomic) double phaseOutDuration; // @synthesize phaseOutDuration;
@property(nonatomic) double phaseInDuration; // @synthesize phaseInDuration;
@property(nonatomic) double duration; // @synthesize duration;
@property(nonatomic) BOOL startsPaused; // @synthesize startsPaused;
@property(nonatomic) BOOL isTriggered; // @synthesize isTriggered;
@property(nonatomic) double timeIn; // @synthesize timeIn;
@property(nonatomic) double scale; // @synthesize scale;
@property(nonatomic) double yRotationAngle; // @synthesize yRotationAngle;
@property(nonatomic) double xRotationAngle; // @synthesize xRotationAngle;
@property(nonatomic) double rotationAngle; // @synthesize rotationAngle;
@property(nonatomic) struct CGSize size; // @synthesize size;
@property(nonatomic) double zPosition; // @synthesize zPosition;
@property(nonatomic) struct CGPoint position; // @synthesize position;
@property(nonatomic) double opacity; // @synthesize opacity;
@property(nonatomic) double numberOfLoops; // @synthesize numberOfLoops;
- (void)dealloc;

@end

