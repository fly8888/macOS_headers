//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CFNetwork/NSURLSessionTask.h>

@class NSArray, NSData, NSDate, NSDictionary, NSError, NSMutableArray, NSObject, NSProgress, NSString, NSURL, NSURLRequest, NSURLResponse, NSURLSession, NSURLSessionConfiguration, NSURLSessionTaskDependency, NSURLSessionTaskDependencyTree, NSURLSessionTaskHTTPAuthenticator, NSURLSessionTaskMetrics;
@protocol NSURLSessionAppleIDContext, OS_dispatch_queue, SZExtractor;

__attribute__((visibility("hidden")))
@interface __NSCFURLSessionTask : NSURLSessionTask
{
    unsigned long long _taskIdentifier;
    NSString *_taskDescription;
    NSURLRequest *_originalRequest;
    NSURLRequest *_currentRequest;
    NSURLResponse *_response;
    NSDate *_earliestBeginDate;
    long long _countOfBytesClientExpectsToSend;
    long long _countOfBytesClientExpectsToReceive;
    long long _countOfBytesReceived;
    long long __countOfPendingBytesReceivedEncoded;
    long long __countOfBytesReceivedEncoded;
    long long _countOfBytesSent;
    long long _countOfBytesExpectedToSend;
    long long _countOfBytesExpectedToReceive;
    long long _state;
    NSError *_error;
    struct _CFURLRequest *_currentCFURLRequest;
    double _startTime;
    NSURLSession *_session;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSString *_ledBellyServiceIdentifier;
    NSURL *_ledBellyFallbackURL;
    NSData *__TCPConnectionMetadata;
    unsigned int _TLSNegotiatedCipherSuite;
    float _priorityHint;
    long long _priorityValue;
    double _loadingPriorityValue;
    long long _bytesPerSecondLimitValue;
    struct __PerformanceTiming *_performanceTiming;
    NSDictionary *_backgroundTaskTimingData;
    BOOL _shouldSkipPreferredClientCertificateLookup;
    BOOL _cacheOnly;
    BOOL _preventsSystemHTTPProxyAuthentication;
    NSDictionary *_legacySocketStreamProperties;
    struct _CFHSTSPolicy *_cfHSTS;
    struct _CFURLCache *_cfCache;
    struct _CFURLCredentialStorage *_cfCreds;
    struct OpaqueCFHTTPCookieStorage *_cfCookies;
    int _cachePolicy;
    double _timeoutInterval;
    double _timeoutIntervalForResource;
    NSDictionary *_proxySettings;
    NSDictionary *_sslSettings;
    BOOL _shouldPipelineHTTP;
    BOOL _shouldUsePipelineHeuristics;
    BOOL _shouldSkipPipelineProbe;
    BOOL _shouldHandleCookies;
    int _cookieAcceptPolicy;
    BOOL _preventsIdleSystemSleep;
    NSArray *_contentDispositionFallbackArray;
    BOOL _allowsCellular;
    int _networkServiceType;
    BOOL _prohibitAuthUI;
    BOOL _strictContentLength;
    long long _suspensionThreshhold;
    NSString *_boundInterfaceIdentifier;
    BOOL _disallowCellular;
    unsigned long long _allowedProtocolTypes;
    long long _requestPriority;
    long long _expectedWorkload;
    double _timeWindowDelay;
    double _timeWindowDuration;
    NSString *_uniqueIdentifier;
    unsigned int _powerAssertion;
    unsigned int _darkWakePowerAssertion;
    struct __CFDictionary *_cachedSocketStreamProperties;
    NSURLSessionConfiguration *_configuration;
    BOOL _connectionIsCellular;
    id _protocolForTask;
    NSURLSessionTaskHTTPAuthenticator *_authenticator;
    BOOL _shouldReportTimingDataToAWD;
    NSString *_storagePartitionIdentifier;
    NSDictionary *_dependencyInfo;
    NSDictionary *_DuetActivityProperties;
    NSURLSessionTaskDependencyTree *_dependencyTree;
    NSURLSessionTaskDependency *_taskDependency;
    NSString *_pathToDownloadTaskFile;
    NSMutableArray *_transactionMetrics;
    NSURLSessionTaskMetrics *_incompleteTaskMetrics;
    NSDictionary *_trailers;
    BOOL _allowsQUIC;
    id <SZExtractor> _extractor;
    BOOL _extractorFinishedDecoding;
    BOOL _hasSZExtractor;
    BOOL _doesSZExtractorConsumeExtractedData;
    id <NSURLSessionAppleIDContext> _appleIDContext;
    BOOL _authenticatorConfiguredViaTaskProperty;
    NSProgress *_progress;
    NSProgress *_uploadProgress;
    NSProgress *_downloadProgress;
    BOOL _undeterminedUploadProgressState;
    BOOL _undeterminedDownloadProgressState;
    BOOL _isInUpload;
    BOOL _progressReportingFinished;
    NSURL *_publishingURL;
    NSURL *_backgroundPublishingURL;
    struct os_unfair_lock_s _unfair_lock;
    BOOL _preconnect;
    BOOL _extractorPreparedForExtraction;
}

