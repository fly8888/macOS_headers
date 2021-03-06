//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class CKContextRequest, CKContextResult, NSString;

@protocol context_xpcProtocol
- (void)statusWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)logTransactionSuccessfulForResponseId:(NSString *)arg1;
- (void)logResultsSuppressedForResponseId:(NSString *)arg1;
- (void)logEngagementForResponseId:(NSString *)arg1 result:(CKContextResult *)arg2 rank:(unsigned long long)arg3 input:(NSString *)arg4;
- (void)shutdownServiceWithReply:(void (^)(void))arg1;
- (void)pingServiceWithReply:(void (^)(void))arg1;
- (void)portraitBlacklistWithReply:(void (^)(NSSet *))arg1;
- (void)findResponseByID:(NSString *)arg1 reply:(void (^)(CKContextResponse *))arg2;
- (void)findResultsForRequest:(CKContextRequest *)arg1 withReply:(void (^)(CKContextResponse *))arg2;
@end

