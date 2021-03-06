//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <StoreUI/FRContentViewController.h>

@class CKBag, FRSuggester, FRWKView, FRWindowBackgroundView, NSMutableArray;

@interface FRStoreWebViewController : FRContentViewController
{
    FRWKView *_webView;
    FRWindowBackgroundView *_splashView;
    CKBag *_bag;
    NSMutableArray *_pendingURLs;
    FRSuggester *_hintsSuggester;
}

@property(retain, nonatomic) FRSuggester *hintsSuggester; // @synthesize hintsSuggester=_hintsSuggester;
@property(retain, nonatomic) NSMutableArray *pendingURLs; // @synthesize pendingURLs=_pendingURLs;
@property(readonly, nonatomic) CKBag *bag; // @synthesize bag=_bag;
@property(readonly, nonatomic) FRWindowBackgroundView *splashView; // @synthesize splashView=_splashView;
@property(readonly, nonatomic) FRWKView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)goBack;
- (BOOL)canGoBack;
- (void)goForward;
- (BOOL)canGoForward;
- (id)replaceURLSchemeWithSecureURLScheme:(id)arg1;
- (BOOL)loadURL:(id)arg1 referrer:(id)arg2;
- (void)loadPendingURL;
- (void)delayLoadURL:(id)arg1 referrer:(id)arg2;
- (BOOL)canLoadURL:(id)arg1;
- (BOOL)loadRequest:(id)arg1;
- (void)clearHistory;
- (void)reload;
- (id)activeURL;
- (void)setTopContentInset:(double)arg1;
- (void)_reachabilityChanged:(id)arg1;
- (BOOL)allowUnsignedBag;
- (void)bagUpdateFailed:(id)arg1 withError:(id)arg2;
- (id)toolbarItemsFromBag:(id)arg1;
- (void)updateWithBag:(id)arg1;
- (void)setNavigationController:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)init;
- (void)webViewFinishedLoadingURL:(id)arg1 withError:(id)arg2;
- (void)webViewURL:(id)arg1 redirectedToURL:(id)arg2;
- (void)webViewCancelledLoadingURL:(id)arg1;
- (void)webViewStartedLoadingURL:(id)arg1;

@end

