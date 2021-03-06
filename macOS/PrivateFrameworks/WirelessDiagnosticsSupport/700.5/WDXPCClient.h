//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface WDXPCClient : NSObject
{
    NSXPCConnection *_xpcConnection;
    id _delegate;
}

@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)receivedPacketData:(id)arg1;
- (unsigned long long)subscriptions;
- (BOOL)setEventSubscriptions:(unsigned long long)arg1 error:(id *)arg2;
- (void)dealloc;
- (void)invalidate;
- (id)init;

@end

