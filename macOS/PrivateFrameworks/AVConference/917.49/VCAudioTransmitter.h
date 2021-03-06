//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCAudioTransmitter : NSObject
{
    struct tagHANDLE *_rtpHandle;
    unsigned int *_packetSent;
    unsigned int _sampleRate;
    unsigned int _samplesPerFrame;
}

- (BOOL)sendAudioSamples:(char *)arg1 withPayload:(int)arg2 timestamp:(unsigned int)arg3 byteCount:(int)arg4 marker:(int)arg5 nextInterval:(float)arg6 sentBytes:(int *)arg7 padding:(char *)arg8 paddingLength:(unsigned char)arg9 sendReport:(int)arg10;
- (BOOL)setupEncoders:(struct AudioStreamBasicDescription *)arg1 blockSize:(int)arg2;
- (void)dealloc;
- (id)initWithRTPHandle:(struct tagHANDLE *)arg1;

@end

