//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLPlatformObject, NSDate, NSMutableDictionary, NSMutableSet, NSString;

@interface CPLEngineStatusCenter : CPLEngineStorage <CPLAbstractObject>
{
    unsigned long long _currentGeneration;
    NSDate *_transactionStartDate;
    NSMutableSet *_persistedIdentifiers;
    NSMutableDictionary *_pendingTransientStatuses;
    NSMutableSet *_pendingDeletedTransientStatuses;
    NSMutableDictionary *_transientStatuses;
}

- (void).cxx_destruct;
- (id)status;
- (id)recordForStatusWithIdentifier:(id)arg1;
- (id)_statusFromCachesWithRecordIdentifier:(id)arg1;
- (void)_fillStatus:(id)arg1;
- (void)_fillStatus:(id)arg1 withClientCacheRecord:(id)arg2 cloudCacheRecord:(id)arg3 isConfirmed:(BOOL)arg4 isInIDMapping:(BOOL)arg5;
- (void)writeTransactionDidSucceed;
- (void)writeTransactionDidFail;
- (BOOL)resetWithError:(id *)arg1;
- (BOOL)discardNotificationForRecordWithIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)acknowledgeChangedStatuses:(id)arg1 error:(id *)arg2;
- (id)statusesForRecordsWithIdentifiers:(id)arg1;
- (id)statusChanges;
- (BOOL)notifyStatusForRecordHasChanged:(id)arg1 persist:(BOOL)arg2 error:(id *)arg3;
@property(readonly, nonatomic) BOOL hasStatusChanges;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end