+ (BOOL)supportsSecureCoding;
- (void)set_incompleteTaskMetrics:(id)arg1;
- (id)_incompleteTaskMetrics;
- (void)set_backgroundPublishingURL:(id)arg1;
- (id)_backgroundPublishingURL;
- (void)set_publishingURL:(id)arg1;
- (id)_publishingURL;
- (void)set_authenticatorConfiguredViaTaskProperty:(BOOL)arg1;
- (BOOL)_authenticatorConfiguredViaTaskProperty;
- (id)_appleIDContext;
- (void)set_doesSZExtractorConsumeExtractedData:(BOOL)arg1;
- (BOOL)_doesSZExtractorConsumeExtractedData;
- (void)set_hasSZExtractor:(BOOL)arg1;
- (BOOL)_hasSZExtractor;
- (void)set_extractorPreparedForExtraction:(BOOL)arg1;
- (BOOL)_extractorPreparedForExtraction;
- (void)set_extractorFinishedDecoding:(BOOL)arg1;
- (BOOL)_extractorFinishedDecoding;
- (id)_extractor;
- (void)set_allowsQUIC:(BOOL)arg1;
- (BOOL)_allowsQUIC;
- (void)set_trailers:(id)arg1;
- (id)_trailers;
- (unsigned int)_TLSNegotiatedCipherSuite;
- (void)set_TCPConnectionMetadata:(id)arg1;
- (id)_TCPConnectionMetadata;
- (void)set_DuetActivityProperties:(id)arg1;
- (id)_DuetActivityProperties;
- (id)taskDependency;
- (void)setDependencyTree:(id)arg1;
- (id)dependencyTree;
- (void)set_dependencyInfo:(id)arg1;
- (void)setAuthenticator:(id)arg1;
- (id)authenticator;
- (void)set_protocolForTask:(id)arg1;
- (id)_protocolForTask;
- (void)_setConnectionIsCellular:(BOOL)arg1;
- (BOOL)_connectionIsCellular;
- (void)set_darkWakePowerAssertion:(unsigned int)arg1;
- (unsigned int)_darkWakePowerAssertion;
- (void)set_powerAssertion:(unsigned int)arg1;
- (unsigned int)_powerAssertion;
- (void)set_storagePartitionIdentifier:(id)arg1;
- (id)_storagePartitionIdentifier;
- (void)set_uniqueIdentifier:(id)arg1;
- (id)_uniqueIdentifier;
- (void)set_requestPriority:(long long)arg1;
- (long long)_requestPriority;
- (void)set_allowedProtocolTypes:(unsigned long long)arg1;
- (unsigned long long)_allowedProtocolTypes;
- (void)set_suspensionThreshhold:(long long)arg1;
- (long long)_suspensionThreshhold;
- (void)set_strictContentLength:(BOOL)arg1;
- (BOOL)_strictContentLength;
- (void)set_prohibitAuthUI:(BOOL)arg1;
- (BOOL)_prohibitAuthUI;
- (void)set_allowsCellular:(BOOL)arg1;
- (BOOL)_allowsCellular;
- (void)set_contentDispositionFallbackArray:(id)arg1;
- (id)_contentDispositionFallbackArray;
- (void)set_preventsIdleSystemSleep:(BOOL)arg1;
- (BOOL)_preventsIdleSystemSleep;
- (void)set_cookieAcceptPolicy:(int)arg1;
- (int)_cookieAcceptPolicy;
- (void)set_shouldHandleCookies:(BOOL)arg1;
- (BOOL)_shouldHandleCookies;
- (void)set_shouldSkipPipelineProbe:(BOOL)arg1;
- (BOOL)_shouldSkipPipelineProbe;
- (void)set_shouldUsePipelineHeuristics:(BOOL)arg1;
- (BOOL)_shouldUsePipelineHeuristics;
- (void)set_shouldPipelineHTTP:(BOOL)arg1;
- (BOOL)_shouldPipelineHTTP;
- (void)set_sslSettings:(id)arg1;
- (id)_sslSettings;
- (void)set_proxySettings:(id)arg1;
- (id)_proxySettings;
- (void)set_timeoutIntervalForResource:(double)arg1;
- (double)_timeoutIntervalForResource;
- (void)set_timeoutInterval:(double)arg1;
- (double)_timeoutInterval;
- (void)set_cachePolicy:(int)arg1;
- (int)_cachePolicy;
- (void)set_cfCookies:(struct OpaqueCFHTTPCookieStorage *)arg1;
- (struct OpaqueCFHTTPCookieStorage *)_cfCookies;
- (void)set_cfCreds:(struct _CFURLCredentialStorage *)arg1;
- (struct _CFURLCredentialStorage *)_cfCreds;
- (void)set_cfCache:(struct _CFURLCache *)arg1;
- (struct _CFURLCache *)_cfCache;
- (void)set_cfHSTS:(struct _CFHSTSPolicy *)arg1;
- (struct _CFHSTSPolicy *)_cfHSTS;
- (void)set_pathToDownloadTaskFile:(id)arg1;
- (id)_pathToDownloadTaskFile;
- (void)set_preventsSystemHTTPProxyAuthentication:(BOOL)arg1;
- (BOOL)_preventsSystemHTTPProxyAuthentication;
- (void)set_cacheOnly:(BOOL)arg1;
- (BOOL)_cacheOnly;
- (void)set_shouldSkipPreferredClientCertificateLookup:(BOOL)arg1;
- (BOOL)_shouldSkipPreferredClientCertificateLookup;
- (void)set_backgroundTaskTimingData:(id)arg1;
- (id)_backgroundTaskTimingData;
- (void)set_performanceTiming:(struct __PerformanceTiming *)arg1;
- (struct __PerformanceTiming *)_performanceTiming;
- (void)set_loadingPriorityValue:(double)arg1;
- (double)_loadingPriorityValue;
- (void)set_priorityValue:(long long)arg1;
- (long long)_priorityValue;
- (void)set_ledBellyFallbackURL:(id)arg1;
- (id)_ledBellyFallbackURL;
- (void)setSession:(id)arg1;
- (id)session;
- (void)setStartTime:(double)arg1;
- (double)startTime;
- (void)set_currentCFURLRequest:(struct _CFURLRequest *)arg1;
- (struct _CFURLRequest *)_currentCFURLRequest;
- (void)setError:(id)arg1;
- (id)error;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)setCountOfBytesExpectedToReceive:(long long)arg1;
- (long long)countOfBytesExpectedToReceive;
- (void)setCountOfBytesExpectedToSend:(long long)arg1;
- (long long)countOfBytesExpectedToSend;
- (void)setCountOfBytesSent:(long long)arg1;
- (long long)countOfBytesSent;
- (void)set_countOfBytesReceivedEncoded:(long long)arg1;
- (long long)_countOfBytesReceivedEncoded;
- (void)set_countOfPendingBytesReceivedEncoded:(long long)arg1;
- (long long)_countOfPendingBytesReceivedEncoded;
- (void)setCountOfBytesReceived:(long long)arg1;
- (long long)countOfBytesReceived;
- (void)setCountOfBytesClientExpectsToReceive:(long long)arg1;
- (long long)countOfBytesClientExpectsToReceive;
- (void)setCountOfBytesClientExpectsToSend:(long long)arg1;
- (long long)countOfBytesClientExpectsToSend;
- (void)setEarliestBeginDate:(id)arg1;
- (id)earliestBeginDate;
- (void)setResponse:(id)arg1;
- (id)response;
- (void)setCurrentRequest:(id)arg1;
- (id)currentRequest;
- (void)setOriginalRequest:(id)arg1;
- (id)originalRequest;
- (void)setTaskDescription:(id)arg1;
- (id)taskDescription;
- (void)setTaskIdentifier:(unsigned long long)arg1;
- (unsigned long long)taskIdentifier;
- (BOOL)_preconnect;
- (void)set_preconnect:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_finishProgressReporting;
- (void)_completeUploadProgress;
- (id)progress;
- (void)_consumePendingBytesReceivedEncoded;
- (void)_appendCountOfPendingBytesReceivedEncoded:(long long)arg1;
- (id)_transactionMetrics;
- (void)_prepareNewTimingDataContainer;
- (id)_dependencyInfo;
- (void)setTaskDependency:(id)arg1;
- (BOOL)_shouldReportTimingDataToAWD;
- (void)set_shouldReportTimingDataToAWD:(BOOL)arg1;
- (void)_getAuthenticationHeadersForResponse:(struct _CFURLResponse *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (struct __CFSet *)_getAuthenticatorStatusCodes;
- (void)initializeHTTPAuthenticatorWithAppleIDContext:(id)arg1 statusCodes:(id)arg2;
- (void)_setAppleIDContext:(id)arg1;
- (void)set_extractor:(id)arg1;
- (struct __CFDictionary *)_copyATSState;
- (id)currentRequest_mainDocumentURL;
- (id)currentRequest_URL;
- (void)addAdditionalHeadersToRequest:(struct _CFURLRequest *)arg1;
- (void)_onSessionQueue_cleanupAndBreakCycles;
- (_Bool)shouldHandleCookiesAndSchemeIsAppropriate;
- (void)_setExplicitCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg1;
- (void)_setExplicitStorageSession:(struct __CFURLStorageSession *)arg1;
- (void)_setSocketProperties:(struct __CFDictionary *)arg1 connectionProperties:(struct __CFDictionary *)arg2;
- (const struct XCredentialStorage *)_createXCredentialStorage;
- (const struct XCookieStorage *)_createXCookieStorage;
- (const struct XURLCache *)_createXURLCache;
- (struct _CFHSTSPolicy *)_copyHSTSPolicy;
- (void)_onqueue_releasePowerAsssertion;
- (void)_releasePreventIdleSleepAssertionIfAppropriate;
- (void)_takePreventIdleSleepAssertionIfAppropriate;
- (int)_createAssertionWithType:(struct __CFString *)arg1 name:(struct __CFString *)arg2 assertion:(unsigned int *)arg3;
- (void)_reportTimingDataToAWD:(id)arg1;
- (id)_timingData;
- (void)_initializeTimingDataWithSessionConfiguration:(id)arg1;
- (struct __CFDictionary *)_copySocketStreamProperties;
- (void)adjustConditionalConnectionProperties:(struct __CFDictionary *)arg1;
- (long long)computeAdjustedPoolPriority;
- (id)_legacySocketStreamProperties;
- (void)set_legacySocketStreamProperties:(id)arg1;
- (int)_networkServiceType;
- (void)set_networkServiceType:(int)arg1;
- (BOOL)_disallowCellular;
- (void)set_disallowCellular:(BOOL)arg1;
- (id)_boundInterfaceIdentifier;
- (void)set_boundInterfaceIdentifier:(id)arg1;
- (void)set_TLSNegotiatedCipherSuite:(unsigned int)arg1;
- (id)_ledBellyServiceIdentifier;
- (void)set_ledBellyServiceIdentifier:(id)arg1;
- (double)_timeWindowDuration;
- (void)set_timeWindowDuration:(double)arg1;
- (double)_timeWindowDelay;
- (void)set_timeWindowDelay:(double)arg1;
- (long long)_expectedWorkload;
- (void)set_expectedWorkload:(long long)arg1;
- (void)updateCurrentRequest:(id)arg1;
- (struct _CFURLRequest *)_copyOriginalCFURLRequest;
- (struct _CFURLRequest *)_copyCurrentCFURLRequest;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)set_loadingPriority:(double)arg1;
- (double)_loadingPriority;
- (void)set_priority:(long long)arg1;
- (long long)_priority;
- (void)set_bytesPerSecondLimit:(long long)arg1;
- (long long)_bytesPerSecondLimit;
- (void)_onqueue_adjustPriorityHint:(float)arg1;
- (void)setPriority:(float)arg1;
- (float)priority;
- (id)workQueue;
- (void)resume;
- (void)suspend;
- (void)cancel;
- (id)description;
- (void)dealloc;
- (id)initWithTask:(id)arg1;
- (id)initWithOriginalRequest:(id)arg1 updatedRequest:(id)arg2 ident:(unsigned long long)arg3 session:(id)arg4;

@end

