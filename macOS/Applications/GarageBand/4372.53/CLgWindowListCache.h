//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CLgNonretainerArray, NSArray;

@interface CLgWindowListCache : NSObject
{
    long long lastNumberListCount;
    NSArray *lastNumberList;
    long long provNumberListCount;
    NSArray *provNumberList;
    CLgNonretainerArray *sortedWindowRefs;
}

- (id)sortedWindows;
- (BOOL)sortedWindowsChanged;
- (void)dealloc;
- (id)init;

@end

