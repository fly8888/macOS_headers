//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <VideoSubscriberAccount/NSObject-Protocol.h>

@class NSError, NSUUID, VSViewServiceResponse;

@protocol VSViewServiceHostProtocol <NSObject>
- (void)_didCancelRequest:(NSUUID *)arg1;
- (void)_didChooseAdditionalProvidersForRequest:(NSUUID *)arg1;
- (void)_request:(NSUUID *)arg1 didFailWithError:(NSError *)arg2;
- (void)_request:(NSUUID *)arg1 didFinishWithResponse:(VSViewServiceResponse *)arg2;
- (void)_dismissViewController;
- (void)_presentViewController;
@end

