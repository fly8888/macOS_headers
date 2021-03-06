//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CallHistory/CHSynchronizedLoggable.h>

@class NSArray, NSDate, NSNumber, NSPredicate, NSString;
@protocol SyncManagerProtocol;

@interface CHManager : CHSynchronizedLoggable
{
    BOOL _showsTelephonyCalls;
    BOOL _showsFaceTimeVideoCalls;
    BOOL _showsFaceTimeAudioCalls;
    BOOL _generateSyncTransactions;
    BOOL _cacheIsDirty;
    BOOL _reCoalesce;
    unsigned int _limitingCallTypes;
    NSDate *_limitingStartDate;
    NSDate *_limitingEndDate;
    NSArray *_limitingCallKinds;
    NSPredicate *_postFetchingPredicate;
    NSString *_coalescingStrategy;
    NSArray *_recentCalls;
    long long _numberOfUnseenMissedCalls;
    id <SyncManagerProtocol> _syncManager;
    NSArray *_uncoalescedRecentCalls;
    NSArray *_uncoalescedUnFilteredRecentCalls;
    NSNumber *_unreadCallCount;
}

+ (unsigned int)CHCallStatusForCallWithDuration:(double)arg1 isOriginated:(BOOL)arg2 isAnswered:(BOOL)arg3;
+ (id)limitingCallKindsForCallType:(unsigned int)arg1;
@property(retain) NSNumber *unreadCallCount; // @synthesize unreadCallCount=_unreadCallCount;
@property(retain) NSArray *uncoalescedUnFilteredRecentCalls; // @synthesize uncoalescedUnFilteredRecentCalls=_uncoalescedUnFilteredRecentCalls;
@property(retain, nonatomic, getter=uncoalescedRecentCallsSync) NSArray *uncoalescedRecentCalls; // @synthesize uncoalescedRecentCalls=_uncoalescedRecentCalls;
@property BOOL reCoalesce; // @synthesize reCoalesce=_reCoalesce;
@property BOOL cacheIsDirty; // @synthesize cacheIsDirty=_cacheIsDirty;
@property(retain) id <SyncManagerProtocol> syncManager; // @synthesize syncManager=_syncManager;
@property long long numberOfUnseenMissedCalls; // @synthesize numberOfUnseenMissedCalls=_numberOfUnseenMissedCalls;
@property(retain, nonatomic) NSArray *recentCalls; // @synthesize recentCalls=_recentCalls;
@property BOOL generateSyncTransactions; // @synthesize generateSyncTransactions=_generateSyncTransactions;
- (void).cxx_destruct;
- (void)addMultipleCallsToCallHistory:(id)arg1;
- (void)flush;
- (void)callTimersReset;
- (double)callTimersGetLifetime;
- (double)callTimersGetOutgoing;
- (double)callTimersGetIncoming;
@property(nonatomic) BOOL showsTelephonyCalls; // @synthesize showsTelephonyCalls=_showsTelephonyCalls;
@property(copy, nonatomic) NSString *coalescingStrategy; // @synthesize coalescingStrategy=_coalescingStrategy;
@property(copy, nonatomic) NSPredicate *postFetchingPredicate; // @synthesize postFetchingPredicate=_postFetchingPredicate;
@property(copy, nonatomic) NSArray *limitingCallKinds; // @synthesize limitingCallKinds=_limitingCallKinds;
@property(copy, nonatomic) NSDate *limitingEndDate; // @synthesize limitingEndDate=_limitingEndDate;
@property(copy, nonatomic) NSDate *limitingStartDate; // @synthesize limitingStartDate=_limitingStartDate;
@property(nonatomic) unsigned int limitingCallTypes; // @synthesize limitingCallTypes=_limitingCallTypes;
@property(nonatomic) BOOL showsFaceTimeAudioCalls; // @synthesize showsFaceTimeAudioCalls=_showsFaceTimeAudioCalls;
@property(nonatomic) BOOL showsFaceTimeVideoCalls; // @synthesize showsFaceTimeVideoCalls=_showsFaceTimeVideoCalls;
- (void)setLimitingCallTypesSync:(unsigned int)arg1;
- (void)setLimitingCallKindsSync:(id)arg1;
- (void)clearDatabase;
- (void)deleteAllCalls;
- (id)getLimitsDictionary;
- (void)deleteAllCallsSync;
- (void)deleteCallAtIndex:(unsigned long long)arg1;
- (void)deleteCallsWithPredicate:(id)arg1;
- (void)deleteCall:(id)arg1;
- (void)deleteTheseCalls:(id)arg1;
- (void)deleteTheseCallsSync:(id)arg1;
- (void)updateBytesOfDataUsedFor:(id)arg1 with:(id)arg2;
- (void)markAllCallsAsReadWithPredicate:(id)arg1;
- (void)addToCallHistory:(id)arg1;
- (unsigned long long)fetchUnreadCallsCount;
- (unsigned long long)countCallsWithPredicate:(id)arg1;
- (unsigned long long)countCallsWithPredicateSync:(id)arg1;
- (id)fetchRecentCallsSyncWithCoalescing:(_Bool)arg1;
- (id)recentCallsWithPredicate:(id)arg1;
- (id)applyPredicate:(id)arg1 toCalls:(id)arg2;
- (id)unCoalesceCall:(id)arg1;
- (id)coalesceCalls:(id)arg1;
- (void)currentLocaleChanged:(id)arg1;
- (void)databaseChanged:(id)arg1;
- (void)addressBookChanged:(id)arg1;
- (void)registerForNotifications;
- (void)dealloc;
- (void)setInitialLimitingCallKinds:(id)arg1;
- (id)initWithFetchingLimitsDictionary:(id)arg1 andCoalescingStrategy:(id)arg2 andPostFetchingPredicate:(id)arg3 withQueue:(id)arg4;
- (id)init;
- (void)setDefaultInitValues;

@end

