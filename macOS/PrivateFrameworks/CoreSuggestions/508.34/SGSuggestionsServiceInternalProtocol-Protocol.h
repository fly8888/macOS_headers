//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreSuggestions/_SGSuggestionsServiceBaseProtocol-Protocol.h>

@class NSArray, NSDate, NSNumber, NSString;

@protocol SGSuggestionsServiceInternalProtocol <_SGSuggestionsServiceBaseProtocol>
- (void)sleepWithCompletion:(void (^)(NSError *))arg1;
- (BOOL)sleep:(id *)arg1;
- (void)daemonExitWithCompletion:(void (^)(NSError *))arg1;
- (BOOL)daemonExit:(id *)arg1;
- (void)removeAllStoredPseudoContactsWithCompletion:(void (^)(NSError *))arg1;
- (BOOL)removeAllStoredPseudoContacts:(id *)arg1;
- (void)drainQueueCompletelyWithCompletion:(void (^)(NSError *))arg1;
- (BOOL)drainQueueCompletely:(id *)arg1;
- (BOOL)sendRTCLogs:(id *)arg1;
- (void)clearCachesFully:(BOOL)arg1 withCompletion:(void (^)(NSError *))arg2;
- (BOOL)clearCachesFully:(BOOL)arg1 error:(id *)arg2;
- (void)predictedCCEmailAddressesWithToAddresses:(NSArray *)arg1 ccAddresses:(NSArray *)arg2 fromAddress:(NSString *)arg3 date:(double)arg4 bounds:(NSArray *)arg5 withCompletion:(void (^)(NSArray *, NSError *))arg6;
- (NSArray *)predictedCCEmailAddressesWithToAddresses:(NSArray *)arg1 ccAddresses:(NSArray *)arg2 fromAddress:(NSString *)arg3 date:(double)arg4 bounds:(NSArray *)arg5 error:(id *)arg6;
- (void)predictedToEmailAddressesWithToAddresses:(NSArray *)arg1 ccAddresses:(NSArray *)arg2 fromAddress:(NSString *)arg3 date:(double)arg4 bounds:(NSArray *)arg5 withCompletion:(void (^)(NSArray *, NSError *))arg6;
- (NSArray *)predictedToEmailAddressesWithToAddresses:(NSArray *)arg1 ccAddresses:(NSArray *)arg2 fromAddress:(NSString *)arg3 date:(double)arg4 bounds:(NSArray *)arg5 error:(id *)arg6;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(NSString *)arg1 domainIdentifiers:(NSArray *)arg2 completion:(void (^)(NSError *))arg3;
- (void)resetConfirmationAndRejectionHistoryWithCompletion:(void (^)(NSError *))arg1;
- (BOOL)resetConfirmationAndRejectionHistory:(id *)arg1;
- (void)suggestEventsInFutureLimitTo:(unsigned long long)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (NSArray *)suggestEventsInFutureLimitTo:(unsigned long long)arg1 error:(id *)arg2;
- (void)suggestEventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned int)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (NSArray *)suggestEventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (void)suggestEventsStartingAt:(NSDate *)arg1 endingAt:(NSDate *)arg2 prefix:(NSString *)arg3 limitTo:(unsigned long long)arg4 withCompletion:(void (^)(NSArray *, NSError *))arg5;
- (NSArray *)suggestEventsStartingAt:(NSDate *)arg1 endingAt:(NSDate *)arg2 prefix:(NSString *)arg3 limitTo:(unsigned long long)arg4 error:(id *)arg5;
- (void)suggestEventsStartingAt:(NSDate *)arg1 endingAt:(NSDate *)arg2 limitTo:(unsigned long long)arg3 withCompletion:(void (^)(NSArray *, NSError *))arg4;
- (NSArray *)suggestEventsStartingAt:(NSDate *)arg1 endingAt:(NSDate *)arg2 limitTo:(unsigned long long)arg3 error:(id *)arg4;
- (void)suggestEventsStartingAt:(NSDate *)arg1 endingAt:(NSDate *)arg2 prefix:(NSString *)arg3 limitTo:(unsigned long long)arg4 options:(unsigned int)arg5 withCompletion:(void (^)(NSArray *, NSError *))arg6;
- (NSArray *)suggestEventsStartingAt:(NSDate *)arg1 endingAt:(NSDate *)arg2 prefix:(NSString *)arg3 limitTo:(unsigned long long)arg4 options:(unsigned int)arg5 error:(id *)arg6;
- (void)suggestEventsStartingAt:(NSDate *)arg1 endingAt:(NSDate *)arg2 limitTo:(unsigned long long)arg3 options:(unsigned int)arg4 withCompletion:(void (^)(NSArray *, NSError *))arg5;
- (NSArray *)suggestEventsStartingAt:(NSDate *)arg1 endingAt:(NSDate *)arg2 limitTo:(unsigned long long)arg3 options:(unsigned int)arg4 error:(id *)arg5;
- (void)emailAddressIsSignificant:(NSString *)arg1 withCompletion:(void (^)(NSNumber *, NSError *))arg2;
- (NSNumber *)emailAddressIsSignificant:(NSString *)arg1 error:(id *)arg2;
- (void)addInteractions:(NSArray *)arg1 bundleId:(NSString *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (BOOL)addInteractions:(NSArray *)arg1 bundleId:(NSString *)arg2 error:(id *)arg3;
- (void)addSearchableItems:(NSArray *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (BOOL)addSearchableItems:(NSArray *)arg1 error:(id *)arg2;
@end

